#include <iostream>
#include <string>
using namespace std;

class Base {
public:
	Base() {
		m_A = 100;
	}

	void func() {
		cout << "Base - func() ����" << endl;
	}

	void func(int a) {
        (void)a;
		cout << "Base - func(int a) ����" << endl;
	}

	int m_A;
};

class Son : public Base {
public:
	Son() {
		m_A = 200;
	}

	void func() {
		cout << "Son - func() ����" << endl;
	}

	int m_A;
};

void test_1() {
	Son s;

	cout << "Son  �� m_A = " << s.m_A << endl;
	cout << "Base �� m_A = " << s.Base::m_A << endl;
}

void test_2() {
	Son s;

	s.func();

	s.Base::func();

	s.Base::func(100);
}

int main() {
	test_1();

    cout << endl;

	test_2();

	return 0;
}