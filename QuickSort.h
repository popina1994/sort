#ifndef _QUICK_SORT_H_
#define _QUICK_SORT_H_

#include "Sort.h"

namespace Sorting {

    class QuickSort : public Sort {
        int Partition(int* x, int low, int high);
        void QuickSortIn(int* x, int low, int high);
    public:
        explicit QuickSort();
        QuickSort* PolyCopy() const override;
        void SortArr(int*, int) override;
    };
}

#endif // _QUICK_SORT_H_
