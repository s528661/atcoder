#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using std::cout; using std::vector;
using std::array; using std::rotate;
using std::endl; using std::sort;

#define rep(i,n) for (int i = 1; i <= (int)(n); i++)

int main() 
{
    int N,M;
    int i,j,k;
    int cnt = 0;
    cin >> N >> M;
    
    rep(i,N){
      rep(j,N){
        k = M-i-j;
        if(1 <= k and k <= N){
          cnt++;
        }
      }
    }
    
    cout << cnt << endl;
	  
    return 0;
}
