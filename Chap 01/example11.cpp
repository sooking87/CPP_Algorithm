#include <iostream>
#include <vector>

void print(std::vector<int> v)
{
    for (auto ele : v)
    {
        std::cout << ele << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // �� ������ ���� �ϳ��� �����մϴ�.
    vec.pop_back();
    std::cout << "pop_back(): ";
    print(vec);

    // �� ó�� ���Ҹ� ����
    vec.erase(vec.begin());
    std::cout << "erase(): ";
    print(vec);

    vec.erase(vec.begin() + 2, vec.begin() + 4);
    std::cout << "2��° �ε������� 3��° �ε��� ���� ����: ";
    print(vec);
}