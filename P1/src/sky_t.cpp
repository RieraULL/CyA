#include "sky_t.hpp"


namespace CyA
{
        void sky_t::read(istream& is)
        {
            int sz;
            is >> sz;
            
            resize(sz);
            
            for(int i = 0; i < sz; i++)
                is >> at(i);    
        }
        
        void sky_t::write(ostream& os) const
        {
            const int sz = size();
            os << sz << endl;
            
            for(int i = 0; i < sz; i++)
                os << at(i) << endl;
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

istream& operator>>(istream& is, CyA::sky_t& a)
{
    a.read(is);
    return is;
}

ostream& operator<<(ostream& os, const CyA::sky_t& a)
{
    a.write(os);
    return os;
}