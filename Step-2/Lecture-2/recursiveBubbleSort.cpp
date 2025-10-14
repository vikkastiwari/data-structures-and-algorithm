#include <iostream>
using namespace std;

void recursiveBubbleSort(vector<int> &arr, int size) {
     // size == 0 will result into one more unnecessary call
     if(size==1) return;

     for(int i=0;i<size-1;i++){
          if(arr[i]>arr[i+1]){
               swap(arr[i],arr[i+1]);
          }
     }

     recursiveBubbleSort(arr, size-1);
}

int main() {
     vector<int> arr = {13,46,24,52,20,9};
     int size = sizeof(arr) / sizeof(arr[0]);
     recursiveBubbleSort(arr, size);
     for(int i=0;i<size;i++) {
          cout << arr[i] << " ";
     }
     cout << endl;
     return 0;
}