## 01. Missing in Array

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1)

### Problem Description

**Task:** You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.Examples:Input: arr[] = [1, 2, 3, 5]

#### Examples

##### Example 1

- **Output:**
```text
2
```
- **Explanation:** Only 1 is present so the missing element is 2.Constraints:1 ≤ arr.size() ≤ 10⁶¹ ≤ arr[i] ≤ arr.size() + 1

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-07 12:21:49
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int max = arr.size();
        sort(arr.begin(), arr.end());
        
        if (arr[0] != 1){
            return 1;
        }
        
        for (int i = 0; i < max-1; i++){
            if (arr[i]+1 != arr[i+1]){
                return arr[i]+1;
                break;
            } 
        }
        
        return arr.back()+1;
    }
};
```

*Generated on: 10/7/2026, 12:34:57 PM*