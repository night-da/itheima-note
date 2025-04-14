#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "Person 的构造函数调用" << endl;
	}

	~Person() {
		cout << "Person 的析构函数调用" << endl;
	}
};

void test() {
	Person p;
}

int main() {
	test();

	return 0;
}