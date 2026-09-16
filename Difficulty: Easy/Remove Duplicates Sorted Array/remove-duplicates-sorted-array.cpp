#include<vector>
#include<unordered_set>

class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> result;
        unordered_set<int> seen;
        
        for (int x : arr){
            if (seen.find(x) == seen.end()){
                seen.insert(x);
                result.push_back(x);
            }
        }
        return result;
    }
};