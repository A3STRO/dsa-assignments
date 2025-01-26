#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    // printing the reversed array
    for (int i = 9; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;

    // checking if the array is sorted
    bool sorted = true;
    for (int i = 0; i < 9; i++)
        if (arr[i] > arr[i + 1])
        {
            sorted = false;
            break;
        }
    cout << (sorted ? "The array is sorted\n" : "The array is not sorted\n");

    // find the minimum and the maximum
    int mini = INT_MAX, maxi = INT_MIN;
    for (auto it : arr)
    {
        if (it < mini)
            mini = it;
        if (it > maxi)
            maxi = it;
    }
    cout << mini << " " << maxi << endl;

    // display the original array
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
    return 0;
}