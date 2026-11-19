// PROGRAM: PRINT NUMBERS FROM N DOWN TO 1 USING RECURSION
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;
void ntoone(int n){
    if(n==0)return;
    cout<<n<<endl;
    ntoone(n-1);
}
int main(){
    int n;
    cout<<"ENTER N: ";
    cin>>n;
    ntoone(n);
    return 0;
}