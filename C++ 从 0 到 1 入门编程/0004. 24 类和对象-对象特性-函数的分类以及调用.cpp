#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "Person ���޲ι��캯������" << endl;
	}

	Person(int a) {
		age = a;
		cout << "Person ���вι��캯������" << endl;
	}

    Person(const Person& p) {
        age = p.age;
		cout << "Person �Ŀ������캯������" << endl;
	}

	~Person() {
		cout << "Person ��������������" << endl;
	}

	int age;
};

void test() {
    // ���ŷ�
	Person p1;
	Person p2(10);
	Person p3(p2);

	cout << "p2 ������Ϊ��" << p2.age << endl;
	cout << "p3 ������Ϊ��" << p3.age << endl;

    // ��ʽ��
	Person p4 = Person(10);
	Person p5 = Person(p4);

    // ��ʽת����
	Person p6 = 10;
	Person p7 = p6;
}

int main() {
	test();

	return 0;
}