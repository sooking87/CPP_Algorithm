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
    std::cout << "초기 deque: ";
    print(deq);

    // 삽입: push_front, insert(ad, 원소)
    deq.push_front(0);
    std::cout << "push_front(0): ";
    print(deq);

    deq.insert(deq.begin() + 2, 10);
    std::cout << "맨 앞 + 2자리에 10추가: ";
    print(deq);

    // 삭제: pop_back(), pop_front(), erase(삭제 원소 주소), erase(삭제 시작할 원소, 삭제 끝낼 원소)
    deq.pop_back();
    std::cout << "맨 뒤 원소 삭제: ";
    print(deq);
    deq.pop_front();
    std::cout << "맨 앞 원소 삭제: ";
    print(deq);

    deq.erase(deq.begin() + 1);
    std::cout << "맨 앞 + 1자리 원소 삭제: ";
    print(deq);
    deq.erase(deq.begin() + 3, deq.end());
    std::cout << "맨 앞 + 3자리에서부터 끝까지 삭제: ";
    print(deq);
}