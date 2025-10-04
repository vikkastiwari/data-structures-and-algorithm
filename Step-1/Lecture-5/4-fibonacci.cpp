#include <iostream>
using namespace std;

int getFib(int n)
{
     if (n == 0 || n == 1) return n;

     int v1 = 0, v2 = 1;
     for (int i = 2; i <= n; i++)
     {
          int temp = v2;
          v2 = v2 + v1;
          v1 = temp;
     }
     return v2;
}

// Recursion
int fibRec(int n)
{
     if (n == 0 || n == 1) return n;
     return fibRec(n-1) + fibRec(n-2);
}

int main()
{
     int res = fibRec(5);
     cout << res << endl;
     return res;
}