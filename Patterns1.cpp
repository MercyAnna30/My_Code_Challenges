#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "n:";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}