//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n;
void input(){
      cin >> n;
}

void solve(){
      if(n < 3 ) cout << "NO";
      else {
            if(n % 2 == 0)
                  cout << "YES";
            else cout << "NO";
      }
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