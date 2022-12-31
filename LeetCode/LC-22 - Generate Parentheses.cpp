//Recursive

class Solution {
    bool strBalanced(string str)
    {
        stack<char> stk;
        for(int i=0;i<str.length();++i)
        {
            if(str[i]=='(')
                stk.push(')');
            else
                {
                    if(stk.empty()) return false;
                    stk.pop();
                }
        }
        return stk.empty();
    }
    void generateParantheses(int n,string temp, vector<string> &result)
    {
        if(n==0)
        {
            if(strBalanced(temp)) result.push_back(temp);
            return;
        }
        generateParantheses(n-1,temp+'(',result);
        generateParantheses(n-1,temp+')',result);

    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string temp="";
        generateParantheses(2*n,temp,result);
        return result;
    }
};


//BackTrack (solution prunes some additional recursive calls)
class Solution {
    bool strBalanced(string str)
    {
        stack<char> stk;
        for(int i=0;i<str.length();++i)
        {
            if(str[i]=='(')
                stk.push(')');
            else
                {
                    if(stk.empty()) return false;
                    stk.pop();
                }
        }
        return stk.empty();
    }
    void generateParantheses(int n,string curr,int openBrackets,vector<string> &result)
    {
        if(curr.size()>=2*n)
        {
            if(strBalanced(curr))
                result.push_back(curr);
            return;
        }
        if(openBrackets<n) //number of open brackets left
            generateParantheses(n,curr+'(',openBrackets+1,result);
        if(curr.size()-openBrackets<=n) //number of close brackets
            generateParantheses(n,curr+')',openBrackets,result);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string temp="";
        generateParantheses(n,temp,0,result);
        return result;
    }
};
