#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<char>> &board,int row,int col)
{
    for(int tempI=row,tempJ=col;tempI>=0&&tempJ>=0;--tempI,--tempJ)
    {
        if(board[tempI][tempJ]=='Q')
            return false;

    }
    for(int tempI=row,tempJ=col;tempI>=0&&tempJ<8;--tempI,++tempJ)
    {
        if(board[tempI][tempJ]=='Q')
            return false;
    }
    for(int tempI=row;tempI>=0;--tempI)
        if(board[tempI][col]=='Q')
            return false;
    return true;

}
int numOfWays(vector<vector<char>> &board,int row)
{
    if(row>=8)
        return 1;
    //cols
    int ways=0;
    for(int i=0;i<8;++i)
    {
        if(board[row][i]=='.'&&isSafe(board,row,i))
        {
            board[row][i]='Q';
            ways+=numOfWays(board,row+1);
            board[row][i]='.';
        }
    }
    return ways;
}
int main()
{
    vector<vector<char>> board(8,vector<char>(8));
    for(int i=0;i<8;++i)
        for(int j=0;j<8;++j)
            cin>>board[i][j];
    cout<<numOfWays(board,0);
}
