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

#define rep0(i,n) for (int i = 0; i < (int)(n); i++)
#define rep(i,n) for (int i = 1; i <= (int)(n); i++)

void fib(int a0, int a1, int N){
    if(N == 2){
        cout << a1 << endl;
    }else{
        int x = a1;
        int y = (int)(a0+a1)%100;
        //cout << a1 << "\n";
        fib(x,y,N-1);
    }
}

int main() {
    int i;
    int n,x,y;
    cin >> n >> x >> y;

    fib(x,y,n);

    return 0;
}
