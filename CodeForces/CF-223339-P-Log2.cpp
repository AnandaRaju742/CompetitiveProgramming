#include<bits/stdc++.h>
using namespace std;
int logValue(long long int N)
{
    if(N==0||N==1) return 0;
    return logValue(N/2)+1;
}
int main()
{
    long long int N;
    cin>>N;
    cout<<logValue(N);
}
