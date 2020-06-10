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
int n;
void solve(){
    cin >> n;
    set_vect(a,n);
    int l = 0, r = n - 1;
    while(l <= r){
        if(a[l] > a[r])
            swap(a[l],a[r]);
        l++;
        r--;
    }
    for(int i = 0 ;i < n - 1; i++)
        if(a[i] > a[i + 1]){
            cout <<  "No\n";
            return;
        }
    cout << "Yes\n"; 
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3