#include<bits/stdc++.h>
using namespace std;

int naive(vector<int> arr){
    int sum = 0;
    for(auto it : arr)
        sum += it;
    return sum;
}

int recur(vector<int> arr){
    if(arr.empty()) return 0;
    int last = arr.back();
    arr.pop_back();
    return last + recur(arr);
}

int main(){
    vector<int> arr = {10,20,30,40,50};
    cout<<naive(arr)<<endl;
    cout<<recur(arr)<<endl;
    cout<<accumulate(arr.begin(),arr.end(),0)<<endl;
    return 0;
}

//The asymptotic notations (Big O, Omega, Theta) time complexity for these functions will be "n-square" for every notation.