#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T Adder(T n1, T n2)
{
    cout << "���ø� �Լ� ȣ��" << endl;
    return n1 + n2;
}

// ���ø� �Լ��� �񱳸� ���� int�� �Լ�
int Adder_int(int n1, int n2)
{
    cout << "int �� �Լ� ȣ��" << endl;
    return n1 + n2;
}

int main()
{
    cout << Adder<int>(1, 2) << endl;
    cout << Adder<double>(1.1, 2.2) << endl;
    cout << Adder_int(1.1, 2.2) << endl;

    return 0;
}