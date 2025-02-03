// a program to implement a Direct Address Table for integer keys ranging from 0 to n-1

#include <bits/stdc++.h>
using namespace std;

class DirectAddressTable
{
private:
    vector<int> table;
    vector<bool> isOccupied;

public:
    DirectAddressTable(int size) : table(size, 0), isOccupied(size, false) {}

    void insert(int key, int value)
    {
        if (key >= 0 && key < table.size())
        {
            table[key] = value;
            isOccupied[key] = true;
        }
    }

    string search(int key)
    {
        if (key >= 0 && key < table.size() && isOccupied[key])
        {
            return to_string(table[key]);
        }
        return "NOT FOUND";
    }

    void remove(int key)
    {
        if (key >= 0 && key < table.size())
        {
            isOccupied[key] = false;
        }
    }
};

int main()
{
    int n, q;
    cin >> n >> q;

    DirectAddressTable dat(n);

    for (int i = 0; i < q; i++)
    {
        string operation;
        int key;
        cin >> operation >> key;

        if (operation == "INSERT")
        {
            int value;
            cin >> value;
            dat.insert(key, value);
        }
        else if (operation == "SEARCH")
        {
            cout << dat.search(key) << endl;
        }
        else if (operation == "DELETE")
        {
            dat.remove(key);
        }
    }

    return 0;
}
