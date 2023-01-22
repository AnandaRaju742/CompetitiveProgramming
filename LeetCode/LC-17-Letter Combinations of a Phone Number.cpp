//Attempt on Jan 23 (Kind of more backtrack way)
class Solution {
    unordered_map<char,string> mapping= {
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
    void generateLetterCombinations(string digits,vector<string> &result,string currCombination,int idx)
    {
        if(idx>=digits.size())
        {
            result.push_back(currCombination);
            return;
        }
        string charMapping = mapping[digits[idx]];
        for(int i=0;i<charMapping.size();++i)
        {
            currCombination.push_back(charMapping[i]);
            generateLetterCombinations(digits,result,currCombination,idx+1);
            currCombination.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        vector<string> result;
        string currCombination="";
        generateLetterCombinations(digits,result,currCombination,0);
        return result;
    }
};
//Attempt on Jan 1
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
