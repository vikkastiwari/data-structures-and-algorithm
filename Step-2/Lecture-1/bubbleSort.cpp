#include <iostream>
using namespace std;

// Time complexity: O(N^2), (where N = size of the array), for the best, worst, and average cases.
int main() {
     int arr[] = {13,46,-24,52,20,-9};
     int size = sizeof(arr) / sizeof(arr[0]);

     for(int i=size-1;i>=0;i--) {
          for(int j=0;j<i;j++) {
               if(arr[j] > arr[j+1]) {
                    swap(arr[j], arr[j+1]);
               }
          }
     }
     for(int i=0;i<size;i++) {
          cout << arr[i] << " ";
     }
     cout << endl;
     return 0;
}