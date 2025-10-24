#include <iostream>
using namespace std;

bool isArraySorted(vector<int> &arr, int size) {
     for(int i=0;i<size-1;i++){
          if(arr[i]>arr[i+1]) return false;
     }
     return true;
}

int main() {
     vector<int> arr = {1,2,3,4,5};
     int size = arr.size();
     bool res = isArraySorted(arr, size);
     cout << res << endl;
     return 0;
}