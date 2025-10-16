#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int selectedIndex, int size){
     if(selectedIndex >= size) return;

     for(int i=selectedIndex;i>=0;i--){
          if(i>0 && arr[i-1]> arr[i]) {
               swap(arr[i-1], arr[i]);
          }
     }

     insertionSort(arr, selectedIndex+1, size);
}

int main() {
     vector<int> arr = {7,6,5,4,3,2,-1,1};
     int size = arr.size();
     insertionSort(arr, 0, size);
     for(int i=0;i<size;i++) {
          cout << arr[i] << " ";
     }
     cout << endl;
     return 0;
}