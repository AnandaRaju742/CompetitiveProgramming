#include<bits/stdc++.h>
using namespace std;
int noOfWays(int S,int E)
{
    if(S>=E)
        return E==S;
    return noOfWays(S+1,E)+noOfWays(S+2,E)+noOfWays(S+3,E);

}
int main()
{
    int S,E;
    cin>>S>>E;
    cout<<noOfWays(S,E);
}
