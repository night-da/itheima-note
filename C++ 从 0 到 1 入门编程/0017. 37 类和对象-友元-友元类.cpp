#include <iostream>
#include <string>
using namespace std;

class Building;

class GoodGay {
public:
	GoodGay();

	void visit();

	Building* building;
};

class Building {
	friend class GoodGay;

public:
	Building();

public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

Building::Building() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay() {
	building = new Building;
}

void GoodGay::visit() {
	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test() {
	GoodGay gg;
	gg.visit();
}

int main() {
	test();

	return 0;
}