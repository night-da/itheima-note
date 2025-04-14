#include <iostream>
#include <string>
using namespace std;

// ����ָ���ͷ��������
class Animal {
public:
	Animal() {
		cout << "Animal ���캯������" << endl;
	}

	virtual void speak() = 0;

    // virtual ~Animal() {
	//	 cout << "Animal ��������������" << endl;
	// }

	virtual ~Animal() = 0;
};

Animal::~Animal() {
	cout << "Animal ����������������" << endl;
}

class Cat : public Animal {
public:
	Cat(string name) {
        m_Name = new string(name);
		cout << "Cat ���캯������" << endl;
	}

	void speak() override {
		cout << *m_Name << "Сè��˵��" << endl;
	}

	~Cat() {
		if (m_Name != NULL) {
            delete m_Name;
			m_Name = NULL;
			cout << "Cat ������������" << endl;
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