#include<unordered_set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> nums_set;

        for(int num : nums){
            if (nums_set.count(num) > 0){
                return true;
            }
            nums_set.insert(num);
        }
        return false;
    }
};