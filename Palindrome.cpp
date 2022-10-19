#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main() {
    char S[10];
    int i, l;
    int f = 0;
    cin>>S;
    l = strlen(S);
    for(i = 0; i<l; i++){
        if(S[i] != S[l-i-1]){
            f = 1;
            break;
        }
    }
    if(f){
        cout<<"no"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}
