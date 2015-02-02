#ifndef _BUBBLE_SORT_H_
#define _BUBBLE_SORT_H_

#include "Sort.h"

using namespace std;
namespace Sorting {
    class BubbleSort : public Sort {
    public:
        explicit BubbleSort();
        BubbleSort* PolyCopy() const override;
        void SortArr(int*, int) override;
    };
}

#endif // _BUBBLE_SORT_H_
