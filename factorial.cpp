// PROGRAM: PRINT FACTORIAL OF A NUMBER RECURSIVELY
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int factorial(int n, int ans)
{
    if (n == 0)
        return ans;
    else
    {
        factorial(n - 1, ans * n);
    }
}
int main()
{
    int n, ans = 1;
    cout << "ENTER THE NUMBER: ";
    cin >> n;
    cout << "FACTORIAL OF " << n << " : " << factorial(n, ans);
    return 0;
}