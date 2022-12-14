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
