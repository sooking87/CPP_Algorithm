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
    std::forward_list<int> fwd_list = {1, 2, 3};
    // 맨 앞에 0 추가
    fwd_list.emplace_front(0);
    std::cout << "맨 앞에 0 추가: ";
    print(fwd_list);

    auto it = fwd_list.begin();

    // 맨 처음 원소 뒤에 5 추가
    fwd_list.emplace_after(it, 5);
    std::cout << "맨 처음 원소 뒤에 5 추가: ";
    print(fwd_list);
    // 맨 처음 원소 뒤에 6 추가s
    fwd_list.emplace_after(it, 6);
    std::cout << "맨 처음 원소 뒤에 6 추가: ";
    print(fwd_list);
}