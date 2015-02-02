#include "SelectionSort.h"

namespace Sorting {

    SelectionSort::SelectionSort() : Sort("Директна селекција") {}

    SelectionSort* SelectionSort::PolyCopy() const {
        return new SelectionSort(*this);
    }

    void SelectionSort::SortArr(int* x, int n) {
        for (int i = 0; i < n - 1; i ++) {
            int min = x[i], pos = i;
            for (int j = i + 1; j < n; j ++)
                if (x[j] < min) {
                    min = x[j];
                    pos = j;
                }
            swap(x[pos], x[i]);
        }
    }
}
