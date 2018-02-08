#include <bits/stdc++.h>

using namespace std;

bool check(int a, int u, int b, int v){
    while (true){
        if (a==b)
            return true;
        else if ( (a>b and u>=v) or (b>a and v>=u) )
            return false;
        else{
            a+=u;
            b+=v;
        }
    }
}

int main() {
    int a,u,b,v;
    cin>>a>>u>>b>>v;
    bool ans=check(a,u,b,v);
    (ans==1)? cout<<"YES" : cout<<"NO";
    return 0;
}
