#include <iostream>
#include <forward_list>

void print(std::forward_list<int> fwd_list)
{
    for (auto ele : fwd_list)
    {
        std::cout << ele << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::forward_list<int> fwd_list = {1, 2, 3, 4, 5};

    fwd_list.pop_front();
    std::cout << "첫 번째 원소 삭제: ";
    print(fwd_list);

    auto it = fwd_list.begin();

    fwd_list.erase_after(it);
    std::cout << "it 다음 위치 삭제(1번째 인덱스 삭제): ";
    print(fwd_list);

    fwd_list.erase_after(it, fwd_list.end());
    std::cout << "it 다음부터 끝까지 삭제: ";
    print(fwd_list);
}