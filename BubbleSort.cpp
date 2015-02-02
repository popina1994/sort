#include "BubbleSort.h"

#include <algorithm>

using namespace std;

namespace Sorting {
    BubbleSort::BubbleSort() : Sort("Сортирање директном заменом") {}

    BubbleSort* BubbleSort::PolyCopy() const {
        return new BubbleSort(*this);
    }

    void BubbleSort::SortArr(int* x, int n) {
        int pos, bound = n - 1;
        bool change = false;

        for (int i = 0; i < bound; i ++)
            if (x[i] > x[i + 1]) {
                swap(x[i], x[i+1]);
                change = true;
                pos = i;
            }

        while (change) {
            bound = pos;
            change = false;
            for (int i = 0; i < bound; i ++)
                if (x[i] > x[i + 1]) {
                    swap(x[i], x[i+1]);
                    change = true;
                    pos = i;
                }
        }

    }
}
