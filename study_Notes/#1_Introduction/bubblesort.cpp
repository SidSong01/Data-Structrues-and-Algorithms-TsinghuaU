#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubblesort(vector<int>& a) {
    int len = a.size();
    for (int i = 0; i < len; i++) {
        for (int j = 1; j < len - i; ++j) {
            if (a[j - 1] > a[j]) {
                swap(a[j - 1], a[j]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Please enter the length of the list you want to sort, ending wiht an \"ENTER\"." << endl;
    cin >> n;
    cout << "Please enter each of the element, ending wiht \"ENTER\"." << endl;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    bubblesort(nums);
    cout << "The result is: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << nums[i] << " ";
    }
  
    return 0;
}
