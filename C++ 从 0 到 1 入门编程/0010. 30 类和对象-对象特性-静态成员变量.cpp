#include <iostream>
using namespace std;

class Person {
public:
	static int m_A;
};

// 类内声明，类外初始化
int Person::m_A = 100;

void test_1() {
	Person p;
	cout << p.m_A << endl;

    // 所有对象共享同一份数据
	Person p2;
	p2.m_A = 200;

	cout << p.m_A << endl;
}

void test_2() {
    // 通过对象进行访问
	Person p;
	cout << p.m_A << endl;

    // 可以通过类型进行访问
	cout << Person::m_A << endl;
}

int main() {
	test_1();

    cout << endl;

	test_2();

	return 0;
}