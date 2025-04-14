#include <iostream>
#include <string>
using namespace std;

// 父类指针释放子类对象
class Animal {
public:
	Animal() {
		cout << "Animal 构造函数调用" << endl;
	}

	virtual void speak() = 0;

    // virtual ~Animal() {
	//	 cout << "Animal 虚析构函数调用" << endl;
	// }

	virtual ~Animal() = 0;
};

Animal::~Animal() {
	cout << "Animal 纯虚析构函数调用" << endl;
}

class Cat : public Animal {
public:
	Cat(string name) {
        m_Name = new string(name);
		cout << "Cat 构造函数调用" << endl;
	}

	void speak() override {
		cout << *m_Name << "小猫在说话" << endl;
	}

	~Cat() {
		if (m_Name != NULL) {
            delete m_Name;
			m_Name = NULL;
			cout << "Cat 析构函数调用" << endl;
		}
	}

	string* m_Name;
};

void test() {
	Animal* animal = new Cat("Tom");
	animal->speak();

	delete animal;
}

int main() {
	test();

	return 0;
}