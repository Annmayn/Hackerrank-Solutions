#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;

int countNum(string inp){
    int i=0, down=0, cnt=0;
    while(true){
        while(down>=0){
            if (i>=inp.length())
                return cnt;
            if (inp[i]=='U')
                ++down;
            else
                --down;
            ++i;
        }
        while(down<0){
            if (i>=inp.length())
                return cnt;
            if (inp[i]=='U')
                ++down;
            else
                --down;
            ++i;
        }
        ++cnt;
    }
}

int main() {
    int n;
    string inp;
    cin>>n;
    cin>>inp;
    n=countNum(inp);
    cout<<n;
    return 0;
}
