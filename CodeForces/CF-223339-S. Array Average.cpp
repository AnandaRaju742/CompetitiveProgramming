#include<bits/stdc++.h>
using namespace std;
double average(vector<int> &arr,int i,long long int sum)
{
    if(i<0) return ((double)sum/arr.size());
    return average(arr,i-1,sum+arr[i]);
}
int main()
{
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;++i)
        cin>>arr[i];

    cout<<std::fixed <<std::setprecision(6)<<average(arr,N-1,0);
}
