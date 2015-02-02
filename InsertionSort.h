#ifndef _INSERTION_SORT_H_
#define _INSERTION_SORT_H_

#include "Sort.h"

namespace Sorting {

    class InsertionSort : public Sort {
    public:
        explicit InsertionSort();
        InsertionSort* PolyCopy() const override;
        void SortArr(int*, int) override;
    };

}

#endif // _INSERTION_SORT_H_
