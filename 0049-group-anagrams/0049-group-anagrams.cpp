#include<unordered_map>
#include<vector>
#include<string>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram_map;
        for (int i = 0; i < strs.size(); i++){
            string temp = strs[i];
            string key = temp;
            sort(key.begin(), key.end());
            anagram_map[key].push_back(temp);
        }
        vector<vector<string>> result;
        for (const auto& pair : anagram_map){
            result.push_back(pair.second);
        }
        return result;
    }
};