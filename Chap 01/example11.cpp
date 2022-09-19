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

    // 맨 마지막 원소 하나를 제거합니다.
    vec.pop_back();
    std::cout << "pop_back(): ";
    print(vec);

    // 맨 처음 원소를 제거
    vec.erase(vec.begin());
    std::cout << "erase(): ";
    print(vec);

    vec.erase(vec.begin() + 2, vec.begin() + 4);
    std::cout << "2번째 인덱스부터 3번째 인덱스 까지 삭제: ";
    print(vec);
}