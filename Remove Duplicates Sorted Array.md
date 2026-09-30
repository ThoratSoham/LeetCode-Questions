## 01. Remove Duplicates Sorted Array

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1)

### Problem Description

**Task:** You are given a sorted array arr[] containing positive integers. Your task is to remove all duplicate elements from this array such that each element appears only once. Return an array containing these distinct elements in the same order as they appeared.Examples :Input: arr[] = [2, 2, 2, 2, 2]

#### Examples

##### Example 1

- **Output:**
```text
[2]
```
- **Explanation:** After removing all the duplicates only one instance of 2 will remain i.e. [2] so modified array will contains 2 at first position and you should return array containing [2] after modifying the array.

##### Example 2

- **Input:**
```text
arr[] = [1, 2, 4]
```
- **Output:**
```text
[1, 2, 4]Explanation: As the array does not contain any duplicates so you should return [1, 2, 4].
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (5)

#### Solution 1 (C++)

- **Submitted:** 2026-09-30 14:53:55
- **Status:** Correct
- **Marks:** 0

```cpp
#include<unordered_set>
#include<vector>
class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        unordered_set<int> seen;
        vector<int> result;
        
        for (int num : arr){
            if (seen.find(num) == seen.end()){
                seen.insert(num);
                result.push_back(num);
            }
        }
        return result;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-09-30 14:52:40
- **Status:** Correct
- **Marks:** 0

```cpp
#include<unordered_set>
#include<vector>
class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        unordered_set<int> seen;
        vector<int> result;
        
        for (int num : arr){
            if (seen.find(num) == seen.end()){
                seen.insert(num);
                result.push_back(num);
            }
        }
        return result;
    }
};
```

#### Solution 3 (C++)

- **Submitted:** 2026-09-30 14:45:09
- **Status:** Correct
- **Marks:** 0

```cpp
#include<unordered_set>
#include<vector>
class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        unordered_set<int> seen;
        vector<int> result;
        
        for (int num : arr){
            if (seen.find(num) == seen.end()){
                seen.insert(num);
                result.push_back(num);
            }
        }
        return result;
    }
};
```

#### Solution 4 (C++)

- **Submitted:** 2026-09-30 14:44:06
- **Status:** Correct
- **Marks:** 0

```cpp
#include<unordered_set>
#include<vector>
class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        unordered_set<int> seen;
        vector<int> result;
        
        for (int num : arr){
            if (seen.find(num) == seen.end()){
                seen.insert(num);
                result.push_back(num);
            }
        }
        return result;
    }
};
```

#### Solution 5 (C++)

- **Submitted:** 2026-09-30 14:40:35
- **Status:** Correct
- **Marks:** 0

```cpp
#include<unordered_set>
#include<vector>
class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        unordered_set<int> seen;
        vector<int> result;
        
        for (int num : arr){
            if (seen.find(num) == seen.end()){
                seen.insert(num);
                result.push_back(num);
            }
        }
        return result;
    }
};
```

*Generated on: 9/30/2026, 2:57:24 PM*