#include <iostream>
using namespace std;

class Person {
public:
	void showClassName() {
		cout << "this is Person class" << endl;
	}

	void showPersonAge() {
		// if (this == NULL) {
		// 	return;
		// }

		cout << "age = " << this->m_Age << endl;
	}

	int m_Age;
};

void test() {
	Person* p = NULL;

	p->showClassName();

	p->showPersonAge();
}

int main() {
	test();

	return 0;
}