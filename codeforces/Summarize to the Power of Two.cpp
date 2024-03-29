/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(int i=0;i<n;i++)cin>>a[i];
#define db(x) cerr << #x << " = "  << (x) << ' ';
const int N = 120005;

int n,a[N];
map <int,int> mp;
void solve(){
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        mp[a[i]] ++;
    }
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        bool ok = false;
        for(int j = 0 ; j < 31 ; j ++){
            int x = (1 << j) - a[i];
            if(mp.count(x) && (mp[x] > 1 || (mp[x] == 1 && x != a[i])))
                ok = true;
        }
        if(!ok) ans++;
    }
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; //cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By Pain (Bao Trung)