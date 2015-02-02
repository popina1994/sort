#include "MergeSort.h"

namespace Sorting {
    MergeSort::MergeSort() : Sort("Сортирање уметањем") {}

    MergeSort* MergeSort::PolyCopy() const {
        return new MergeSort(*this);
    }

    int MergeSort::MinArr(int* x, int low, int pivot, int high, int& idxLow, int& idxHigh) {
        if (idxLow > pivot)
            return x[idxHigh++];
        if (idxHigh > high)
            return x[idxLow++];
        if (x[idxLow] < x[idxHigh])
            return x[idxLow++];
        return x[idxHigh++];
    }

    void MergeSort::Merge(int* x, int low, int pivot, int high) {
        int yLen = high - low + 1, idxLow = low, idxHigh = pivot + 1;
        int* y = new int[yLen];

        for (int i = 0; i < yLen; i++)
            y[i] = MinArr(x, low, pivot, high, idxLow, idxHigh);
        for (int i = 0; i < yLen; i++)
            x[low + i] = y[i];
        delete [] y;
    }

    void MergeSort::MergeSortRec(int* x, int low, int high) {
        if (low < high) {
            int pivot = (low + high) / 2;
            MergeSortRec(x, low, pivot);
            MergeSortRec(x, pivot + 1, high);
            Merge(x, low, pivot, high);
        }
    }



    void MergeSort::SortArr(int* x, int n) {
        MergeSortRec(x, 0, n - 1);
    }
}
