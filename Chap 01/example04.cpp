#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T Adder(T n1, T n2)
{
    cout << "템플릿 함수 호출" << endl;
    return n1 + n2;
}

// 템플릿 함수와 비교를 위한 int형 함수
int Adder_int(int n1, int n2)
{
    cout << "int 형 함수 호출" << endl;
    return n1 + n2;
}

int main()
{
    cout << Adder<int>(1, 2) << endl;
    cout << Adder<double>(1.1, 2.2) << endl;
    cout << Adder_int(1.1, 2.2) << endl;

    return 0;
}