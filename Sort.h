#ifndef _SORT_H_
#define _SORT_H_

#include <string>
#include <iostream>
#include <vector>

using namespace std;
namespace Sorting {
    class Sort {
        string name;
    public:
        explicit Sort(const string& _name);
        virtual ~Sort() = 0;
        virtual void SortArr(int*, int) = 0;
        virtual Sort* PolyCopy() const = 0;
        friend ostream& operator<<(ostream& out, const Sort&);
    };









}

#endif // _SORT_H_
