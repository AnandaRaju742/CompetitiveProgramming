#include<bits/stdc++.h>
using namespace std;
int calcMagnitude(string str)
{
    int result=0;
    for(auto &c:str)
    {
        if(c=='+')
            result+=1;
        else
            result+=-1;
    }
    return result;
}
int noOfWays(string &A,int idx,int sum,int &result,int &totalCnt)
{
    if(idx>=A.length())
    {
        ++totalCnt;
        return sum==result;
    }
    if(A[idx]=='+')
        return noOfWays(A,idx+1,sum+1,result,totalCnt);
    else if(A[idx]=='-')
        return noOfWays(A,idx+1,sum-1,result,totalCnt);
    return noOfWays(A,idx+1,sum+1,result,totalCnt)+noOfWays(A,idx+1,sum-1,result,totalCnt);

}
int main()
{
    string A,B;
    cin>>A>>B;
    int magnitude = calcMagnitude(A);
    int totalCnt = 0;
    cout<<setprecision(12)<<std::fixed;
    double ways = noOfWays(B,0,0,magnitude,totalCnt);
    if(ways!=0)
        cout<<ways/totalCnt;
    else
        cout<<0/3.0;
}
