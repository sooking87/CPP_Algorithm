#include <iostream>
#include <queue>

int main()
{

    std::cin.sync_with_stdio(0);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    // std::greater<int> -> 최소 힙을 만들 수 있음.
    std::priority_queue<int, std::vector<int>, std::greater<int>> nums;

    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;

        if (temp == 0)
        {
            if (nums.empty())
            {
                std::cout << 0 << "\n";
            }
            else
            {
                std::cout << nums.top() << "\n";
                nums.pop();
            }
        }
        else
        {
            nums.push(temp);
        }
    }
}