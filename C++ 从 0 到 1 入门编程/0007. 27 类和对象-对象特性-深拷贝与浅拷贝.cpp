#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "Person 的默认构造函数调用" << endl;
	}

	Person(int age, int height) {
		m_Age = age;
		m_Height = new int(height);

		cout << "Person 的有参构造函数调用" << endl;
	}

    // 深拷贝：重写拷贝构造函数
	Person(const Person& p) {
        m_Age = p.m_Age;
		m_Height = new int(*p.m_Height);

		cout << "Person 的拷贝构造函数调用" << endl;
	}

	~Person() {
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}

		cout << "Person 的析构函数调用" << endl;
	}

	int m_Age;
	int* m_Height;
};

void test() {
	Person p1(18, 160);

	cout << "p1 的年龄为：" << p1.m_Age << " 身高为：" << *p1.m_Height << endl;

	Person p2(p1);

	cout << "p2 的年龄为：" << p2.m_Age << " 身高为：" << *p2.m_Height << endl;
}

int main() {
	test();

	return 0;
}