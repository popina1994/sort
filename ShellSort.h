#ifndef _SHELL_SORT_H_
#define _SHELL_SORT_H_

#include "Sort.h"

namespace Sorting {

    class ShellSort : public Sort {
        void MakeIncrementArray(vector<int>&, int n) const;
    public:
        explicit ShellSort();
        ShellSort* PolyCopy() const override;
        void SortArr(int*, int) override;
    };

}

#endif // _SHELL_SORT_H_
