// PROGRAM: PRINT ONLY ODD NUMBERS FROM 1 TO N RECURSIVELY
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

void print_numbers(int n, int i)
{
    if (i > n)
        return;
    if (i % 2 == 1)
        cout << i << endl;
    print_numbers(n, i + 1);
}
int main()
{
    int n, i = 1;
    cout << "ENTER N: ";
    cin >> n;
    print_numbers(n, i);
    return 0;
}