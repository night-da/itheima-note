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
	cout << "通过对象访问：" << endl;

	Son s;
	cout << "Son  下 m_A = " << s.m_A << endl;
	cout << "Base 下 m_A = " << s.Base::m_A << endl;

	cout << endl << "通过类名访问：" << endl;

	cout << "Son  下 m_A = " << Son::m_A << endl;
	cout << "Base 下 m_A = " << Son::Base::m_A << endl;

}

void test_2() {
	cout << "通过对象访问：" << endl;

	Son s;

	s.func();
    
	s.Base::func();

	cout << endl << "通过类名访问：" << endl;

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