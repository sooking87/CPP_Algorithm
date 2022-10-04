#include <iostream>

int main()
{
    int n;
    int mod;
    std::cin >> n >> mod;

    int start = (n / 100) * 100;

    for (int i = start; i < (start + 100); i++)
    {
        if (i % mod == 0)
        {
            int ans = i % 100;
            // 마지막 두 자리수가 한자리 수라면
            if (i % 100 < 10)
            {
                std::cout << 0;
            }
            std::cout << ans << "\n";
            break;
        }
    }
}