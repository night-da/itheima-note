#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string m_Name;

// �� private ������������Է��� protected ������
protected:
    string m_Car;

private:
    int m_Password;

public:
    void func() {
        m_Name = "����";
        m_Car = "������";
        m_Password = 123456;
    }
};

int main() {

    return 0;
}