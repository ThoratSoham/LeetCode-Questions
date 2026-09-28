#include<vector>
class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if (low < high){
            int parti = partition(arr, low, high);
            
            quickSort(arr, low, parti - 1);
            quickSort(arr, parti + 1, high);
        }
        
    }

    int partition(vector<int>& arr, int low, int high) {
        // code here
        int pivot = arr[high];
        int i = (low - 1);
        
        for (int j = low; j<=high; j++){
            if (pivot > arr[j]){
                i++;
                swap(arr[j], arr[i]);
            }
        }
        swap(arr[high], arr[i+1]);
        return (i+1);
    }
};