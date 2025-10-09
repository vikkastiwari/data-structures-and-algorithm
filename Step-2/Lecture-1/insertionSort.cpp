#include <iostream>
using namespace std;

// Time complexity: O(N2), (where N = size of the array), for the worst, and average cases.

void print(int arr[], int size) {
     for(int i=0;i<size;i++) {
          cout << arr[i] << " ";
     }
     cout << endl;
}

int main() {
     int arr[] = {13,46,-24,52,20,-9};
     int size = sizeof(arr) / sizeof(arr[0]);

     for(int i=0;i<size;i++) {
          for(int j=i;j>=0;j--) { // we can use while loop as well
               if(j>0 && arr[j-1]>arr[j]){ // previous bigger > next smaller
                    swap(arr[j-1],arr[j]);
               }
          }
          print(arr, size);
     }
     return 0;
}