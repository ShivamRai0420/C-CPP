#include<iostream>
using namespace std;

void printEven(int n)
{
    for(int i=2;i<=n;i=i+2)
    {
        cout<<i<<",";
    }
}

int main()
{
    int n=10;
    printEven(n);
    return 0;

}