#include <cstdio>
#include <iostream>
#include <vector>

#include "point_t.hpp"
#include "sky_t.hpp"
#include "greedy_t.hpp"

//A good code is like a good joke: it doesn't need to be explained with comments

using namespace std;


int main(void)
{
    CyA::sky_t sky;
    
    sky.generate(1000, 1000, 600);
    
    cout << sky << endl;
    
    CyA::greedy_t G(sky);
    
    vector<CyA::point_t> sequence;
    
    cout << G.NN(sequence) << endl;
    
    return 0;
}