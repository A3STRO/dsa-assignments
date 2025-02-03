//Fibonacci number using recursion

#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n <= 1) return n;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}

//fibo(n-1) and fibo(n-2) will be computed individually until the base condition is reached
//and return back to the main condition as the Nth Fibonacci number is the sum of the previous two Fibonacci numbers