#include<iostream>

using namespace std;

int sum(int A[], int n) {
	if (n < 1) {
		return 0;
	} else if(n == 1) {
		return A[n - 1];
	}
	else {
		return A[n - 1] + sum(A, n-1);
	}

}

int main() {

	cout << "hello world" << endl;

	int arr[] = {1, 2, 3, 4, 5, 6};
	int length = end(arr) - begin(arr);
	int result = sum(arr, length);
	cout << "The elements of the array are: " << endl;
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "result: " << result << endl;
	return 0;

}
