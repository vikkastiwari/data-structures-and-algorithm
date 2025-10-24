// Remove Duplicates in-place from Sorted Array

#include <iostream>
using namespace std;

//Time Complexity: O(N)
// Space Complexity: O(1)
int removeDuplicates(vector<int> &arr, int size) {
     int i = 0, j = 1;
     while(j<size && i<size-1) {
          if(arr[i] != arr[j]) {
               arr[i+1] = arr[j];
               i++;
          } 
          j++;
     }
     return i+1;
}

int main() {
     vector<int> arr = {1,2,3,4,5};
     int size = arr.size();
     int k = removeDuplicates(arr, size);
     for(int i=0;i<k;i++){
          cout << arr[i] << " ";
     }
     cout << endl;
     return 0;
}