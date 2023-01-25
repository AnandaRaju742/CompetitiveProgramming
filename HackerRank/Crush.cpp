#include <bits/stdc++.h>

using namespace std;


long arrayManipulation(int n, vector<vector<int>> queries) {
    //Concept used here is difference array https://medium.com/@ishankkatiyar162/understanding-difference-array-the-underrated-constant-time-range-update-algorithm-part-1-e432ada7f1f5
    vector<long int> differenceArray(n+1);
    for(int i=0;i<queries.size();++i)
    {
        differenceArray[queries[i][0]-1]+=queries[i][2];
        differenceArray[queries[i][1]]-=queries[i][2];
    }
    //calculate prefix sum to get the array back
    cout<<"ADAFSDFASDFAS";
    long result = 0;
    for(int i=1;i<differenceArray.size();++i)
    {
        differenceArray[i]=differenceArray[i-1]+differenceArray[i];
        result=max(result,differenceArray[i]);
    }
    return result;
}
