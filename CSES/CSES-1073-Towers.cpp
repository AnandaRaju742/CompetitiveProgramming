#include<bits/stdc++.h>
using namespace std;
int minNoTower(vector<int> &cubes,vector<vector<int>> towers, int idx)
{
    if(idx>=cubes.size()) return 0;
    int minCnt = INT_MAX;
    for(int i=0;i<towers.size();++i)
    {
        if(!towers.empty()&&cubes[idx]<=towers[i].back())
        {
            towers[i].push_back(cubes[idx]);
            minCnt=min(minCnt,minNoTower(cubes,towers,idx+1));
            towers[i].pop_back();
        }
        else
        {
            vector<int> temp={cubes[idx]};
            towers.push_back(temp);
            minCnt=min(minCnt,minNoTower(cubes,towers,idx+1)+1);
            towers.pop_back();
        }

    }
    return minCnt;
}
int main()
{
    int N;
    cin>>N;
    vector<int> cubes(N);
    for(int i=0;i<N;++i)
        cin>>cubes[i];
    vector<vector<int>> towers;
    cout<<minNoTower(cubes,towers,0);
}
