#include <iostream>
using namespace std;

// ֻ�зǾ�̬��Ա������������Ķ�����
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