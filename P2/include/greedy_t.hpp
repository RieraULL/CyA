#pragma once

#include "sky_t.hpp"
#include "point_t.hpp"

#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

namespace CyA
{
    
class greedy_t
{
    private:
        const sky_t& sky_;

    public:
        greedy_t(const sky_t& sky):
        sky_(sky) {}
    
        ~greedy_t(void) {}
    
        double NN(vector<point_t>& sequence);
        
        void write(ostream& os);
};



}
