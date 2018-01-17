#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int g;
    for (int i=0; i<n; ++i){
        cin>>g;
        if (g%5>2 and g+3>40){
            g=(g/5+1)*5;
        }
        cout<<g<<endl;
    }
    return 0;
}
