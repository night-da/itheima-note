#include <iostream>
#include <string>
using namespace std;

class Base {
public:
	static int m_A;

	static void func() {
		cout << "Base - static void func()" << endl;
	}

	static void func(int a) {
        (void)a;
		cout << "Base - static void func(int a)" << endl;
	}
};

int Base::m_A = 100;

class Son : public Base {
public:
	static int m_A;

	static void func() {
		cout << "Son - static void func()" << endl;
	}
};

int Son::m_A = 200;

void test_1() {
	cout << "ͨ��������ʣ�" << endl;

	Son s;
	cout << "Son  �� m_A = " << s.m_A << endl;
	cout << "Base �� m_A = " << s.Base::m_A << endl;

	cout << endl << "ͨ���������ʣ�" << endl;

	cout << "Son  �� m_A = " << Son::m_A << endl;
	cout << "Base �� m_A = " << Son::Base::m_A << endl;

}

void test_2() {
	cout << "ͨ��������ʣ�" << endl;

	Son s;

	s.func();
    
	s.Base::func();

	cout << endl << "ͨ���������ʣ�" << endl;

	Son::func();

	Son::Base::func();

	Son::Base::func(100);
}

int main() {
	test_1();

    cout << endl;

	test_2();

	return 0;
}