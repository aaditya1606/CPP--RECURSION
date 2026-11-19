// PROGRAM: PRINT NUMBERS FROM 1 TO N USING RECURSION
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

void oneton(int n,int i){
    if(n-i==n+1)return;
    cout<<n-i<<endl;
    oneton(n,i-1);
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int i=n-1;
    oneton(n,i);
    return 0;
}