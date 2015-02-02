#ifndef _HEAP_SORT_H_
#define _HEAP_SORT_H_

#include "Sort.h"
#include <vector>

using namespace std;

namespace Sorting {
    class HeapSort : public Sort {
        static void MaxHeapify(int* x, int idx, int n);
        static void MakeHeap(int* x, int n);
    public:
        HeapSort();
        void SortArr(int*, int) override;
        HeapSort* PolyCopy() const override;
    };
}


#endif // _HEAP_SORT_H_




