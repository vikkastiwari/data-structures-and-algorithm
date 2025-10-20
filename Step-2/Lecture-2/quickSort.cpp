#include <iostream>
using namespace std;

/**
 *  on left side of pivot - all elements are less than pivot (can be unsorted)
 *  on right side of pivot - all elements are greater than pivot (can be unsorted)
 */
int sortElementAsPerPivot(vector<int> &arr, int low, int high) {
     int pivot = arr[low];
     int i = low, j = high;
     while(i<j){
          while(arr[i] <= pivot && i<=high-1){
               i++;
          }
          while(arr[j] > pivot && j>=low+1){
               j--;
          }
          if(i<j) swap(arr[i], arr[j]);
     }
     swap(arr[low], arr[j]); // place pivot at the partition index of two other arrays
     return j; // pivotIndex
}

void quickSort(vector<int> &arr, int low, int high){
     if(low<high){
          int pivotIndex = sortElementAsPerPivot(arr, low, high);
          quickSort(arr, low, pivotIndex - 1);
          quickSort(arr, pivotIndex + 1, high);
     }
}

int main() {
     vector<int> arr = {4,6,2,5,7,9,1,3};
     int size = arr.size();
     quickSort(arr, 0, size-1);
     for(int i=0;i<size;i++) {
          cout << arr[i] << " ";
     }
     cout << endl;
     return 0;
}