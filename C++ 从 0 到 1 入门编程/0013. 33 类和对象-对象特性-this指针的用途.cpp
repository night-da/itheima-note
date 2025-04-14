#include <iostream>
using namespace std;

class Person {
public:
	Person(int age) {
		this->age = age;
	}

	Person& PersonAddAge(Person& p) {
		this->age += p.age;

		return *this;
	}

	int age;

};

void test_1() {
	Person p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
}

void test_2() {
	Person p1(10);

	Person p2(10);

	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2的年龄为：" << p2.age << endl;
}

int main() {
	test_1();

    cout << endl;

	test_2();

	return 0;
}