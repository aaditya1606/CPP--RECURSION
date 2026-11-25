// PROGRAM: FIND nth FIBONACCI NUMBER
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n,int first_num,int second_num){
    if(n==0)return first_num;
    return fibonacci(n-1,second_num,first_num+second_num);
}
int main(){
    int n,first_num=0,second_num=1;
    cout<<"ENTER THE N: ";
    cin>>n;
    cout<<"ELEMENT AT "<<n<<" : "<<fibonacci(n,first_num,second_num);
    return 0;
}