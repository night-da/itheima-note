#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "Person 的无参构造函数调用" << endl;
	}

	Person(int a) {
		age = a;
		cout << "Person 的有参构造函数调用" << endl;
	}

    Person(const Person& p) {
        age = p.age;
		cout << "Person 的拷贝构造函数调用" << endl;
	}

	~Person() {
		cout << "Person 的析构函数调用" << endl;
	}

	int age;
};

void test() {
    // 括号法
	Person p1;
	Person p2(10);
	Person p3(p2);

	cout << "p2 的年龄为：" << p2.age << endl;
	cout << "p3 的年龄为：" << p3.age << endl;

    // 显式法
	Person p4 = Person(10);
	Person p5 = Person(p4);

    // 隐式转换法
	Person p6 = 10;
	Person p7 = p6;
}

int main() {
	test();

	return 0;
}