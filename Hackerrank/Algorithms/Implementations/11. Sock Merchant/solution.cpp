#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int n; cin>>n;
    vector<int> arr(n);
    int cnt=0;
    for (int i=0; i<n; ++i)
        cin>>arr[i];
    sort(arr.begin(), arr.end());
    int i=0;
    while (i<n){
        if (i+1!=n){
            if (arr[i]==arr[i+1]){
                ++cnt;
                i+=2;
            }
            else
                i+=1;
        }
        else
            i+=1;
    }
    cout<<cnt<<endl;
    return 0;
}
