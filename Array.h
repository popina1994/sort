#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <iostream>
#include <vector>
#include <string>
#include "Sort.h"
#include "InsertionSort.h"

using namespace std;

namespace Sorting {

    class Array {
        int* x;
        int n;
        Sort* sort;

        void Move(Array& a);
        void Copy(const Array& a);
        void Delete();
    public:
        explicit Array(int _n = 0, const Sort& s = InsertionSort());
        Array(const Array& a);
        Array(Array&& a);
        ~Array();
        Array& operator=(const Array& a);
        Array& operator=(Array&& a);

        void Generate(int, int); // generates values of array from low to high
        void SortArray(); // sorts array
        friend ostream& operator<<(ostream& out, const Array&); // print out array
    };

}
#endif // _ARRAY_H_
