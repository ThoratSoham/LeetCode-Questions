class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        if (arr.empty()){
            return 0;
        }
        
        if (arr.size() == 1) return 1;
        
        int max_len = 0;
        int current_len = 1;
        
        for (int i = 1; i<arr.size(); i++){
            if (arr[i] == arr[i-1]){
                current_len++;
            } else {
                current_len = 1;
            }
        max_len = max(current_len, max_len);
        }
    return max_len;
    }
};