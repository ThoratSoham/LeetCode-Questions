class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        // code here
        int temp;
        for (int i = 0; i < arr.size()-1; i++)
        {
            int minindex = i;
            for (int j = i+1; j < arr.size() ; j++)
            {
                if (arr[j] < arr[minindex])
                {
                    minindex = j;
                }
            }
            temp = arr[minindex];
            arr[minindex] = arr[i];
            arr[i] = temp;
        }
    }
};