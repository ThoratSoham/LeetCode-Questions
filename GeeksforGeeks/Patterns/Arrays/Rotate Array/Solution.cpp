#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        if (arr.empty()) return;
        d %= arr.size();   
        rotate(arr.begin(), arr.begin()+d, arr.end());        
    }
};