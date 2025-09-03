// pointerPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    //1 
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int* ptr_a = &a;
    int* ptr_b = &b;

    cout << "Value of a via pointer: " << *ptr_a << endl;
    cout << "Value of b via pointer: " << *ptr_b << endl;

    return 0;

    //2
    srand(time(0));
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        *(arr + i) = rand() % 100;
    }

    int* max_ptr = arr;
    int* ptr = arr;

    for (int i = 1; i < SIZE; i++) {
        ptr++;
        if (*ptr > *max_ptr) {
            max_ptr = ptr;
        }
    }

    cout << "Array: ";
    for (int i = 0; i < SIZE; i++)
        cout << *(arr + i) << " ";
    cout << "\nMaximum value: " << *max_ptr << endl;

    return 0;

    //3 
    char str[] = "PointerPractice";
    char* ptr = str;

    int length = 0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    cout << "Length of the string: " << length << endl;

    return 0;

    //4 
    char str[] = "PointerPractice";
    char* ptr = str;

    
    while (*ptr != '\0') {
        ptr++;
    }

    
    cout << "Reversed string: ";
    ptr--; 
    while (ptr >= str) {
        cout << *ptr;
        ptr--;
    }

    cout << endl;
    return 0;

    //5 
    srand(time(0));
    vector<int> v = { 5, 8, 13, 21, 34, 55 }; 

    int* begin = &v[0];
    int* end = &v[0] + v.size() - 1;

    while (begin < end) {
        begin++;
        end--;
    }

    
    if (begin > end) {
        begin--;
    }

    cout << "Vector: ";
    for (int val : v) cout << val << " ";
    cout << "\nMidpoint value: " << *begin << endl;

    return 0;
}
}


