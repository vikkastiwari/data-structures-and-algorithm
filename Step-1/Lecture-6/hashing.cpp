#include <iostream>
#include <unordered_map>
using namespace std;

// Given an array, we have found the number of occurrences of each element in the array.

int main()
{
     int arr[] = {10, 5, 10, 15, 10, 5};
     int size = sizeof(arr)/sizeof(arr[0]);
     unordered_map<int, int> hash;

     for(int i=0;i<size;i++) {
          hash[arr[i]]++;
     }

     for(auto data : hash) {
          cout << data.first << " " << data.second << endl;
     } 

     return 0;
}