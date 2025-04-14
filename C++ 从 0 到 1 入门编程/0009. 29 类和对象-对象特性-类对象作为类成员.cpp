#include <iostream>
#include <string>
using namespace std;

class Phone {
public:
	Phone(string pName) {
		cout << "Phone 的构造函数调用" << endl;
		m_PName = pName;
	}

	~Phone() {
		cout << "Phone 的析构函数调用" << endl;
	}

	string m_PName;
};

class Person {
public:
    // Phone m_Phone = pName
	Person(string name, string pName) : m_Name(name), m_Phone(pName) {
		cout << "Person 的构造函数调用" << endl;
	}

	~Person() {
		cout << "Person 的析构函数调用" << endl;
	}

	string m_Name;
	Phone m_Phone;
};

void test() {
	Person p("张三", "苹果MAX");

	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << endl;
}

int main() {
	test();

	return 0;
}