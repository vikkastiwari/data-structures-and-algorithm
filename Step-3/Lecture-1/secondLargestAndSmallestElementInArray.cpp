#include <iostream>
using namespace std;

// TC: O(N)
// SC: O(1)

int main() {
     vector<int> arr = {-8,-10,-5,-7,-9,-1,0}; 
     int size = arr.size();
     int max = INT_MIN;
     int smax = INT_MIN;
     int min = INT_MAX;
     int smin = INT_MAX;
     for(int i=0;i<size;i++){
          if(arr[i]>max){
               smax = max;
               max = arr[i];
          }else if(arr[i]>smax && arr[i]!=max) {
               smax = arr[i];
          }
          if(arr[i]<min) {
               smin = min;
               min = arr[i];
          } else if(arr[i]<smin && arr[i]!= min){
               smin = arr[i];
          }
     }
     cout << "max:" << max << endl;
     cout << "smax:" << smax << endl;
     cout << "min:" << min << endl;
     cout << "smin:" << smin << endl;
     return 0;
}