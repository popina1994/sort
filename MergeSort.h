#ifndef _MERGE_SORT_H_
#define _MERGE_SORT_H_

#include "Sort.h"

namespace Sorting {
    class MergeSort : public Sort {
        static void MergeSortRec(int* x, int low, int high);
        static void Merge(int* x, int low, int pivot, int high);
        // returns minimum of two sorted arrays from idxLow to pivot and for idxHigh to high
        static int MinArr(int* x, int low, int pivot, int high, int& idxLow, int& idxHigh);
    public:
        explicit MergeSort();
        MergeSort* PolyCopy() const override;
        void SortArr(int*, int) override;

    };
}
#endif // _MERGE_SORT_H_
