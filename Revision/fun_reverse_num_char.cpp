#include<iostream>
using namespace std;
int rev_num(int n){
    int rem,rev=0;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<rev;
}
int main(){
    int n=1234;
    rev_num(n);
}