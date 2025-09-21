#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    std::cin >> n;
    if(n<0) return 0;
    int temp = n;
    int count =0;
    while(temp!=0){
        temp = temp / 10;
        count++;
    }
    int armstrong = 0;
    temp =n;
    while(temp!=0){
        int lastVal = temp%10;
        armstrong += pow(lastVal, count);
        temp = temp/10;
    }
    
   if (armstrong == n) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}