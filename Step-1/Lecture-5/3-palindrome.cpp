#include <iostream>
using namespace std;

// Given a string, check if the string is palindrome or not."  
// A string is said to be palindrome if the reverse of the string is the same as the string.

bool isPalindrome(string str, int start, int end) {
     if(start >= end) return true;
     if(str[start]!=str[end]) return false;
     return isPalindrome(str, start+1, end-1);
}

int main() {
     string str = "";
     bool result = isPalindrome(str, 0, str.length() - 1);
     cout << result << endl;
     return 0;
}