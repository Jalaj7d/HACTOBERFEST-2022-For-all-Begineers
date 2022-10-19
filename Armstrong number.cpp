#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num, onum, r, re = 0;
    cout<<"Enter a three-digit integer: ";
    cin>>num;
    onum = num;
    while(onum != 0){
        r = onum % 10;
        re += r*r*r;
        onum /= 10;
    }
    if (re == num)
        cout<<num<<" is an Armstrong number.";
    else
        cout<<num<<" is not an armstrong number.";
    return 0;
}
