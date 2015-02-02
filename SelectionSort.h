#ifndef _SELECTION_SORT_H_
#define _SELECTION_SORT_H_

#include "Sort.h"

namespace Sorting {
    class SelectionSort : public Sort {
    public:
        explicit SelectionSort();
        SelectionSort* PolyCopy() const override;
        void SortArr(int*, int) override;
    };

}

#endif // _SELECTION_SORT_H_
