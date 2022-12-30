class Solution {
    unordered_map<int,int> hash_set;
public:
    int tribonacci(int n) {
        if(n==0)
            return 0;
        if(n==1||n==2)
            return 1;
        if(hash_set.find(n)!=hash_set.end())
            return hash_set[n];
        return hash_set[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
};
