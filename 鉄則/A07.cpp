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

#define rp0(i,n) for(int i = 0; i < (int)(n); ++i)
#define rp1(i,n) for(int i = 1; i <= (int)(n); ++i)

#define rpv(a,A) for(auto &a : A)

#define vmax(A,k) auto max_element(A.begin()+k, A.end())
#define vmin(A,k) auto min_element(A.begin()+k, A.end())

#define u_char unsigned char
#define ll long long
#define ALPHA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

/*
    Participants : A B C D E F G
    An event will be held for 7 days.

    Difference between each adjacent counts
    A : 2 ~ 5 days
    B : 1 ~ 4 days
    C : 3 ~ 6 days
    ...

    A
    0 1 1 1 1 0 0    Counted for 2 ~ 5 days
     1 0 0 0 -1      Difference
    
    B
    1 1 1 1 0 0 0
     0 0 0 -1
    
    C
    0 0 1 1 1 1 0
     0 1 0 0 0 -1
    
    ...

    Sum all differences (A + B + C)
    1 1 0 -1 -1 -1
*/
int main() 
{
    int i,j;
    int D, N;
    vector<int> L(100009),R(100009);
    vector<int> Diff(100009);
    vector<int> Days(100009);

    cin >> D;
    cin >> N;

    rp0(j,N+1) Diff[j] = 0;

    rp1(i,N) {
        cin >> L[i] >> R[i];
    }

    rp1(j,N){
        Diff[L[j]]++;
        Diff[R[j]+1]--;
    }

    Days[0] = 0;
    rp1(i,D){
        Days[i] += Days[i-1] + Diff[i];
    }

    rp1(j,D){
        cout << Days[j] << endl;
    }

    return 0;
}
