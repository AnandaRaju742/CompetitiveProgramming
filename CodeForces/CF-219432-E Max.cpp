#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;++i)
        cin>>arr[i];
    cout<<*max_element(arr.begin(),arr.end());
}
