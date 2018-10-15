#pragma once

#include <utility>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

namespace CyA {

class point_t: public pair<double, double>
{
public:
    point_t(void):
        pair<double, double>(0,0) {}

    point_t(double a, double b):
        pair<double, double>(a, b) {}
        
    virtual ~point_t(void) {}

    void write(ostream& os) const
    {
        os << setw(7) << fixed << setprecision(2) << first << " " << setw(7) << fixed << setprecision(2) << second;
    }
    
    void read(istream& is)
    {
        is >> first >> second;
    }
    
    inline const double get_x(void) const {return first;}
    inline const double get_y(void) const {return second;}
    
    inline double distance(const point_t& b)
    {
        return int(sqrt((first - b.first) * (first - b.first) + (second - b.second) * (second - b.second)) + 0.5);
    }
};

}


istream& operator>>(istream& is, CyA::point_t& a);

ostream& operator<<(ostream& os, const CyA::point_t& a);


