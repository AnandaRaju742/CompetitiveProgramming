//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int halfN = N/2;
    cout<<1<<"\n";
    if(N==1) return 0;
    for(int i=2;i<=halfN;++i)
    {
        if(N%i==0)
            cout<<i<<"\n";
    }
    cout<<N;
}
