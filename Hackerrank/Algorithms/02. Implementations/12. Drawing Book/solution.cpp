#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int n,p;
    cin>>n>>p;
    int i, cnt=0, tmp=1;
    if (p <= n/2){
        i=0;
        while (i<=n){
            if (p==i or p==i+1)
                //we found the page
                break;
            else{
                i+=2;
                ++cnt;
            }
        }
    }
    else{       //p>n/2
        i=n;
        while (i>=0){
            if (n%2==0){    //n is even
                if (tmp==1 and n%2==0){
                    if (p==i)
                        break;
                    else{
                        i-=1;
                        ++cnt;
                        tmp=0;
                    }
                }
                else{
                    if (p==i or p==i-1)
                        break;
                    else{
                        i-=2;
                        ++cnt;
                    }
                }
            }
            else{   //n is odd
                if (p==i or p==i-1)
                    break;
                else{
                    i-=2;
                    ++cnt;
                }
            }

        }
    }
    cout<<cnt<<endl;
    return 0;
}
