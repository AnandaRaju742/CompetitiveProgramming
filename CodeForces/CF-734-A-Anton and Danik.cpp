#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    string str;
    cin>>str;
    int countOcc = count(str.begin(),str.end(),'A');
    if(countOcc==(N/2.0))
        cout<<"Friendship";
    else if(countOcc>(N/2))
        cout<<"Anton";
    else
        cout<<"Danik";
}
