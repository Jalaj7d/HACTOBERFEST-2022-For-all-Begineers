#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,m = 0;
    int f = 0;
    cin>>n;
    m = n/2;
    for(i = 2; i<=m; i++){
        if(n%i == 0){
            cout<<"Not Prime"<<endl;
            f = 1;
            break;
        }
    }
    if (f == 0){
        cout<<"Prime Number"<<endl;
    }
    return 0;
}
