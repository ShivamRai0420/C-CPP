#include<iostream>
using namespace std;
int main()
{
    int n=10;
    foxl(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
}