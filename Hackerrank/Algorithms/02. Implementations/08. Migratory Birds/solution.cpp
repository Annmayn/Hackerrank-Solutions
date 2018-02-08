#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int t[5]={0,0,0,0,0};
    int n, val;
    cin>>n;
    for (int i=0; i<n; ++i){
        cin>>val;
        t[val-1]=t[val-1]+1;
    }
    val=1;              //type id at 0 index==1
    for (int i=1; i<5; ++i){
        if (t[i] > t[val-1])
            val=i+1;
    }
    cout<<val;
    return 0;
}
