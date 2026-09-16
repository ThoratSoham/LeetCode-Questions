class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        vector<int> dub_arr = arr;
        sort(dub_arr.begin(), dub_arr.end());
        return dub_arr == arr;
    }
};