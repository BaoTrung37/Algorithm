/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int N = 1e4 + 5;

int n,a[N];
void Try(int s,int e){
    if(s > e) return;
    int midd = (s + e) /2;
    cout << a[midd] << ' ';
    Try(s, midd - 1);
    Try(midd+ 1,e);
}
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a,a+n);
    Try(0,n-1);
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)