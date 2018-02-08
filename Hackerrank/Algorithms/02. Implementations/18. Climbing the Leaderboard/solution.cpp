#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n,m;
    int score, j, pcounter=1;
    cin>>n;
    int pos[n+1], arr[n+1];
    for (int i=0; i<n; ++i){
        cin>>arr[i];
        if (i==0)
            pos[i]=pcounter;
        else{
            if (arr[i]!=arr[i-1])
                ++pcounter;
            pos[i]=pcounter;
        }
    }
    arr[n]=0;
    pos[n]=++pcounter;

    cin>>m;
    j=n-1;
    for (int i=0; i<m; ++i){
        cin>>score;
        while (j>=0 and score >= arr[j])
            --j;
        cout<<pos[j+1]<<endl;
    }
    return 0;
}
