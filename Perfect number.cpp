#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n,sum = 0;

cin>>n;

for(int i = 1; i<n; i++){

if (n%i == 0){

sum = sum+i;

}

}

if (sum == n){

cout<<"Perfect Number";

}

else{

cout<<"Not perfect no.";

}
    



    return 0;
}
