#include "sky_t.hpp"

namespace CyA
{
        void sky_t::write(ostream& os) const
        {
            os << "NAME: CyA"<< size() << endl; 
            os << "TYPE: TSP" << endl;
            os << "COMMENT: Testing problem from CyA of " << size() << "-city TSP" << endl;
            os << "DIMENSION: " << size() << endl;
            os << "EDGE_WEIGHT_TYPE: EUC_2D" << endl;
            os << "DISPLAY_DATA_TYPE: COORD_DISPLAY" << endl;
            os << "NODE_COORD_SECTION" << endl;

            const int sz = size();
            
            for(int i = 0; i < sz; i++)
                os << setw(4) << i + 1 << " " << at(i) << endl;

            os << "EOF" << endl;
        }
        
        void sky_t::generate(int x_sz, int y_sz, int sz)
        {
            default_random_engine generator(1);
            uniform_real_distribution<double> distribution_x(0, x_sz);
            uniform_real_distribution<double> distribution_y(0, y_sz);  
            
            clear();
            
            for(int i = 0; i < sz; i++) {
                
                const double x = distribution_x(generator);
                const double y = distribution_y(generator);
                
                push_back(point_t(x, y));
            }
        }
}

ostream& operator<<(ostream& os, const CyA::sky_t& a)
{
    a.write(os);
    return os;
}