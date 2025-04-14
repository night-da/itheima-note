#include <iostream>
#include <string>
using namespace std;

class Building;

class GoodGay {
public:
	GoodGay();

	void visit_1();
	void visit_2();

	Building* building;
};

class Building {
	friend void GoodGay::visit_1();

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

void GoodGay::visit_1() {
	cout << "visit_1 �������ڷ��ʣ�" << building->m_SittingRoom << endl;

	cout << "visit_1 �������ڷ��ʣ�" << building->m_BedRoom << endl;
}
void GoodGay::visit_2() {
	cout << "visit_2 �������ڷ��ʣ�" << building->m_SittingRoom << endl;
}

void test() {
	GoodGay gg;
	gg.visit_1();
	gg.visit_2();

}

int main() {
	test();

	return 0;
}