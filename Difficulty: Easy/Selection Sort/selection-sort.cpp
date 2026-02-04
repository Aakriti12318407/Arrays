class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        // code here
        for (int i = 0 ; i < arr.size() - 1 ; i++){
            int minIndex = i;
            
            for (int j = i + 1 ; j < arr.size() ; j++){
                if(arr[j] < arr[minIndex]){
                    minIndex = j;
                }
            }
        int temp = arr[i];
        arr[i]= arr[minIndex];
        arr[minIndex]=temp;
        }
        
    }
};