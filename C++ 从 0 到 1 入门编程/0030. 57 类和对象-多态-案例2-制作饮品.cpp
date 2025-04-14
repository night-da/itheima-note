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
		cout << "ÖóÅ©·òÉ½Èª" << endl;
	}

	void Brew() override {
		cout << "³åÅÝ¿§·È" << endl;
	}

	void PourInCup() override {
		cout << "µ¹Èë±­ÖÐ" << endl;
	}

	void PutSomething() override {
		cout << "¼ÓÈëÌÇºÍÅ£ÄÌ" << endl;
	}
};

class Tea : public AbstractDrinking {
	void Boil() override {
		cout << "Öó¿óÈªË®" << endl;
	}

	void Brew() override {
		cout << "³åÅÝ²èÒ¶" << endl;
	}

	void PourInCup() override {
		cout << "µ¹Èë±­ÖÐ" << endl;
	}

	void PutSomething() override {
		cout << "¼ÓÈëèÛè½" << endl;
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