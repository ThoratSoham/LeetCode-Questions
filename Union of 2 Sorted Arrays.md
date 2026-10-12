## 01. Union of 2 Sorted Arrays

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1)

### Problem Description

**Task:** Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order. Union of two arrays can be defined as the set containing distinct elements that are present in either of the arrays.Examples:Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]Output: [1, 2, 3, 4, 5, 6, 7]Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]

#### Examples

##### Example 1

- **Output:**
```text
[1, 2]
```
- **Explanation:** Distinct elements including both the arrays are: 1 2.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n + m)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-12 11:22:59
- **Status:** Correct
- **Marks:** 4

```cpp
#include <set>
#include <algorithm> // For std::set_union
#include <iterator>

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int> set1 (a.begin(), a.end());
        set<int> set2 (b.begin(), b.end());
        set<int> result;
        set_union(set1.begin(), set1.end(), set2.begin(), set2.end(),
                  std::inserter(result, result.begin()));
        
       std::vector<int> vresult(result.begin(), result.end());
        
        return vresult;
    }
};
```

*Generated on: 10/12/2026, 11:26:58 AM*