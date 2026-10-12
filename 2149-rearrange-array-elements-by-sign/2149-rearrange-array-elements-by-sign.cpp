class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int i =0, j =1;
        for (int k = 0; k < n; k++){
            if (nums[k] > 0){
                result[i] = nums[k];
                i+=2;
            } else {
                result[j] = nums[k];
                j+=2;
            }
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna