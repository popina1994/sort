#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
#include "Array.h"

using namespace std;

namespace Sorting {

    void Array::Move(Array& a) {
        x = a.x;
        a.x = nullptr;
        n = a.n;
        a.n = 0;
        sort = a.sort;
        a.sort = nullptr;
    }
    void Array::Copy(const Array& a) {
        n = a.n;
        x = new int[n];
        for (int idx = 0; idx < n; idx ++)
            x[idx] = a.x[idx];
        sort = a.sort->PolyCopy();
    }
    void Array::Delete() {
        delete sort;
        delete [] x;
    }



    Array::Array(int _n, const Sort& s) : n(_n) {
        sort  = s.PolyCopy();
        x = new int[n];
    }

    Array::Array(const Array& a) {
        Copy(a);
    }

    Array::Array(Array&& a) {
        Move(a);
    }

    Array::~Array() {
        Delete();
    }

    Array& Array::operator=(const Array& a) {
        if (this != &a) {
            Delete();
            Copy(a);
        }
        return *this;
    }

    Array& Array::operator=(Array&& a) {
        if (this != &a) {
            Delete();
            Move(a);
        }
        return *this;
    }

    void Array::SortArray() {
        sort->SortArr(x, n);
    }

    void Array::Generate(int low, int high) {
        srand(static_cast<unsigned int>(time_t(nullptr)));
        for (int idx = 0; idx < n; idx ++)
            x[idx] = static_cast<int>((high - low) * (static_cast<double>(rand()) / RAND_MAX) + low);
    }


    ostream& operator<<(ostream& out, const Array& a) {
        out << *a.sort << endl;
        if (a.n == 0)
            out << "Празан";
        for (int idx = 0; idx < a.n; idx ++)
            out << a.x[idx] << " ";
        return out << endl;
    }

}
