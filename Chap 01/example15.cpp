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
    std::cout << "ù ��° ���� ����: ";
    print(fwd_list);

    auto it = fwd_list.begin();

    fwd_list.erase_after(it);
    std::cout << "it ���� ��ġ ����(1��° �ε��� ����): ";
    print(fwd_list);

    fwd_list.erase_after(it, fwd_list.end());
    std::cout << "it �������� ������ ����: ";
    print(fwd_list);
}