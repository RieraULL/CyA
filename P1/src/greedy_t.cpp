#include "greedy_t.hpp"

#include "point_t.hpp"

#include <set>


namespace CyA {

double greedy_t::NN(vector<point_t>& sequence)
{
    set<point_t> pending;
 
    for(const point_t& p: sky_)
        pending.insert(p);
    
    point_t last = sky_[0];
    
    pending.erase(last);
    sequence.push_back(last);     
    
    double tour_length = 0;
    
    do {
        point_t best_point    = *pending.begin();
        double  best_distance = last.distance(best_point);  
        
        for(const point_t& current: pending) {
            
            const double current_distance = last.distance(current);
            
            if (current_distance < best_distance) {
                
                best_distance = current_distance;
                best_point    = current;
            }
        }
        
        tour_length += best_distance;
        
        last = best_point;
        
        pending.erase(last);
        sequence.push_back(last);             

    } while(!pending.empty());
    
    tour_length += last.distance(sequence[0]);
    
    return tour_length;
} 

}