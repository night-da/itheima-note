#include <iostream>
#include <string>
using namespace std;

class Phone {
public:
	Phone(string pName) {
		cout << "Phone �Ĺ��캯������" << endl;
		m_PName = pName;
	}

	~Phone() {
		cout << "Phone ��������������" << endl;
	}

	string m_PName;
};

class Person {
public:
    // Phone m_Phone = pName
	Person(string name, string pName) : m_Name(name), m_Phone(pName) {
		cout << "Person �Ĺ��캯������" << endl;
	}

	~Person() {
		cout << "Person ��������������" << endl;
	}

	string m_Name;
	Phone m_Phone;
};

void test() {
	Person p("����", "ƻ��MAX");

	cout << p.m_Name << "���ţ�" << p.m_Phone.m_PName << endl;
}

int main() {
	test();

	return 0;
}