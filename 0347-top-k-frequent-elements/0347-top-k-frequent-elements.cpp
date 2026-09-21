#include <vector>
#include <unordered_map>
#include <queue>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq_map;
        for (int num: nums){
            freq_map[num]++;
        }

        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> min_heap;

        for (const auto& [num,count]:freq_map){
            min_heap.push({count,num});
            if (min_heap.size()>k){
                min_heap.pop();
            }
        }
        vector<int> result;
        while(!min_heap.empty()){
            result.push_back(min_heap.top().second);
            min_heap.pop();
        }
        return result;
    }
};