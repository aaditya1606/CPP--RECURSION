// PROGRAM: CALCULATE POWER OF A NUMBER USING RECURSION
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

long int power_of_num(int num, int pow, long int ans)
{
    if (pow == 0)
        return ans;
    power_of_num(num, pow - 1, ans * num);
}
int main()
{
    int num, pow;
    long int ans = 1;
    cout << "ENTER THE NUMBER: ";
    cin >> num;
    cout << "ENTER THE POWER: ";
    cin >> pow;
    if (num > 0)
        cout << num << " raised to the power of " << pow << " : " << power_of_num(num,pow,ans) << endl;
    else
    {
        cout << "ENTER POSITIVE NUMBER!!";
    }
    return 0;
}