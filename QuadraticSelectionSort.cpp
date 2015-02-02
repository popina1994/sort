#include "QuadraticSelectionSort.h"

#include <cmath>
#include <queue>

using namespace std;

namespace Sorting {

    QuadraticSelectionSort::QuadraticSelectionSort() : Sort("Директна квадратна селекција") {}

    QuadraticSelectionSort* QuadraticSelectionSort::PolyCopy() const {
        return new QuadraticSelectionSort(*this);
    }

    void QuadraticSelectionSort::SortArr(int* x, int n) {
        int upSqrt = ceil(sqrt(n));
        priority_queue<int, vector<int>, greater<int> > q[upSqrt];

        for (int i = 0; i < upSqrt; i++)
            for (int j = 0; j < upSqrt; j++) {
                if (i * upSqrt + j >= n ) break; // out of bounds
                q[i].push(x[i*upSqrt + j]);
            }

        for (int i = 0; i < n; i ++) {

            int idx = 0;
            while (q[idx].empty()) idx++;
            int min = q[idx].top(), pos = idx;

            for (int j = idx + 1; j < upSqrt; j++)
                if ( (!q[j].empty()) && (q[j].top() < min) ) {
                    min = q[j].top();
                    pos = j;
                }
            q[pos].pop();
            x[i] = min;
        }
    }

}
