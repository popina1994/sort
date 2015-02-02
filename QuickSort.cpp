#include <algorithm>
#include "QuickSort.h"

using namespace std;

namespace Sorting {
    QuickSort::QuickSort() : Sort("Брзо сортирање") {}
    QuickSort* QuickSort::PolyCopy() const {
        return new QuickSort(*this);
    }

    int QuickSort::Partition(int* x, int low, int high) {
        int pivot = x[low], i = low, j = high;

        while (i < j) {
            while ( (x[i] <= pivot) && (i <= j)) i ++;
            while (x[j] > pivot) j --;

            if (i < j)
                swap(x[i], x[j]);
        }

        swap(x[j], x[low]);
        return j;
    }

    void QuickSort::QuickSortIn(int* x, int low, int high) {
        if (low < high) {
            int pivotIdx = Partition(x, low, high);
            QuickSortIn(x, low, pivotIdx - 1);
            QuickSortIn(x, pivotIdx + 1, high);
        }
    }

    void QuickSort::SortArr(int* x, int n) {
        QuickSortIn(x, 0, n - 1);
    }
}
