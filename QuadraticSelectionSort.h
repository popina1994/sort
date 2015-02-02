#ifndef _QUADRATIC_SELECTION_SORT_H_
#define _QUADRATIC_SELECTION_SORT_H_

#include "Sort.h"

namespace Sorting {

    class QuadraticSelectionSort : public Sort {
    public:
        explicit QuadraticSelectionSort();
        QuadraticSelectionSort* PolyCopy() const override;
        void SortArr(int*, int) override;
    };

}

#endif // _QUADRATIC_SELECTION_SORT_H_
