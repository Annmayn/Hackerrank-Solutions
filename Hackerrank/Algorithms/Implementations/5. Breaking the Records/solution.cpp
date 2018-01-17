#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int n; cin>>n;
    int score[n], val;
    int minm, maxm, mincnt=0, maxcnt=0;
    for (int i=0; i<n; ++i){
        cin>>val;
        if (i==0){          //for first data
            minm=val;
            maxm=val;
        }
        if (val > maxm){
            maxm=val;
            ++maxcnt;
        }
        else if (val < minm){
            minm=val;
            ++mincnt;
        }
    }
    cout<<maxcnt<<" "<<mincnt;
    return 0;
}
