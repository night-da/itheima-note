#include <iostream>
#include <string>
using namespace std;

class Building {
	friend void goodGay(Building* building);

public:
	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

void goodGay(Building *building) {
	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test() {
	Building building;
	goodGay(&building);
}

int main() {
	test();

	return 0;
}