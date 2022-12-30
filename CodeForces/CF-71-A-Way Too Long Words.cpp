#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        cin>>str;
        if(str.length()>10)
        {
            cout<<str[0]<<to_string(str.length()-2)<<str[str.length()-1];
        }
        else
            cout<<str;
        cout<<"\n";
    }
}
