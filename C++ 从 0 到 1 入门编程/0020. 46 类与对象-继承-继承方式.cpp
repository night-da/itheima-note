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

class Son_1 : public Base {
public:
	void func() {
		m_A = 10; // public
		m_B = 10; // protected
	}
};

class Son_2 : protected Base {
public:
	void func() {
		m_A = 100; // protected
		m_B = 100; // protected
	}
};

class Son_3 : private Base {
public:
	void func() {
		m_A = 100; // private
		m_B = 100; // private
	}
};

int main() {

	return 0;
}