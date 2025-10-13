#include <iostream>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
     vector<int> temp;
     int left = low, right = mid+1;

     while(left<=mid && right<=high){
          if(arr[left]<=arr[right]){
               temp.push_back(arr[left]);
               left++;
          }else {
               temp.push_back(arr[right]);
               right++;
          }
     }

     while(left<=mid) {
          temp.push_back(arr[left]);
          left++;
     }

     while(right<=high) {
          temp.push_back(arr[right]);
          right++;
     }

     for(int i=low;i<=high;i++){
          arr[i] = temp[i-low];
     }
}

void mergeSort(vector<int> &arr, int low, int high) {
     if(low>=high) return;
     int mid = (low+high)/2;
     mergeSort(arr, low, mid);
     mergeSort(arr, mid+1, high);
     merge(arr, low, mid, high);
}

int main() {
     vector<int> arr = {13,46,-24,52,20,-9};
     int size = sizeof(arr) / sizeof(arr[0]);

     mergeSort(arr, 0, size-1);

     for(int i=0;i<size;i++) {
          cout << arr[i] << " ";
     }
     cout << endl;

     return 0;
}