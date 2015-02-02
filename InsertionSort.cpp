#include "InsertionSort.h"

namespace Sorting {

    InsertionSort::InsertionSort() : Sort("Сортирање уметањем") {}

    InsertionSort* InsertionSort::PolyCopy() const {
        return new InsertionSort(*this);
    }

    void InsertionSort::SortArr(int* x, int n) {
        for (int idx = 1; idx < n; idx ++) {
            int key = x[idx], j;
            for (j = idx; j >= 1; j --)
                if (x[j - 1] > key)
                    x[j] = x[j - 1];
                else
                    break;
            x[j] = key;
        }
    }

}
