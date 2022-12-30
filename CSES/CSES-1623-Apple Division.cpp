#include<bits/stdc++.h>
using namespace std;
long long int minWeightDiff(vector<int> &height,int i,long long int groupA,long long int groupB)
{
    if(i==height.size())
    {
        return abs(groupA-groupB);
    }
    return min(minWeightDiff(height,i+1,groupA+height[i],groupB),minWeightDiff(height,i+1,groupA,groupB+height[i]));
}
int main()
{
    int N;
    cin>>N;
    vector<int> weights(N);
    for(int i=0;i<N;++i)
        cin>>weights[i];
    cout<<minWeightDiff(weights,0,0,0);
}
