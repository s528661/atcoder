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

#define rpz(i,n) for (int i = 0; i < (int)(n); ++i)
#define rp(i,n) for (int i = 1; i <= (int)(n); ++i)

#define vmax(A,k) auto max_element(A.begin()+k, A.end())
#define vmin(A,k) auto min_element(A.begin()+k, A.end())

#define ALPHA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

int main() 
{
    int i,j;
    int N,Q;
    cin >> N >> Q;
    vector<int> A(N),acc(N+1);
    vector<int> L(Q),R(Q);

    rpz(i,N) cin >> A[i];
    rpz(i,N+1) acc[i+1] = acc[i] + A[i];
    rp(j,Q){
        cin >> L[j] >> R[j];
        cout << (acc[R[j]]-acc[L[j]-1]) << endl;
    }
    return 0;
}
