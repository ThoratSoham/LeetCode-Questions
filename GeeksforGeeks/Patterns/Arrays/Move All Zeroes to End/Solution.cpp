class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int non_zero_index = 0;
        for (int i = 0; i < arr.size(); i++){
            if (arr[i] != 0){
                arr[non_zero_index] = arr[i];
                non_zero_index++;
            }
        }
        
        while (non_zero_index < arr.size()){
            arr[non_zero_index] = 0;
            non_zero_index++;
        }
    }
};