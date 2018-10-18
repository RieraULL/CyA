#include "sorted_vector_t.hpp"

#include <climits>
#include <iomanip>

namespace CyA
{

void sorted_vector_t::merge_sort(void)
{
    merge_sort(0, size() - 1);
}

void sorted_vector_t::write(ostream& os) const
{
    const int sz = size();

    os << "< ";
    for(int i = 0; i < sz; i++)
        os << setw(5) << at(i);
    os << "> ";
}


void sorted_vector_t::merge_sort(int l, int r)
{
    if (l < r) {
        
        int c = (l + r) / 2;

        merge_sort(l, c);

        merge_sort(c + 1, r);

        merge(l, c, r);
    }
}


////////////////////////////////////////////////////////////////////////////
// FUSIÓN CON CENTINELA
////////////////////////////////////////////////////////////////////////////

void sorted_vector_t::create_vector_sentinel(int l, int r, vector<int>& v)
{
    v.clear();

    for(int i = l; i <= r; i ++)
        v.push_back(at(i));

    v.push_back(INT_MAX);
}

void sorted_vector_t::merge(int l, int c, int d)
{
    vector<int> v1;
    vector<int> v2;

    create_vector_sentinel(l, c, v1);
    create_vector_sentinel(c + 1, d, v2);

    merge(v1, v2, l);
}

void sorted_vector_t::merge(const vector<int>& v1, const vector<int>& v2, int l)
{
    const int sz = v1.size() + v2.size() - 2;

    int inx1 = 0;
    int inx2 = 0;

    for(int i = 0; i < sz; i++)

        if (v1[inx1] < v2[inx2]) {

            at(l + i) = v1[inx1];
            inx1 ++;
        } else {

            at(l + i) = v2[inx2];
            inx2 ++;
        }
}

////////////////////////////////////////////////////////////////////////////

}


ostream& operator<<(ostream& os, const CyA::sorted_vector_t& v)
{
    v.write(os);
    return os;
}
