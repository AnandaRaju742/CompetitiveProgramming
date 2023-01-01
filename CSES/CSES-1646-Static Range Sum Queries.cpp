#include<bits/stdc++.h>
using namespace std;
vector<long long int> buildPrefixSum(vector<long long int> &arr)
{
    vector<long long int> prefixArray(2);
    //First element has no prefix
    prefixArray[0] = 0;
    prefixArray[1] = arr[0];
    for(int i=1;i<arr.size();++i)
        prefixArray.push_back(prefixArray[i]+arr[i]);
    return prefixArray;
}
int main()
{
    int N,Q;
    cin>>N>>Q;
    vector<long long int> arr(N);
    for(int i=0;i<N;++i)
        cin>>arr[i];
    vector<long long int> prefixSum = buildPrefixSum(arr);
    //for(int i=0;i<prefixSum.size();++i)
    //    cout<<prefixSum[i]<<" ";
    for(int i=0;i<Q;++i)
    {
        int startRange,endRange;
        cin>>startRange>>endRange;
        cout<<prefixSum[endRange]-prefixSum[startRange-1]<<"\n";
    }

}
