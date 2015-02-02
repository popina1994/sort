#ifndef _BINARY_TREE_SORT_H_
#define _BINARY_TREE_SORT_H_

#include "Sort.h"

namespace Sorting {

    class BinaryTreeSort : public Sort {
        struct Node {
            int info;
            Node* left,* right,* parent;
            Node(int _info);
        };
        Node* root;
        static Node* Min(Node*);
        static Node* Succ(Node*);
    public:

        explicit BinaryTreeSort();
        ~BinaryTreeSort();

        BinaryTreeSort(const BinaryTreeSort&) = delete;
        BinaryTreeSort(BinaryTreeSort&&) = delete;
        BinaryTreeSort& operator=(const BinaryTreeSort&) = delete;
        BinaryTreeSort& operator=(BinaryTreeSort&&) = delete;

        void Insert(int key);

        void SortArr(int*, int) override;
        BinaryTreeSort* PolyCopy() const override;
    };

}

#endif // _BIN
