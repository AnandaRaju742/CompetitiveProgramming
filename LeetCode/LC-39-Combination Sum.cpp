class Solution {
    void combinationSum(vector<int> &candidates,vector<vector<int>> &result, vector<int> &coins, int target,int idx)
    {
        if(target==0)
        {
            result.push_back(coins);
            return;
        }
        if(target<0)
        {
            return;
        }
        //i = idx ensures all combinations are unique
        //i = idx+1 shouldn't be used because same coins can be reused
        for(int i=idx;i<candidates.size();++i)
        {
            coins.push_back(candidates[i]);
            combinationSum(candidates, result, coins, target-candidates[i],i);
            coins.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> coins;
       combinationSum(candidates,result,coins,target,0);
       return result;
    }
};