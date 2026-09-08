#include<unordered_map>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums){
                freq[num]++;
        }

        vector<pair<int, int>> vec(freq.begin(), freq.end());

        std::sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
        });

        vector<int> result;
        int count = 0;
        for (const auto& [key, value] : vec) {
            if (count >= k) break;
            result.push_back(key);
            count++;
        }
    return result;
    }
};