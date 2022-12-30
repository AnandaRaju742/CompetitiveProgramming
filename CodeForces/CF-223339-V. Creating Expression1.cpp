#include<bits/stdc++.h>
using namespace std;
bool checkEquals(vector<int> &arr,long long int X,int idx)
{
    if(idx==arr.size())
        return X==0;
    return checkEquals(arr,X-arr[idx],idx+1)||checkEquals(arr,X+arr[idx],idx+1);
}
int main()
{
    long long int N,X;
    cin>>N>>X;
    vector<int> arr(N);
    for(int i=0;i<N;++i)
        cin>>arr[i];
    if(N==1)
    {
        if(arr[0]==X)
            cout<<"YES";
        else
            cout<<"NO";
        return 0;
    }
    cout<<(checkEquals(arr,X-arr[0],1)?"YES":"NO");
}
