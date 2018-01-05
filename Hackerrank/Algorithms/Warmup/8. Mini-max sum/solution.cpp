#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void miniMaxSum(vector <int> arr) {
    long int minsum=0, maxsum=0;
    sort(arr.begin(), arr.end());
    for (int i=0; i<4; ++i){
        minsum+=arr[i];
    }
    maxsum=minsum-arr[0]+arr[4];
    cout<<minsum<<" "<<maxsum<<endl;
}

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    miniMaxSum(arr);
    return 0;
}
