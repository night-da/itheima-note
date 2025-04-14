#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "Person 的默认构造函数调用" << endl;
	}

	Person(int age) {
        m_Age = age;
		cout << "Person 的有参构造函数调用" << endl;
	}

	Person(const Person& p) {
        m_Age = p.m_Age;
		cout << "Person 的拷贝构造函数调用" << endl;
	}

	~Person() {
		cout << "Person 的析构函数调用" << endl;
	}

	int m_Age;
};

void test_1() {
	Person p1(20);
	Person p2(p1);
	
	cout << "p2 的年龄为：" << p2.m_Age << endl;
}

void doWork_1(Person p) {
    p.m_Age = 10;
}

void test_2() {
	Person p;
	doWork_1(p);
}

Person doWork_2() {
	Person p1;
	return Person(p1);
}

void test_3() {
	Person p = doWork_2();
}

int main() {
	test_1();
    
    cout << endl;

	test_2();

    cout << endl;

	test_3();
    
	return 0;
}