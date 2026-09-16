class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max = 0;
        for (int i = 1; i < arr.size(); i++){
            if (arr[i] > arr[max]){ max = i;}
        }
        return arr[max];
    }
};
