#include <iostream>
using namespace std;

/**
 * TC: O(n)
 * SC: O(n)
 */ 
void revArray(int arr[], int size) {
     int temp[size];
     for(int i=0;i<size;i++){
          temp[size - 1 - i] = arr[i];
     }
     for(int i=0;i<size;i++){
          cout << temp[i] << " ";
     }
     cout << endl;
}

/**
 * TC: O(n)
 * SC: O(1)
 */ 
void revArrayTwoPointer(int arr[], int size) {
     int p1 = 0, p2 = size - 1;
     while(p1 < p2) {
          // you can use swap utility
          // swap(arr[p1], arr[p2]);
          int temp = arr[p1];
          arr[p1] = arr[p2];
          arr[p2] = temp;
          p1++;
          p2--;
     }
     for(int i=0;i<size;i++){
          cout << arr[i] << " ";
     }
     cout << endl;
}


/**
 * TC: O(n)
 * SC: O(1)
 */ 
void revArrayTwoPointerRecursion(int arr[], int start, int end) {
     if(start < end) {
          swap(arr[start], arr[end]);
          revArrayTwoPointerRecursion(arr, start+1, end-1);
     }
     cout << endl;
}

int main()
{
     int arr[] = {1,2,3,4,5,6};
     int size = sizeof(arr)/sizeof(arr[0]);

     revArrayTwoPointerRecursion(arr, 0, size-1);
     for(int i=0;i<size;i++){
          cout << arr[i] << " ";
     }
     return 0;
}