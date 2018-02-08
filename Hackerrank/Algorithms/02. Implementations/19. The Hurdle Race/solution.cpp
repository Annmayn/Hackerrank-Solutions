#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int hmax=0;    //no initial height
    int val;
    for (int i=0; i<n; ++i){
        cin>>val;
        if (hmax < val)
            hmax=val;
    }
    if (k>=hmax)
        cout<<0<<endl;
    else
        cout<<hmax-k<<endl;
    return 0;
}
