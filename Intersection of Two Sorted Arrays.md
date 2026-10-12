## 01. Intersection of Two Sorted Arrays

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-array-1587115620/1)

### Problem Description

**Task:** Given two sorted arrays arr1[] and arr2[]. Your task is to return the intersection of both arrays.Intersection of two arrays is said to be elements that are common in both arrays. The intersection should not count duplicate elements.Note: If there is no intersection then return an empty array.

#### Examples

##### Example 1

- **Input:**
```text
arr1[] = [1, 2, 3, 4], arr2[] = [2, 4, 6, 7, 8]
```
- **Output:**
```text
[2, 4]
```
- **Explanation:** 2 and 4 are only common elements in both the arrays.

##### Example 2

- **Input:**
```text
arr1[] = [1, 2, 2, 3, 4], arr2[] = [2, 2, 4, 6, 7, 8]
```
- **Output:**
```text
[2, 4]
```
- **Explanation:** 2 and 4 are the only common elements.

##### Example 3

- **Input:**
```text
arr1[] = [1, 2], arr2[] = [3, 4]
```
- **Output:**
```text
[]
```
- **Explanation:** No common elements.

#### Constraints

- **1.** `1 ≤ arr1.size(),arr2.size() ≤ 10⁵¹ ≤ arr1[i], arr2[i] ≤ 10⁶`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n + m)
- **Expected Auxiliary Space Complexity:** O(min(n, m))

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-12 11:36:57
- **Status:** Correct
- **Marks:** 2

```cpp
#include<algorithm>
#include<set>
#include<iterator>

class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        set<int> set1(arr1.begin(), arr1.end());
        set<int> set2(arr2.begin(), arr2.end());
        
        set<int> sresult;
        set_intersection(set1.begin(), set1.end(),
                                  set2.begin(), set2.end(),
                                  inserter(sresult, sresult.begin()));
                                  
        vector<int> vresult(sresult.begin(), sresult.end());
        
        return vresult;
    }
};
```

*Generated on: 10/12/2026, 11:37:27 AM*