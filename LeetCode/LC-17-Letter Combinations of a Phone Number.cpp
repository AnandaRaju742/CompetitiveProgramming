class Solution {
    unordered_map<char,string> mapping = {
        {'1',""},
        {'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"}
    };
    void generateLetterCombinations(string digits,int idx,string currString, vector<string> &result)
    {
        if(idx>=digits.size())
        {
            result.push_back(currString);
            return;
        }
        for(char &c:mapping[digits[idx]] )
        {
            generateLetterCombinations(digits,idx+1,currString+c,result);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> result;
        generateLetterCombinations(digits,0,"", result);
        return result;
    }
};
