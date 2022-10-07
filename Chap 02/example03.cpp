#include <iostream>
#include <vector>

// enum 클래스로 도시 이름 지정
enum class city : int
{
    MOSCOW,
    LONDON,
    SEOUL,
    SEATTLE,
    DUBAI,
    SYDNEY
};
// city enum에 대한 << 연산자. 오 신기하네
// istream 클래스: operator>>가 istream 클래스에 정의된 연산자
// ostream 클래스: operator<<가 ostream 클래스에 정의된 연산자
std::ostream &operator<<(std::ostream &os, const city c)
{
    switch (c)
    {
    case city::LONDON:
        os << "런던";
        return os;
    case city::MOSCOW:
        os << "모스크바";
        return os;
    case city::SEOUL:
        os << "서울";
        return os;
    case city::SEATTLE:
        os << "시애틀";
        return os;
    case city::DUBAI:
        os << "두바이";
        return os;
    case city::SYDNEY:
        os << "시드니";
        return os;
    defualt:
        return os;
    }
}

struct graph
{
    std::vector<std::vector<int>> data;

    // 그래프 초기화 해당 코드에서는 6 * 6 벡터를 만든다.
    graph(int n)
    {
        data.reserve(n);
        std::vector<int> row(n);
        std::fill(row.begin(), row.end(), -1);

        for (int i = 0; i < n; i++)
        {
            data.push_back(row);
        }
    }

    void addEdge(const city c1, const city c2, int dis)
    {
        std::cout << "에지 추가: " << c1 << "-" << c2 << "=" << dis << std::endl;

        // static_cast<바꾸려고 하는 타입>(대상);
        auto n1 = static_cast<int>(c1);
        auto n2 = static_cast<int>(c2);
        data[n1][n2] = dis;
        data[n2][n1] = dis;
    }

    void removeEdge(const city c1, const city c2)
    {
        std::cout << "에지 삭제: " << c1 << "-" << c2 << std::endl;

        auto n1 = static_cast<int>(c1);
        auto n2 = static_cast<int>(c2);
        data[n1][n2] = -1;
        data[n2][n1] = -1;
    }
};
int main()
{
    graph g(6);
    g.addEdge(city::LONDON, city::MOSCOW, 2500);
    g.addEdge(city::LONDON, city::SEOUL, 9000);
    g.addEdge(city::LONDON, city::DUBAI, 5500);
    g.addEdge(city::SEOUL, city::MOSCOW, 6600);
    g.addEdge(city::SEOUL, city::SEATTLE, 8000);
    g.addEdge(city::SEOUL, city::DUBAI, 7000);
    g.addEdge(city::SEOUL, city::SYDNEY, 8000);
    g.addEdge(city::SEATTLE, city::MOSCOW, 8400);
    g.addEdge(city::SEATTLE, city::SYDNEY, 12000);
    g.addEdge(city::DUBAI, city::SYDNEY, 1200);

    g.addEdge(city::SEATTLE, city::LONDON, 8000);
    g.removeEdge(city::SEATTLE, city::LONDON);

    return 0;
}