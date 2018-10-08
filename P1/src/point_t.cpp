#include "point_t.hpp"


istream& operator>>(istream& is, CyA::point_t& a)
{
    a.read(is);
    return is;
}

ostream& operator<<(ostream& os, const CyA::point_t& a)
{
    a.write(os);
    return os;
}