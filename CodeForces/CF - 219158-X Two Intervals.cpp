#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a_start,a_end,b_start,b_end;
    cin>>a_start>>a_end>>b_start>>b_end;
    if(a_start>b_start)
    {
        swap(a_start,b_start);
        swap(a_end,b_end);
    }
    if(b_start<=a_end)
    {
        cout<<b_start<<" ";
        if(b_end<a_end)
            cout<<b_end;
        else
            cout<<a_end;
    }
    else
        cout<<-1;
}
