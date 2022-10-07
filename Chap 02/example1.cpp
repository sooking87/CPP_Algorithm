#include <iostream>
#include <queue>

// if : �� ������ �ִ� �θ��� ���� ������ �Ŵ��� �� �ִ�. = ���� Ʈ�� ����

struct node
{
    std::string position;
    node *first;
    node *second;
};

struct org_tree
{
    node *root;

    // ��Ʈ ��� ���� �Լ�
    static org_tree create_org_structure(const std::string &pos)
    {
        org_tree tree;
        tree.root = new node{pos, NULL, NULL};
        return tree;
    }

    // ���������� ���� ������ Ž���ϴ� �Լ�.
    // ����� ��å �̸��� ���� ������ ��å �̸��� ���ڷ� ������, �� �� ����� ��å�� �̹� Ʈ���� �����Ѵ�.
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

    // ���ο� ����(���� ����)�� �߰��ϴ� ���� �Լ� => find() �Լ� Ȱ��
    // ���� ������ ���������� �����Ѵٸ� true�� �ƴ϶�� false�� ����
    bool addSubordinate(const std::string &manager, const std::string &subordinate)
    {
        auto managerNode = org_tree::find(root, manager);

        // �ش� �Ŵ����� ��尡 ���� ���
        if (!managerNode)
        {
            std::cout << manager << "��(��) ã�� �� �����ϴ�: " << std::endl;
            return false;
        }

        // �ش� �Ŵ��� ��忡 ���� ���� 2���� ��� �� �ִ� ���
        if (managerNode->first && managerNode->second)
        {
            std::cout << manager << " �Ʒ��� " << subordinate << "��(��) �߰��� �� �����ϴ�." << std::endl;
            return false;
        }

        // ���� ������ �߰��� �� �ִ� ���
        if (!managerNode->first)
        {
            managerNode->first = new node{subordinate, NULL, NULL};
        }
        else
        {
            managerNode->second = new node{subordinate, NULL, NULL};
        }

        std::cout << manager << " �Ʒ��� " << subordinate << "��(��) �߰��߽��ϴ�." << std::endl;

        return true;
    }
};
// ���� ��ȸ
static void preOrder(node *start)
{
    if (!start)
        return;

    std::cout << start->position << ", ";
    preOrder(start->first);
    preOrder(start->second);
}

// ���� ��ȸ
static void inOrder(node *start)
{
    if (!start)
        return;

    inOrder(start->first);
    std::cout << start->position << ", ";
    inOrder(start->second);
}

// ���� ��ȸ
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

    tree.addSubordinate("CEO", "�λ���");
    tree.addSubordinate("�λ���", "IT����");
    tree.addSubordinate("�λ���", "�����ú���");
    tree.addSubordinate("IT����", "��������");
    tree.addSubordinate("IT����", "����������");
    tree.addSubordinate("�����ú���", "��������");
    tree.addSubordinate("�����ú���", "ȫ������");
    tree.addSubordinate("�λ���", "�繫����");

    std::cout << "���� ��ȸ: ";
    preOrder(tree.root);
    std::cout << std::endl;

    std::cout << "���� ��ȸ: ";
    inOrder(tree.root);
    std::cout << std::endl;

    std::cout << "���� ��ȸ: ";
    postOrder(tree.root);
    std::cout << std::endl;
}