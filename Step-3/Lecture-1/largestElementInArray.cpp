#include <iostream>
using namespace std;

// TC: O(N)
// SC: O(1)

int main() {
     vector<int> arr = {8,10,5,7,9, -1};
     int size = arr.size();
     int max = 0;
     for(int i=0;i<size;i++){
          if(arr[i]>max){
               max = arr[i];
          }
     }
     cout << max << endl;
     return 0;
}