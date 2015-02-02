#include "Sort.h"
#include <cmath>
#include <algorithm>
#include <queue>
#include <climits>

using namespace std;

namespace Sorting {

    Sort::Sort(const string& _name) : name(_name) {}

    Sort::~Sort() {}

    ostream& operator<<(ostream& out, const Sort& s) {
        return out << s.name;
    }







}
