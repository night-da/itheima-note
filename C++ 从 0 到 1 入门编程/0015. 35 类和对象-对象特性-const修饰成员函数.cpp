#include <iostream>
using namespace std;

class Person {
public:
    Person() : m_A(0), m_B(0) {}
    
	void showPerson() const {
		this->m_B = 100;
	}

	void func() {
		m_A = 100;
	}

	int m_A;
	mutable int m_B;
};

void test_1() {
	Person p;
	p.showPerson();
}

void test_2() {
	const Person p;
	p.m_B = 100;

	p.showPerson();
}

int main() {
	test_1();

	test_2();

	return 0;
}