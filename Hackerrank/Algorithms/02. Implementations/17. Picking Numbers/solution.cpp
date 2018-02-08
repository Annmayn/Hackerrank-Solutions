#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n, val, mx, sumcount=0;
    cin>>n;
    int arr[100]={0};
    mx=0;
    for (int i=0; i<n; ++i){
        cin>>val;
        ++arr[val];
        if (val>mx) mx=val;
    }
    for (int i=1; i<mx; ++i){
        if ((arr[i]+arr[i+1]) > sumcount)
            sumcount=arr[i]+arr[i+1];
    }
    cout<<sumcount<<endl;
    return 0;
}
