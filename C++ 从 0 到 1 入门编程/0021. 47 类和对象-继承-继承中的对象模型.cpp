#include <iostream>
#include <string>
using namespace std;

class Base {
public:
	int m_A;

protected:
	int m_B;

private:
	int m_C;
};

class Son : public Base {
public:
	int m_D;
};

void test() {
	cout << "size of Son = " << sizeof(Son) << endl;
}

int main() {
	test();

	return 0;
}