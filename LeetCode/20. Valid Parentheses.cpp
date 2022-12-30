class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i=0;i<s.length();++i)
        {
            if(s[i]=='{')
                stk.push('}');
            else if(s[i]=='(')
                stk.push(')');
            else if(s[i]=='[')
                stk.push(']');
            else
            {
                if(stk.empty()) return false;
                if(stk.top()==s[i]) stk.pop();
                else return false;
            }
        }
        return stk.empty();
    }
};
