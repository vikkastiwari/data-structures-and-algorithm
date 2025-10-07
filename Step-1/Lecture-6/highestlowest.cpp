#include <iostream>
#include <unordered_map>
using namespace std;

// Given an array of size N. Find the highest and lowest frequency element.

int main()
{
     int arr[] = {10, 5, 10, 15, 10, 10, 5, 1};
     int size = sizeof(arr) / sizeof(arr[0]);
     unordered_map<int, int> hash;
     for (int i = 0; i < size; i++) {
          hash[arr[i]]++;
     }

     int minfreq = size, maxfreq = 0;
     int minEle = 0, maxEle = 0;
     for (auto data : hash) {
          cout << data.first << " " << data.second << endl;
          if(data.second < minfreq) {
               minfreq = data.second;
               minEle = data.first;
          }
          if(data.second > maxfreq) {
               maxfreq = data.second;
               maxEle = data.first;
          }
     }
     cout << "The highest frequency element is: " << maxEle << "\n";
     cout << "The lowest frequency element is: " << minEle << "\n";

     return 0;
}