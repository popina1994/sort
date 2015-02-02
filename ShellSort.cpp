#include "ShellSort.h"

#include <cmath>

using namespace std;

namespace Sorting {

    ShellSort::ShellSort() : Sort("Шелов сорт") {}

    ShellSort* ShellSort::PolyCopy() const {
        return new ShellSort(*this);
    }

    void ShellSort::MakeIncrementArray(vector<int>& v, int n) const {
        int t = ceil(log(n) / log(3)) + 1, curVal = 1;

        for (int i = 0; i < t; i ++) {
            v.push_back(curVal);
            curVal = 3 * curVal + 1;
        }
    }

    void ShellSort::SortArr(int* x, int n) {
        vector<int> v;
        MakeIncrementArray(v, n);

        for (int incIdx = v.size() - 1; incIdx >= 0; incIdx --) {
            int inc = v[incIdx];
            for (int i = inc; i < n; i ++) {
                int key = x[i], j = i;
                while (j - inc >= 0) {
                    if (x[j - inc] > key)
                        x[j] = x[j - inc];
                    else break;
                    j -= inc;
                }
                x[j] = key;
            }
        }
    }
}
