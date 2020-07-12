#include <iostream>
#include<ctime>
#include<cstdlib>
#include "Fib.h"

using namespace std;
clock_t start, endt;

__int64 fibI(int n) {  //O(n)
    __int64 f = 1, g = 0;
    while (0 < n--) { g += f; f = g - f; }
    return g; 
}

__int64 fibII(int n, __int64& prev) { //O(n)
    if (0 == n) {
        prev = 1; return 0;
    }
    else {
        __int64 prevPrev; prev = fibII(n - 1, prevPrev);
        return prevPrev + prev;
    }
}

__int64 fibIII(int n) { // O(2^n)
    return (2 > n) ?
        (__int64)n
        : fibIII(n - 1) + fibIII(n - 2);
}

void main() {
    unsigned int n;
    cout.precision(8);

    cout << "Please enter the n of fib(n):" << endl;
    cin >> n;

    printf("\n------------- class Fib -------------\n");
    Fib f(0);
    for (int i = 0; i < n; i++, f.next())
        printf("fib(%2d) = %d\n", i, f.get());
    for (int i = 0; i <= n; i++, f.prev())
        printf("fib(%2d) = %d\n", n - i, f.get());

    printf("\n------------- Iteration -------------\n");
    start = clock();
    __int64 f_1 = fibI(n);
    endt = clock();
    double endtime1 = (double)(endt - start) / CLOCKS_PER_SEC;
    cout << "The " << n << "th value of Fibonacci series is: " << f_1 << ", and the time is " << endtime1 << "s." << endl;

    printf("\n------------- Linear Recursion -------------\n");
    __int64 p;
    start = clock();
    __int64 f_2 = fibII(n, p);
    endt = clock();
    double endtime2 = (double)(endt - start) / (double)CLOCKS_PER_SEC;
    cout << "The " << n << "th value of Fibonacci series is: " << f_2 << ", and the time is " << endtime2 << "s." << endl;

    printf("\n------------- Binary Recursion -------------\n");
    start = clock();
    __int64 f_3 = fibIII(n);
    endt = clock();
    double endtime3 = (double)(endt - start) / CLOCKS_PER_SEC;
    cout << "The " << n << "th value of Fibonacci series is: " << f_3 << ", and the time is " << endtime3 << "s" << endl;

}
