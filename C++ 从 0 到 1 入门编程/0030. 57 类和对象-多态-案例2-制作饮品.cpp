#include <iostream>
using namespace std;

class AbstractDrinking {
public:
	virtual void Boil() = 0;

	virtual void Brew() = 0;

	virtual void PourInCup() = 0;

	virtual void PutSomething() = 0;

	void makeDrink() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}

    virtual ~AbstractDrinking() {}
};

class Coffee : public AbstractDrinking {
	void Boil() override {
		cout << "��ũ��ɽȪ" << endl;
	}

	void Brew() override {
		cout << "���ݿ���" << endl;
	}

	void PourInCup() override {
		cout << "���뱭��" << endl;
	}

	void PutSomething() override {
		cout << "�����Ǻ�ţ��" << endl;
	}
};

class Tea : public AbstractDrinking {
	void Boil() override {
		cout << "���Ȫˮ" << endl;
	}

	void Brew() override {
		cout << "���ݲ�Ҷ" << endl;
	}

	void PourInCup() override {
		cout << "���뱭��" << endl;
	}

	void PutSomething() override {
		cout << "�������" << endl;
	}
};

void doWork(AbstractDrinking* abs) {
	abs->makeDrink();
    
	delete abs;
}

void test() {
	doWork(new Coffee);

	cout << "---------------" << endl;

	doWork(new Tea);
}

int main() {
	test();

	return 0;
}