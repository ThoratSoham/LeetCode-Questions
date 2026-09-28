#include<vector>
#include<algorithm>

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
       std::rotate(arr.rbegin(), arr.rbegin()+1, arr.rend());       
    }
};