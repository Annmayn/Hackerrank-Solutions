#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int hmax=0, wmax;
    int n[26];
    string wrd;
    for (int i=0; i<26; ++i)
        cin>>n[i];
    cin>>wrd;
    wmax=wrd.length();
    for (int i=0; i<wmax; ++i){
        if (hmax < n[wrd[i]-'a'])
            hmax=n[wrd[i]-'a'];
    }
    cout<<hmax*wmax<<endl;
    return 0;
}
