#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    // Complete this function
    string answer, hh;
    int h=(s[0]-'0')*10 + (s[1]-'0');
    if (s[8]=='P' and h!=12){
        h+=12;
    }
    else if (s[8]=='A' and h==12)
        h=0;
    for(int i=2; i<s.length()-2; ++i){
        answer+=s[i];
    }
    int tmp=h%10;
    h=h/10;
    hh=h+'0';
    hh+=tmp+'0';
    answer=hh+answer;
    return(answer);
}

int main() {
    string s;
    cin >> s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
