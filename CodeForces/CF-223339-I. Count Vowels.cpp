#include<bits/stdc++.h>
using namespace std;
int vowelCnt(string &str,int i)
{
    if(i<0)
        return 0;
    int count=0;
    char ch=str[i];
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        count=1;
    return count+vowelCnt(str,i-1);
}
int main()
{
    string str;
    getline(cin,str);
    cout<<vowelCnt(str,str.length()-1);
}
