#include <iostream>
#include <queue>

// if : 한 직원은 최대 두명의 부하 직원을 거느릴 수 있다. = 이진 트리 구조

struct node
{
    std::string position;
    node *first;
    node *second;
};

struct org_tree
{
    node *root;

    // 루트 노드 생성 함수
    static org_tree create_org_structure(const std::string &pos)
    {
        org_tree tree;
        tree.root = new node{pos, NULL, NULL};
        return tree;
    }

    // 조직도에서 부하 직원을 탐색하는 함수.
    // 상사의 직책 이름과 부하 직원의 직책 이름을 인자로 받으며, 이 중 상사의 직책은 이미 트리에 존재한다.
    static node *find(node *root, const std::string &value)
    {
        if (root == NULL)
        {
            return NULL;
        }

        if (root->position == value)
        {
            return root;
        }

        auto firstFound = org_tree::find(root->first, value);

        if (firstFound != NULL)
        {
            return firstFound;
        }

        return org_tree::find(root->second, value);
    }

    // 새로운 원소(부하 직원)을 추가하는 삽입 함수 => find() 함수 활용
    // 부하 직원을 정상적으로 삽입한다면 true를 아니라면 false를 리턴
    bool addSubordinate(const std::string &manager, const std::string &subordinate)
    {
        auto managerNode = org_tree::find(root, manager);

        // 해당 매니져의 노드가 없는 경우
        if (!managerNode)
        {
            std::cout << manager << "을(를) 찾을 수 없습니다: " << std::endl;
            return false;
        }

        // 해당 매니저 노드에 부하 직원 2명이 모두 차 있는 경우
        if (managerNode->first && managerNode->second)
        {
            std::cout << manager << " 아래에 " << subordinate << "을(를) 추가할 수 없습니다." << std::endl;
            return false;
        }

        // 부하 직원을 추가할 수 있는 경우
        if (!managerNode->first)
        {
            managerNode->first = new node{subordinate, NULL, NULL};
        }
        else
        {
            managerNode->second = new node{subordinate, NULL, NULL};
        }

        std::cout << manager << " 아래에 " << subordinate << "을(를) 추가했습니다." << std::endl;

        return true;
    }
};
// 전위 순회
static void preOrder(node *start)
{
    if (!start)
        return;

    std::cout << start->position << ", ";
    preOrder(start->first);
    preOrder(start->second);
}

// 중위 순회
static void inOrder(node *start)
{
    if (!start)
        return;

    inOrder(start->first);
    std::cout << start->position << ", ";
    inOrder(start->second);
}

// 후위 순회
static void postOrder(node *start)
{
    if (!start)
        return;

    postOrder(start->first);
    postOrder(start->second);
    std::cout << start->position << ", ";
}
int main()
{
    auto tree = org_tree::create_org_structure("CEO");

    tree.addSubordinate("CEO", "부사장");
    tree.addSubordinate("부사장", "IT부장");
    tree.addSubordinate("부사장", "마케팅부장");
    tree.addSubordinate("IT부장", "보안팀장");
    tree.addSubordinate("IT부장", "웹개발팀장");
    tree.addSubordinate("마케팅부장", "물류팀장");
    tree.addSubordinate("마케팅부장", "홍보팀장");
    tree.addSubordinate("부사장", "재무부장");

    std::cout << "전위 순회: ";
    preOrder(tree.root);
    std::cout << std::endl;

    std::cout << "중위 순회: ";
    inOrder(tree.root);
    std::cout << std::endl;

    std::cout << "후위 순회: ";
    postOrder(tree.root);
    std::cout << std::endl;
}