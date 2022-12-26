/* Ref : Atcoder
#include <bits/stdc++.h>
#include <iomanip>
#include <cassert>
#include <numeric>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>; using Pll = pair<ll, ll>;
using vi = vector<int>; using vvi = vector<vector<int>>; using vvvi = vector<vvi>;
using vl = vector<ll>; using vvl = vector<vector<ll>>; using vvvl = vector<vector<vector<ll>>>;
using vb = vector<bool>; using vvb = vector<vector<bool>>;
using vp = vector<P>; using vpll = vector<Pll>; using vvp = vector<vp>;
using vs = vector<string>;
#define rep(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define rrep(i,s,n) for(ll i = (s);i <= (ll)(n);i++)
#define per(i, s,n) for (ll i=(ll) n - 1;i>=s;i--)
#define pper(i, s,n) for (ll i=(ll) n;i>=s;i--)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define _GLIBCXX_DEBUG
#define pb push_back
#define pi 3.141592653589793
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define fix cout << fixed << setprecision(16);
#define YESNO(bool) if(bool){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define yesno(bool) if(bool){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
template <typename T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> bool chmin(T& a, const T& b) { if (a > b) { a = b; return true; } return false; }
template<typename T> using PQ = priority_queue<T, vector<T>, greater<T>>;
template <typename T> inline void print(const vector<T>& v, string s = " ")
{
    rep(i, 0, v.size()) cout << v[i] << (i != (ll)v.size() - 1 ? s : "\n");
}
template <typename T, typename S> inline void print(const pair<T, S>& p)
{
    cout << p.first << " " << p.second << endl;
}
template <typename T> inline void print(const T& x) { cout << x << "\n"; }
template <typename T, typename S> inline void print(const vector<pair<T, S>>& v)
{
    for (auto&& p : v) print(p);
}
template <typename T, typename S> inline void print(const map<T, S>& v)
{
    for (auto&& p : v) print(p);
}
template <typename T> inline void input(vector<T>& v) {
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
}
const int INF = 1001001001;
const ll LLINF = 3000000000000000000;
*/
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using std::cout; using std::vector;
using std::array; using std::rotate;
using std::endl;

template<typename T>
void printElements(T &v)
{
    //cout << "[ ";
    for (const auto &item : v) {
        //cout << item << ", ";
        cout << item << " ";
    }
    //cout << "\b\b ]" << endl
    cout << "" << endl;
}

int main() {
    int n,k;
    cin >> n >> k;
    
    //set<int> setA;
    vector<int> A;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        //setA.insert(a);
        A.push_back(a);
    }
    
    printElements(A);
 
    return 0;
}
