#include <iostream>
#include <string>
using namespace std;

class BasePage {
public:
	void header() {
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}

	void footer() {
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}

	void left() {
		cout << "Java��Python��C++��...(���������б�)" << endl;
	}
}; 

class Java : public BasePage {
public:
	void content() {
		cout << "Javaѧ����Ƶ" << endl;
	}
};

class Python : public BasePage {
public:
	void content() {
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

class CPP : public BasePage {
public:
	void content() {
		cout << "C++ѧ����Ƶ" << endl;
	}
};

void test() {
	cout << "Java������Ƶҳ�����£� " << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << endl << "--------------------" << endl << endl;

	cout << "Python������Ƶҳ�����£� " << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << endl << "--------------------" << endl << endl;

	cout << "C++������Ƶҳ�����£� " << endl;
	CPP cp;
	cp.header();
	cp.footer();
	cp.left();
	cp.content();
}

int main() {
	test();

	return 0;
}