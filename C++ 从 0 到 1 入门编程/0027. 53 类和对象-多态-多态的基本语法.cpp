#include <iostream>
using namespace std;

// 子类重写父类的虚函数
class Animal {
public:
	virtual void speak() {
		cout << "动物在说话" << endl;
	}
};

class Cat : public Animal {
public:
	void speak() override {
		cout << "小猫在说法" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() override {
		cout << "小狗在说法" << endl;
	}
};

// Animal& animal = cat / dog
void doSpeak(Animal& animal) {
	animal.speak();
}

void test_1() {
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

void test_2() {
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}

int main() {
	test_1();

	test_2();

	return 0;
}