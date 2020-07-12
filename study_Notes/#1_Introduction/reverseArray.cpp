#include <iostream>
using namespace std;
int n;

void reverse(char a[], int m)
{
    if (m >= n / 2) {
        return;
    }

    char tem = a[m];
    a[m] = a[n - m - 1];
    a[n - m - 1] = tem;
    reverse(a, m + 1);
}
int main() {

    cout << "Please enter the length of the array you want to reverse, ending with an \"ENTER\"." << endl;
    cin >> n;
    char str[100];
    cout << "Please enter the array you want to reverse, with each element ending with an \"ENTER\"." << endl;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    cout << "The array you entered is" << endl;
    for (int i = 0; i < n; i++) {
        cout << str[i];
    }
    cout << endl;
    reverse(str, 0);
    cout << "The result is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << str[i];
    }
    return 0;
}
