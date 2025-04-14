#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string m_Name;

// 与 private 区别：其子类可以访问 protected 的内容
protected:
    string m_Car;

private:
    int m_Password;

public:
    void func() {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 123456;
    }
};

int main() {

    return 0;
}