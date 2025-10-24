#include <iostream>
using namespace std;

// checking for sorted array as well as for rotated sorted array

bool isArraySorted(vector<int> &arr, int size) {
     int count = 0;
     for(int i=0;i<size-1;i++){
          if(arr[i]>arr[i+1]) count++;
     }
     // variation check for roated sorted array
     // roated sorted array - 3,4,5,1,2
     // arr[0] > arr[n-1];
     if(arr[0]<arr[size-1]){
          count++;
     }
     if(count>1) return false;
     return true;
}

int main() {
     vector<int> arr = {3,4,5,1,2};
     int size = arr.size();
     bool res = isArraySorted(arr, size);
     cout << res << endl;
     return 0;
}