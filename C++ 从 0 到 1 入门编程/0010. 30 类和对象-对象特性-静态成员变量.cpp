#include <iostream>
using namespace std;

class Person {
public:
	static int m_A;
};

// ���������������ʼ��
int Person::m_A = 100;

void test_1() {
	Person p;
	cout << p.m_A << endl;

    // ���ж�����ͬһ������
	Person p2;
	p2.m_A = 200;

	cout << p.m_A << endl;
}

void test_2() {
    // ͨ��������з���
	Person p;
	cout << p.m_A << endl;

    // ����ͨ�����ͽ��з���
	cout << Person::m_A << endl;
}

int main() {
	test_1();

    cout << endl;

	test_2();

	return 0;
}