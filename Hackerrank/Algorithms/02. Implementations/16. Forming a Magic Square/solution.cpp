#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    int mat[8][3][3] = {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
    };
    int t=8, cost=45;
    int cnt;
    int n[3][3];
    for (int i=0; i<3; ++i){
        for (int j=0; j<3; ++j){
            cin>>n[i][j];
        }
    }
    while (t--){
        cnt=0;
        for (int i=0; i<3; ++i){
            for (int j=0; j<3; ++j){
                cnt+=abs(mat[t][i][j]-n[i][j]);
            }
        }
        if (cnt<cost)
            cost=cnt;
    }
    cout<<cost<<endl;
    return 0;
}
