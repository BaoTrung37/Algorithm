//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,a[1000006],b[1000006];
void input(){
    cin >> n;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    for(int i = 0 ; i < n ; i++)
        cin >> b[i];
}

void solve(){
    sort(a,a+n); sort(b,b+n);
    int cnt = 0;
    int i = 0;
    for(int j = 0 ; j < n ; j++){
        if(b[j] > a[i]){
            i++;
            cnt++;
        }
    }
    cout << cnt;
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