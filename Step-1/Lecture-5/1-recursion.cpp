#include <iostream>
using namespace std;
int counter = 0;

void recursion()
{
     if (counter > 3)
          return;
     cout << counter << endl;
     counter++;
     recursion();
}

void printNum(int start, int n)
{ // print 1 to n
     cout << start << " ";
     if (start == n)
     {
          cout << endl;
          return;
     };
     printNum(++start, n);
}

void sum(int sumVal, int i, int n)
{
     sumVal += i;
     if (i == n)
     {
          cout << sumVal << endl;
          return;
     };
     sum(sumVal, ++i, n);
}

void sumFormula(int N)
{
     int sum = N * (N + 1) / 2;
     cout << "The sum of the first " << N << " numbers is: " << sum << endl;
}

void factorial(int res, int n)
{
     if(res==0) {
          cout << 1 << endl;
          return;
     }
     if(n==0) {
          cout << res << endl;
          return;
     };
     res *= n;
     factorial(res , n-1);
}

int main()
{
     recursion();
     printNum(1, 5);
     sum(0, 1, 5);
     factorial(0, 0);
     return 0;
}