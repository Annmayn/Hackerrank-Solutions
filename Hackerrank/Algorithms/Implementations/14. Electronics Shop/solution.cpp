#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int s,n,m;
    cin>>s>>n>>m;
    int key[n], usb[m];
    int sum;
    for (int i=0; i<n; ++i)
        cin>>key[i];
    for (int i=0; i<m; ++i)
        cin>>usb[i];

    sum=key[0]+usb[0];
    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            if ( s>=(key[i]+usb[j]) and sum>s )
                sum=key[i]+usb[j];
            else if ( s>=(key[i]+usb[j]) and ((s-(key[i]+usb[j]))<(s-sum)) ){
                sum=key[i]+usb[j];
            }
        }
    }
    if (s-sum<0)
        cout<<-1<<endl;
    else
        cout<<sum<<endl;
    return 0;
}
