#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin>>n;
    int tmp;
    for (int i=1; i<=n; ++i){
        tmp=n-i;
        while(tmp--)
            cout<<" ";
        tmp=i;
        while(tmp--)
            cout<<"#";
        cout<<endl;
    }
    return 0;
}
