#include <iostream>  // std::cout
#include <vector>    // std::vector
#include <algorithm> // std::find

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
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::cout << "vec1 �ʱⰪ: ";
    print(vec1);

    vec1.insert(vec1.begin(), 0);
    std::cout << "vec1 ���� �տ� 0�߰�: ";
    print(vec1);

    vec1.insert(++vec1.begin(), 10);
    std::cout << "vec1 �ε��� 1�� 10�߰�: ";
    print(vec1);

    std::vector<int> vec2;
    vec2.push_back(1);
    std::cout << "vec2 �� ���Ϳ� 1�߰�: ";
    print(vec2);

    vec2.push_back(2);
    std::cout << "vec2 �� �ڿ� 2�߰�: ";
    print(vec2);

    vec2.insert(vec2.begin(), 3);
    std::cout << "vec2 �� �տ� 3�߰�: ";
    print(vec2);

    vec2.insert(find(vec2.begin(), vec2.end(), 1), 4); // 1�տ� 4�� �߰�
    std::cout << "vec2 1�տ� 4�� �߰�: ";
    print(vec2);
}