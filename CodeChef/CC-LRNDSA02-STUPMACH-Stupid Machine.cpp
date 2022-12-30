#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> S(N);
        for(int i=0;i<N;++i)
            cin>>S[i];
        long long int i=N,size=N,prev_min=0;
        long long int ans = 0;
        while(i>0)
        {
            int index = min_element(S.begin(),S.begin()+i)-S.begin();
            //cout<<index<<" ";
            int minEle = S[index];
            ans += ((minEle-prev_min)*size);
            if(index==0) break;
            i = index;
            size = i;
            prev_min = minEle;
            //cout<<ans<<" "<<minEle<<endl;
        }
        cout<<ans<<"\n";
    }
	return 0;
}
