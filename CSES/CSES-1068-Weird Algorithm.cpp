#include<bits/stdc++.h>
using namespace std;
void printSimulation(long long int N)
{
    cout<<N<<" ";
    if(N==1) return;
    if(N&1)
        printSimulation(3*N+1);

    else
        printSimulation(N/2);
}
int main()
{
    int N;
    cin>>N;
    printSimulation(N);
}
