//  Write a recursive function to calculate the sum of the digits of a given positive integer.
#include<bits/stdc++.h>
using namespace std;

int sumDigits(int num){
    if(num/10 == 0) return num;
    return num%10 + sumDigits(num/10);
}

int main(){
    int num;
    cin>>num;
    cout<<sumDigits(num)<<endl;
    return 0;
}