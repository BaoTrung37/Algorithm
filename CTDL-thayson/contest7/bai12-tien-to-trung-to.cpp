/**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

string s;
int check(char c){
    if(c == '+' or c == '-' or c == '*' or c == '/')
        return true;
    return false;
}
void solve(){
    cin >> s;
    stack <string> st;
    for(int i = s.length() - 1 ; i >= 0; i--){
        char c = s[i];
        if(!check(c)){ // nếu ko phải toán tử
            st.push(string(1,c));
        }
        // nếu là toán tử
        else{
            string tmp = st.top();st.pop();
            string tmp2 = st.top();st.pop();
            string res = "("+ tmp + c + tmp2 + ")";
            st.push(res);
        }
    }
    cout << st.top() << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)