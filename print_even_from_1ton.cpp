// PROGRAM: PRINT ONLY EVEN NUMBERS FROM 1 TO N RECURSIVELY
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

void printnums(int n,int i)
{
   if(i>n)return;
   if(i%2==0)cout<<i<<endl;
   printnums(n,i+1);

}
int main()
{
    int n;
    cout << "ENTER N: ";
    cin >> n;
    int i=1;
    printnums(n,i);
    return 0;
}