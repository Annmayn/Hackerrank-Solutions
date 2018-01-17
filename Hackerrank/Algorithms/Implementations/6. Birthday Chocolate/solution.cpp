#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int n, d, m; cin>>n;
    int arr[n];
    int sm=0, cnt=0;
    for (int i=0; i<n; ++i){
        cin>>arr[i];
    }
    cin>>d>>m;
    for (int i=0; i<m; ++i)
        sm+=arr[i];
    if (sm==d)
        ++cnt;
    for (int i=1; i<=n-m; ++i){
        sm=sm-arr[i-1]+arr[m+i-1];
        if (sm==d)
            ++cnt;
    }
    cout<<cnt;
    return 0;
}
