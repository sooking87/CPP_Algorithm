#include <iostream>
#include <deque>

void print(std::deque<int> deque)
{
    for (auto i : deque)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
int main()
{
    std::deque<int> deq = {1, 2, 3, 4, 5};
    std::cout << "�ʱ� deque: ";
    print(deq);

    // ����: push_front, insert(ad, ����)
    deq.push_front(0);
    std::cout << "push_front(0): ";
    print(deq);

    deq.insert(deq.begin() + 2, 10);
    std::cout << "�� �� + 2�ڸ��� 10�߰�: ";
    print(deq);

    // ����: pop_back(), pop_front(), erase(���� ���� �ּ�), erase(���� ������ ����, ���� ���� ����)
    deq.pop_back();
    std::cout << "�� �� ���� ����: ";
    print(deq);
    deq.pop_front();
    std::cout << "�� �� ���� ����: ";
    print(deq);

    deq.erase(deq.begin() + 1);
    std::cout << "�� �� + 1�ڸ� ���� ����: ";
    print(deq);
    deq.erase(deq.begin() + 3, deq.end());
    std::cout << "�� �� + 3�ڸ��������� ������ ����: ";
    print(deq);
}