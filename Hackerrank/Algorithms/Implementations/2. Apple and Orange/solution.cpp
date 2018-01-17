#include <bits/stdc++.h>

using namespace std;

int main() {
    int s,t,a,b,m,n;
    int res,cnt=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;

    for (int i=0; i<m; ++i){
        cin>>res;
        if (res+a>=s and res+a<=t)
            ++cnt;
    }
    cout<<cnt<<endl;
    cnt=0;
    for (int i=0; i<n; ++i){
        cin>>res;
        if (res+b>=s and res+b<=t)
            ++cnt;
    }
    cout<<cnt<<endl;
    return 0;
}
