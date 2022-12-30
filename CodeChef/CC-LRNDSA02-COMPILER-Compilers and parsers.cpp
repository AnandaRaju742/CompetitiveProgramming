#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    cout<<T;
    while(T--)
    {
        int N;
        cin>>N;
        string str;
        cin>>str;
        int matchCnt=0;
        int prefixLen=0,longestPrefixLen =0;
        for(int i=0;i<str.length();++i)
        {
            if(str[i]=='<')
            {
                ++prefixLen;
                ++matchCnt;
            }
            else
            {
                --matchCnt;
                if(matchCnt==0)
                {
                    longestPrefixLen = i+1;
                }
                if(matchCnt<0)
                {
                    break;
                }
            }
        }
        cout<<longestPrefixLen<<"\n";
    }
}
