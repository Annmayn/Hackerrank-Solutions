#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool isLeapYear(int y){
    if (y%400==0 or (y%4==0 and y%100!=0) ){
        return true;
    }
    return false;
}

int main() {
    int n; cin>>n;
    if (n==1918)
        cout<<"26.09."<<n<<endl;
    else if (n>1918){
        if (isLeapYear(n))
            cout<<"12.09."<<n<<endl;
        else
            cout<<"13.09."<<n<<endl;
    }
    else{   //n<1918
        if (n%4==0)
            cout<<"12.09."<<n<<endl;
        else
            cout<<"13.09."<<n<<endl;
    }
    return 0;
}
