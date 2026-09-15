class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int temp;
        for (int i = 1; i<arr.size(); i++){
            temp = arr[i];
            int j = i-1;
            while (j >= 0 && arr[j]>temp){
                arr[j+1] = arr[j];
                j--;
            }
        arr[j+1] = temp;
        }
    }
};