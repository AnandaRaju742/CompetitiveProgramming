#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;++i)
        cin>>arr[i];
    int depth=0,maxDepth=0,idx=-1,firstIdx=-1,nestedFirstIdx=0;
    int  longestSeqLen=0;
    stack<int> stk;
    for(int i=0;i<N;++i)
    {
        if(arr[i]==1)
        {
            if(idx==-1)
            {
                idx=i;
            }
            ++depth;
            stk.push(2);
        }
        else
        {
            if(depth>maxDepth)
            {
                nestedFirstIdx=i-1;
                maxDepth=depth;
            }
            --depth;
            stk.pop();
            if(stk.empty())
            {
                depth=0;
                //cout<<"CAlc"<<i<<" "<<idx<<endl;
                //longestSeqLen = max(i-idx+1,longestSeqLen);
                if((i-idx+1)>longestSeqLen)
                {
                    longestSeqLen=i-idx+1;
                    firstIdx=idx;
                }
                idx=-1;
            }
        }
    }
    cout<<maxDepth<<" "<<nestedFirstIdx+1<<" "<<longestSeqLen<<" "<<firstIdx+1;

}
