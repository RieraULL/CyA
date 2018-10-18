# Práctica 2. Estrategia "Greedy"

El propósito de esta práctica es la compresión de la estrategia algortímica general *voraz* o *greedy* (véase [Brassard & Bratley (1997)](http://absysnetweb.bbtk.ull.es/cgi-bin/abnetopac?TITN=215732), capítulo 6). Con ese fin, se estudiará un algoritmo voraz para el conocido *Problema del Viajante de Comercio*, o *Traveling Salesman Problem* ([TSP](https://en.wikipedia.org/wiki/Travelling_salesman_problem)). Este algoritmo, conocido como *Algoritmo del Vecino más Próximo* o *Nearest Neighbour Algorithm* (NN) viene descrito en el siguiente sitio web https://en.wikipedia.org/wiki/Nearest_neighbour_algorithm.

El trabajo constará de las siguientes fases:

* Fase 1 (5 puntos). Compresión del [código](https://github.com/RieraULL/CyA/tree/master/P1) proporcionado. En concreto debe entenderse el fichero [greedy_t.cpp](https://github.com/RieraULL/CyA/blob/master/P1/src/greedy_t.cpp), cuya fichero cabecera es [greedy_t.hpp](https://github.com/RieraULL/CyA/blob/master/P1/include/greedy_t.hpp), y más específicamente la función 

```cpp
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
```
Esta función recoge la esencia de la estrategia voraz. No obstante, comprender este fichero será el primer desafío al que nos enfrentaremos en esta práctica, ya que incluye clases con las que aún no estamos familiarizados. En concreto se hace referencia a clases de la biblioteca [STL](https://en.wikipedia.org/wiki/Standard_Template_Library). Podemos encontrar referencias a la clase [vector](http://www.cplusplus.com/reference/vector/vector/), o a la clase [set](http://www.cplusplus.com/reference/set/set/).

La fase 1 se supera comentando el código de este procedimiento indicando qué hace cada linea, y estableciendo una relación entre el código y la estructura general de un algoritmo voraz.

* Fase 2 (3 puntos). Llevar a cabo una modificación del código propuesta por el profesor de forma satisfactoria.
* Fase 3 (2 puntos). Llevar a cabo una segunda modificación del código propupesta por el profesor de forma satisfactoria.





