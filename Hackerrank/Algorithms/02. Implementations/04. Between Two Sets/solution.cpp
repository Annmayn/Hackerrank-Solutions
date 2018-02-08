#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool checka(int a, vector<int> arra){
    for (int i=0; i<arra.size(); ++i){
        if (a%arra[i]!=0)
            return false;
    }
    return true;
}

bool checkb(int a, vector<int> arra){
    for (int i=0; i<arra.size(); ++i){
        if (arra[i]%a!=0)
            return false;
    }
    return true;
}

int main() {
    int n,m,a,b,cnt=0;
    bool ans;
    cin>>n>>m;
    vector<int> arra, arrb;
    for (int i=0; i<n; ++i){
        cin>>a;
        arra.push_back(a);
    }
    for (int i=0; i<m; ++i){
        cin>>b;
        arrb.push_back(b);
    }
    sort(arra.begin(), arra.end());
    sort(arrb.begin(), arrb.end());
    a=arra[n-1];                //max of a
    b=arrb[0];                  //min of b

    //checking part
    for (int i=a; i<=b; ++i){
        ans=checka(i, arra);
        if (ans)
            ans=checkb(i, arrb);
            if (ans)
                ++cnt;
    }
    cout<<cnt;
    return 0;
}
