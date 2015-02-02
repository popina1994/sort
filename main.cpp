#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Array.h"
#include "InsertionSort.h"
#include "ShellSort.h"
#include "SelectionSort.h"
#include "QuadraticSelectionSort.h"
#include "BinaryTreeSort.h"
#include "HeapSort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "MergeSort.h"

using namespace std;
using namespace Sorting;

constexpr int LENGTH = 10000;
constexpr bool DEBUG = false;


const Sort* ArraySorts[] = { new ShellSort(), new QuickSort(), new MergeSort(), new InsertionSort(), new SelectionSort(),
                            new BinaryTreeSort(), new HeapSort(), new BubbleSort(), new QuadraticSelectionSort()};

int main() {



    for (unsigned int i = 0; i < sizeof(ArraySorts) / sizeof(ArraySorts[0]); i++) {
        Array a(LENGTH, *ArraySorts[i]);
        cout << *ArraySorts[i] << endl;
        a.Generate(0, LENGTH);

        clock_t tBegin = clock();
        a.SortArray();
        clock_t tEnd = clock();

        cout << "Утрошено време" << static_cast<double>(tEnd - tBegin) / CLOCKS_PER_SEC << endl;
        cout << endl;
        if (DEBUG)
            cout << a;
        delete ArraySorts[i]; // mrzelo me da kucam izvan for
    }

    return 0;
}
