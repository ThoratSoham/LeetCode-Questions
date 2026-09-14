#include<iostream>
#include<vector>
#include<queue>
#include<string>
#include<fstream>
#include<cstdio>
#include<chrono>

using namespace std;

auto start = chrono::high_resolution_clock::now();

struct Entry {
    int value;
    int runNumber;
};

struct CompareEntry {
    bool operator()(const Entry& a, const Entry& b) {
        if (a.runNumber != b.runNumber){
            return a.runNumber > b.runNumber;
        }
        return a.value > b.value;
    }
};

struct MergeEntry {
    int value;
    int fileIndex;
};

struct CompareMergeEntry {
    bool operator()(const MergeEntry& a, const MergeEntry& b) {
        return a.value > b.value;
    }
};



int main() {
    priority_queue<Entry, vector<Entry>, CompareEntry> pq;
    string filename = "integers.txt";
    int M = 10000;
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file: " << filename << endl;
        return 1;
    }

    
    int val;
    int lastOutput = 0;
    int currentRun = 1;
    while (pq.size()<static_cast<size_t>(M) && file >> val) {
        pq.push({val, 1});
    }
    
    int previousRun = 1;
    ofstream outputFile("run_"+to_string(previousRun)+".txt", ios::app);
    if (!outputFile) {
        cerr << "Error opening output file for run " << previousRun << endl;
        return 1;
    }

    while (!pq.empty()) {
        Entry topEntry = pq.top();
        pq.pop();

        if (topEntry.runNumber != previousRun) {
            outputFile.close();
            outputFile.open("run_" + to_string(topEntry.runNumber) + ".txt", ios::app);
            previousRun = topEntry.runNumber;
        }

        outputFile << topEntry.value << endl;
        lastOutput = topEntry.value;
        currentRun = topEntry.runNumber;
        if (file >> val) {
            if (val >= lastOutput) {
                pq.push({val, currentRun});
            } else {
                pq.push({val, currentRun+1});
            }
        }
    }

    file.close();
    outputFile.close();
    

    priority_queue<MergeEntry, vector<MergeEntry>, CompareMergeEntry> mergePq;
    vector<ifstream> runFiles;
    for (int i = 1; i <= currentRun; ++i) {
        runFiles.emplace_back("run_" + to_string(i) + ".txt");
        if (!runFiles.back()) {
            cerr << "Error opening run file: run_" << i << ".txt" << endl;
            return 1;
        }
        int runVal;
        if (runFiles.back() >> runVal) {
            mergePq.push({runVal, i - 1});
        }
    }

    ofstream finalOutput("sorted_output_v1.txt");
    if (!finalOutput) {
        cerr << "Error opening final output file." << endl;
        return 1;
    }
    
    while (!mergePq.empty()) {
        MergeEntry topMergeEntry = mergePq.top();
        mergePq.pop();

        finalOutput << topMergeEntry.value << endl;

        int nextVal;
        if (runFiles[topMergeEntry.fileIndex] >> nextVal) {
            mergePq.push({nextVal, topMergeEntry.fileIndex});
        } else {
            runFiles[topMergeEntry.fileIndex].close();
            remove(("run_" + to_string(topMergeEntry.fileIndex + 1) + ".txt").c_str());
        }
    }
    finalOutput.close();

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    cout << "Execution time: " << duration.count() << " ms" << endl;
    
    return 0;
}
