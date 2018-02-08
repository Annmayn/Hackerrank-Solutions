#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    int mx=ar[0], cnt=1;
    int i=1;
    while(i<ar.size()){
        if (ar[i] > mx) cnt=!!(mx=ar[i]);
        else if (ar[i]==mx) cnt+=1;
        i++;
    }
    return cnt;                           
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
