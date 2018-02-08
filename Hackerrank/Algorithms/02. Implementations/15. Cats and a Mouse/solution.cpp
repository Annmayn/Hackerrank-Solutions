#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>

using namespace std;

int findAns(int a, int b, int c){
    if (abs(a-c) == abs(b-c))
        return 3;
    else if (abs(a-c)<abs(b-c))
        return 1;
    else
        return 2;
}

int main() {
    int n; cin>>n;
    int a,b,c;
    int res;
    for (int i=0; i<n; ++i){
        cin>>a>>b>>c;
        res=findAns(a,b,c);
        if (res==1) cout<<"Cat A\n";
        else if (res==2) cout<<"Cat B\n";
        else cout<<"Mouse C\n";
    }
    return 0;
}
