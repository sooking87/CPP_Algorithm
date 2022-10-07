#include <iostream>
#include <vector>

// enum Ŭ������ ���� �̸� ����
enum class city : int
{
    MOSCOW,
    LONDON,
    SEOUL,
    SEATTLE,
    DUBAI,
    SYDNEY
};
// city enum�� ���� << ������. �� �ű��ϳ�
// istream Ŭ����: operator>>�� istream Ŭ������ ���ǵ� ������
// ostream Ŭ����: operator<<�� ostream Ŭ������ ���ǵ� ������
std::ostream &operator<<(std::ostream &os, const city c)
{
    switch (c)
    {
    case city::LONDON:
        os << "����";
        return os;
    case city::MOSCOW:
        os << "��ũ��";
        return os;
    case city::SEOUL:
        os << "����";
        return os;
    case city::SEATTLE:
        os << "�þ�Ʋ";
        return os;
    case city::DUBAI:
        os << "�ι���";
        return os;
    case city::SYDNEY:
        os << "�õ��";
        return os;
    defualt:
        return os;
    }
}

struct graph
{
    std::vector<std::vector<int>> data;

    // �׷��� �ʱ�ȭ �ش� �ڵ忡���� 6 * 6 ���͸� �����.
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
        std::cout << "���� �߰�: " << c1 << "-" << c2 << "=" << dis << std::endl;

        // static_cast<�ٲٷ��� �ϴ� Ÿ��>(���);
        auto n1 = static_cast<int>(c1);
        auto n2 = static_cast<int>(c2);
        data[n1][n2] = dis;
        data[n2][n1] = dis;
    }

    void removeEdge(const city c1, const city c2)
    {
        std::cout << "���� ����: " << c1 << "-" << c2 << std::endl;

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