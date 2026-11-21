// PROGRAM: PRINT SUM OF FIRST N NATURAL NUMBERS RECURSIVELY
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int sum_of_nums(int i, int n, int sum)
{
    if (i > n)
        return sum;
    sum_of_nums(i + 1, n, sum + i);
}
int main()
{
    int sum = 0, i = 1, n;
    cout << "ENTER N: ";
    cin >> n;
    cout << sum_of_nums(i, n, sum);
    return 0;
}