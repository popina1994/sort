#include "BinaryTreeSort.h"

#include <queue>

using namespace std;

namespace Sorting {

    BinaryTreeSort::Node::Node(int _info) : info(_info), left(nullptr), right(nullptr), parent(nullptr) {}

    BinaryTreeSort::BinaryTreeSort() : Sort("Сортирање уз помоћ бинарног стабла"), root(nullptr) {}

    BinaryTreeSort::~BinaryTreeSort() {
        queue <Node*> q;

        if (root == nullptr)
            return;
        q.push(root);

        while (!q.empty()) {
            Node* top = q.front();
            if (top->left != nullptr)
                q.push(top->left);
            if (top->right != nullptr)
                q.push(top->right);
            q.pop();
            delete top;
        }
    }

    BinaryTreeSort::Node* BinaryTreeSort::Min(Node* node) {
        if (node == nullptr)
            return nullptr;

        while (node->left != nullptr)
            node = node->left;
        return node;
    }

    BinaryTreeSort::Node* BinaryTreeSort::Succ(Node* node) {
        Node* curNode = node;

        if (curNode == nullptr)
            return nullptr;

        if (curNode->right != nullptr)
            return Min(curNode->right);

        while (  (curNode->parent != nullptr) && (curNode->parent->right == curNode ) )
            curNode = curNode->parent;

        return curNode->parent;
    }

    void BinaryTreeSort::Insert(int key) {
        Node* newNode = new Node(key);

        if (root == nullptr)  { // empty Tree
            root = newNode;
            return;
        }
        Node* parent = nullptr,* curNode = root;

        while (curNode != nullptr) {
            parent = curNode;
            if (key < curNode->info)
                curNode = curNode->left;
            else
                curNode = curNode->right;
        }

        newNode->parent = parent;
        if (key < parent->info)
            parent->left = newNode;
        else
            parent->right = newNode;
    }

    BinaryTreeSort* BinaryTreeSort::PolyCopy() const {
        return new BinaryTreeSort;
    }

    void BinaryTreeSort::SortArr(int* x, int n)  {
        for (int i = 0; i < n; i ++)
            Insert(x[i]);
        Node* curNode = Min(root);
        for (int i = 0; i < n; i ++) {
            x[i] = curNode->info;
            curNode = Succ(curNode);
        }
    }

}
