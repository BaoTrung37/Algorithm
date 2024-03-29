/**
 *    authur: Bao Trung (Koi` Cute)
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
int k;
string s;
void solve(){
    cin >> k >> s;
    if(k >= s.length()){
        cout << "0\n";
        return;
    }
    int d[26] = {0};
    for(auto i : s){
        d[i -'A']++;
    }
    priority_queue <int> q;
    for(int i = 0 ; i < 26 ; i++)
        q.push(d[i]);
    while(k--){
        int tmp = q.top();
        q.pop();
        q.push(--tmp);
    }
    ll res = 0;
    while(!q.empty()){
        ll tmp = q.top();
        q.pop();
        res += tmp * tmp;
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3