#include <iostream>
using namespace std;

class Base {
public:
	virtual void func() = 0;

    virtual ~Base() {}
};

class Son : public Base {
public:
	void func() override {
		cout << "fun º¯Êýµ÷ÓÃ" << endl;
	};
};

void test() {
	Base* base = new Son;
	base->func();
    
	delete base;
}

int main() {
	test();

	return 0;
}