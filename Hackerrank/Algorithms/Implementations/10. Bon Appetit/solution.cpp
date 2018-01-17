#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int split, ex, var, total=0;
    for (int i=0; i<n; ++i){
        cin>>var;
        (i==k)? ex=var : total+=var;
    }
    cin>>split;
    if (split==total/2)
        cout<<"Bon Appetit"<<endl;
    else
        cout<<ex/2<<endl;
    return 0;
}
