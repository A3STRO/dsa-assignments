//C++ program that implements basic operations on an array: insertion, deletion, and updating of elements

#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &arr, int pos, int k){
    for(int i=arr.size(); i>pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = k;
}

void deletePos(vector<int> &arr, int pos){
    for(int i=pos; i<arr.size()-1; i++)
        arr[i] = arr[i+1];
    arr.pop_back();
}

void update(vector<int> &arr, int pos, int k){
    for(int i=0; i<arr.size(); i++){
        if(i == pos)
            arr[i] = k;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=0; i<n; i++)
        cin>>arr[i];

    insert(arr,1,10); // Inserting at position 1 with the value 10
    for(auto it : arr)
        cout<<it<<" ";
    cout<<endl;

    deletePos(arr,1); // Deleting the element at position 1
    for(auto it : arr)
        cout<<it<<" ";
    cout<<endl;

    update(arr,1,50); // Updating the element at position 1 (0-indexed) with the value 50
    for(auto it : arr)
        cout<<it<<" ";
    cout<<endl;
    return 0;
}

// I have implemented the logic using vector<int> because using traditional int arr[] will be hectic in implementation
// The code is a bit messy but I did it on my own. No AIs involved :)
// Sample output:
// 3
// 1 2 3
// 1 10 2 3 
// 1 2 3 
// 1 50 3 