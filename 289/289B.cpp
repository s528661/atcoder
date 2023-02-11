#include <iostream>
#include <vector>
#include <array>
#include <stack>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using std::cout; using std::vector;
using std::array; using std::rotate;
using std::endl; using std::sort;

#define rep(i,n) for (int i = 1; i <= (int)(n); i++)

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


int main() 
{
    int N,M;
    int i,j,k;
    cin >> N >> M;
    
    std::vector<int> I;
    std::vector<int> nums;
    std::stack<int> stk;
    rep(i,M){
      int a;
      cin >> a;
      I.push_back(a);
    }
    
    rep(j,N){
      //nums.push_back(j);
      if (std::find(I.begin(), I.end(), j) != I.end()) {
        stk.push(j);
      }else{
        stk.push(j);
        while(!stk.empty()){
          nums.push_back(stk.top());
          stk.pop();
        }
        //nums.push_back(j);
      }
    }

    //printElements(I);
    printElements(nums);
    
	  
    return 0;
}
