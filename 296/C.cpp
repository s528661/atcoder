#include <iostream>
#include <vector>
#include <array>
#include <stack>
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;
using std::cout; using std::vector;
using std::array; using std::rotate;
using std::endl; using std::sort;

#define rep0(i,n) for (int i = 0; i < (int)(n); i++)
#define rep(i,n) for (int i = 1; i <= (int)(n); i++)
#define INFTY 1000000001

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

int isTr(vector<int>& nms, int nm){
  if (std::find(nms.begin(), nms.end(), nm) != nms.end()) {
    return 1;
  }
  else {
    return 0;
  }
}

int vector_finder(std::vector<int> vec, int number) {
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance( vec.begin(), itr );
  if (index != vec.size()) { // 発見できたとき
    return 1;
  }
  else { // 発見できなかったとき
    return 0;
  }
}

int u_set_finder(std::unordered_set<int> vec, int number) {
  auto itr = vec.find(number);
  size_t index = std::distance( vec.begin(), itr );
  if (index != vec.size()) { // 発見できたとき
    return 1;
  }
  else { // 発見できなかったとき
    return 0;
  }
}

int main() 
{
    int i,j,k;
    int N,M;
    int X;
    cin >> N >> X;
    vector<int> A;
    bool flag = false;
    std::unordered_set<int>u_set;
    
    rep0(i,N){
      int a;
      cin >> a;
      //A.push_back(a);
      u_set.insert(a);
    }
    
    for(const auto &us : u_set){
      if(u_set.count(X+us)){flag = true; break;}
    }
    
    if(flag) cout << "Yes";
    else cout << "No";
    cout << endl;
    
    return 0;
}
