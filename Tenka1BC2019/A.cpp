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
    int a,b,c;
    int st,en;
    bool fl=false;
    cin >> a >> b >> c;
    
    if(a>b){ st=b; en=a; }
    else{ st=a; en=b; }
    
    for(int i = st; i<en; i++){
      if(i==c){
        fl=true;
        break;
      }
    }
    
    if(fl){ cout << "Yes"; }
    else{ cout << "No"; }
    cout << endl;
 
    return 0;
}
