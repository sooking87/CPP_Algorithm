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
    // �� �տ� 0 �߰�
    fwd_list.emplace_front(0);
    std::cout << "�� �տ� 0 �߰�: ";
    print(fwd_list);

    auto it = fwd_list.begin();

    // �� ó�� ���� �ڿ� 5 �߰�
    fwd_list.emplace_after(it, 5);
    std::cout << "�� ó�� ���� �ڿ� 5 �߰�: ";
    print(fwd_list);
    // �� ó�� ���� �ڿ� 6 �߰�s
    fwd_list.emplace_after(it, 6);
    std::cout << "�� ó�� ���� �ڿ� 6 �߰�: ";
    print(fwd_list);
}