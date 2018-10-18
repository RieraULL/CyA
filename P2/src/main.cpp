#include <cstdio>
#include <iostream>
#include <fstream>
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
    
    ofstream os("CyA.tsp");

    os << sky << endl;

    os.close();
    
    CyA::greedy_t G(sky);
    
    vector<CyA::point_t> sequence;
    
    cout << "Neareas Neighbor: " << G.NN(sequence) << endl;
    cout << endl;
    
    return 0;
}