//
// Code By CodeWar :3
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
const int mod = 1e9+7;
#define pb push_back;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<string>a(n+1); for(int i = 0 ; i < n ; i++)cin>>a[i];
int n,m,tt;
void solve(){
    cin >> n >> m;
    set_vect(s,n);
    set_vect(x,m);
    cin >> tt;
    while(tt --){
        int z;
        cin >> z;
        z--;
        cout << s[z % n] << x[z % m] << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3