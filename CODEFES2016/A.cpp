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
    string s;
    cin >> s;
    string TEST = "CODEFESTIVAL2016";
    
    int cnt = 0;
    for(int i=0; i<s.length(); i++){
      if(s[i] != TEST[i]) cnt++;
    }
    cout << cnt << endl;
 
    return 0;
}
