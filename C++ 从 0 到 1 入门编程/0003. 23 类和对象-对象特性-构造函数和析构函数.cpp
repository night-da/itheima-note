#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "Person �Ĺ��캯������" << endl;
	}

	~Person() {
		cout << "Person ��������������" << endl;
	}
};

void test() {
	Person p;
}

int main() {
	test();

	return 0;
}