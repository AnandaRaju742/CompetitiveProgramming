#include<bits/stdc++.h>
using namespace std;
void computePrefixSum(int N,vector<vector<char>> &board,vector<vector<int>> &prefixSum)
{
    for(int i=1;i<=N;++i)
    {
        for(int j=1;j<=N;++j)
        {
            int currentCellVal = (board[i-1][j-1] == '*'?1:0);
            prefixSum[i][j] = prefixSum[i-1][j]+prefixSum[i][j-1]+currentCellVal-prefixSum[i-1][j-1];
        }
    }
}
int main()
{
    int N,Q;
    cin>>N>>Q;
    vector<vector<char>> board(N,vector<char>(N));
    for(int i=0;i<N;++i)
        for(int j=0;j<N;++j)
            cin>>board[i][j];
    vector<vector<int>> prefixSum(N+1,vector<int>(N+1));

    computePrefixSum(N,board,prefixSum);
    for(int i=0;i<Q;++i)
    {
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        int result = prefixSum[x2][y2];
        if(x1>0)
            result-=prefixSum[x1-1][y2];
        if(y1>0)
            result-=prefixSum[x2][y1-1];
        if(x1>0&&y1>0)
            result+=prefixSum[x1-1][y1-1];
        cout<<result<<"\n";
    }
}
