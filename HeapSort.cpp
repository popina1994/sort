#include "HeapSort.h"
#include "Sort.h"

#include <vector>
#include <algorithm>

using namespace std;

namespace Sorting {
    HeapSort::HeapSort() : Sort("Хип сортирање") {}

    HeapSort* HeapSort::PolyCopy() const {
        return new HeapSort(*this);
    }

    void HeapSort::MaxHeapify(int* x, int idx, int n) {
        while (true) {
            int largestIdx = idx, left = 2 * idx + 1, right = 2 * idx + 2;

            if ( (left < n) && (x[left] > x[largestIdx]) )
                largestIdx = left;
            if ( (right < n) && (x[right] > x[largestIdx]) )
                largestIdx = right;
            if (largestIdx != idx) {
                swap(x[idx], x[largestIdx]);
                idx = largestIdx;
            }
            else break;
        }
    }

    void HeapSort::MakeHeap(int* x, int n) {
        for (int idx = n / 2; idx >= 0; idx--)
            MaxHeapify(x, idx, n);
    }

    void HeapSort::SortArr(int* x, int n) {
        MakeHeap(x, n);

        for (int idx = 0; idx < n; idx ++) {
            swap(x[n - idx - 1], x[0]);
            MaxHeapify(x, 0, n - idx - 1);
        }
    }
}
