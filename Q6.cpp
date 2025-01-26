// Write a recursive function to determine if a given natural numberN is a palindrome.
#include <bits/stdc++.h>
using namespace std;

int recur(int num, int temp = 0)
{
    if (num == 0)
        return temp;
    temp = temp * 10 + num % 10;
    return recur(num / 10, temp);
}

int main()
{
    int num;
    cin >> num;
    cout << (num == recur(num) ? "Palindrome\n" : "Not Palindrome\n");
    return 0;
}