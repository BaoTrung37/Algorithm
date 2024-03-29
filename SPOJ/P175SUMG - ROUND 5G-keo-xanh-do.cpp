//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
i64 c,hr,hb,wr,wb;
void input(){
    cin >> c >> hr >> hb >> wr >> wb;
}

void solve(){
    i64 max = -1;
    for(int i = 0 ; i * wb <= c ; i++){
        i64 x = (c - i * wb) / wr;
        i64 y = x * wr + i * wb;
        if(y <= c && (x * hr + i * hb) > max){
            max = x * hr + i * hb;
        }
    }
    cout << max;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3