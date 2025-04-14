#include <iostream>
using namespace std;

// ������д������麯��
class Animal {
public:
	virtual void speak() {
		cout << "������˵��" << endl;
	}
};

class Cat : public Animal {
public:
	void speak() override {
		cout << "Сè��˵��" << endl;
	}
};

class Dog : public Animal {
public:
	void speak() override {
		cout << "С����˵��" << endl;
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