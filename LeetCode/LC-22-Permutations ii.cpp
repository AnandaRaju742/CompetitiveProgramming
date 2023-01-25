class Solution {
    //The below function also works
    void generatePermutations1(vector<int> nums,vector<vector<int>> &result,int idx)
    {
        if(idx>=nums.size()-1)
        {
            result.push_back(nums);
            return;
        }
        //No i=idx+1, as the function is already called with incremented idx
        for(int i=idx;i<nums.size();++i)
        {
            //Only difference is the below line to handle for duplicates
            if(idx!=i&&nums[i]==nums[idx]) continue;
            swap(nums[idx],nums[i]);
            generatePermutations1(nums,result,idx+1);
            //Shouldn't swap back, it seems https://leetcode.com/problems/permutations-ii/solutions/18596/a-simple-c-solution-in-only-20-lines/comments/18625
            //swap(nums[idx],nums[i]);
        }
    }
    void generatePermutations(vector<int> &nums,vector<vector<int>> &result,int idx)
    {
        //Solution from https://leetcode.com/problems/permutations-ii/solutions/18632/short-40ms-c-solution-similar-to-permutation-i-solution/?orderBy=most_votes
        if(idx>=nums.size())
        {
            result.push_back(nums);
            return;
        }
        unordered_set<int> usedNums;
        for(int i=idx;i<nums.size();++i)
        {
            if(usedNums.find(nums[i])!=usedNums.end()) continue;
            usedNums.insert(nums[i]);
            swap(nums[idx],nums[i]);
            generatePermutations(nums,result,idx+1);
            swap(nums[idx],nums[i]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        generatePermutations1(nums,result,0);
        return result;
    }
};
