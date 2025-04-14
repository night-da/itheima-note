#include <iostream>
using namespace std;

// 只有非静态成员变量才属于类的对象上
class Person {
public:
	int m_A;

	static int m_B;

	void func() {}

	static void func2() {}
};

int Person::m_B = 0;

void test() {
	Person p;

	cout << "size of p = " << sizeof(p) << endl;
}

int main() {
	test();

	return 0;
}