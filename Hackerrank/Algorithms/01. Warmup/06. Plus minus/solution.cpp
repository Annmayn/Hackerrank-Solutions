#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n, num, poscount=0, negcount=0, zerocount=0;
    cin>>n;
    for (int i=0; i<n; ++i){
        cin>>num;
        if (num<0) negcount++;
        else if (num==0) zerocount++;
        else poscount++;
    }
    float fracpos, fracneg, fraczero;
    fracpos=float(poscount)/n;
    fracneg=float(negcount)/n;
    fraczero=float(zerocount)/n;
    cout<<fracpos<<endl;
    cout<<fracneg<<endl;
    cout<<fraczero<<endl;
    return 0;
}
