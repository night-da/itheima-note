#include <iostream>
using namespace std;

int* func() {
    int* p = new int(10);
    return p;
}

void test_1() {
    int* p = func();

    cout << *p << endl;

    delete p;
}

void test_2() {
    int* arr = new int[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = i + 100;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }

    delete[] arr;
}

int main() {
    test_1();

    cout << endl;

    test_2();

	return 0;
}