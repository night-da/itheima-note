#include <iostream>
using namespace std;

class Person {
public:
    // ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	static void func() {
		m_A = 100;
		cout << "static void func ����" << endl;
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