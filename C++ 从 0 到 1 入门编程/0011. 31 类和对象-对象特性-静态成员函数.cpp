#include <iostream>
using namespace std;

class Person {
public:
    // 静态成员函数只能访问静态成员变量
	static void func() {
		m_A = 100;
		cout << "static void func 调用" << endl;
	}

	static int m_A;
};

int Person::m_A = 0;

void test() {
	Person p;
	p.func();

	Person::func();
}

int main() {
	test();

	return 0;
}