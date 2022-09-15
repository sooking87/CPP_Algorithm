#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 10> arr1;
    arr1[0] = 1;
    cout << "arr1 배열의 첫 번째 원소: " << arr1[0] << endl;

    array<int, 4> arr2 = {1, 2, 3, 4};
    cout << "arr2의 모든 원소: ";

    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
}