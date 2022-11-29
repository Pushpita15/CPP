#include<iostream>
#include<vector>
using namespace std;

void PrintPrime(int n)
{
    int i;
    vector<bool> mark(n+1,true);
    for(i=2;i*i<=n;++i)
    {
        if(mark[i]==true)
        {
            for(int j=i*i;j<=n;j+=i)
                mark[j]=false;
        }

    }
    for(int p=2;p<=n;++p)
    {
        if(mark[p])
            cout << p << ' ';
    }

}
int main()
{
    PrintPrime(50);
    return 0;
}