#include "src/grafo.hpp"
#include <vector>
#include <iostream>

using namespace std;

int main(){

    Grafo matriz;
    matriz.init = {{0,1,0,0,1},{1,0,1,1,1},{0,1,0,1,0},{0,1,1,0,1},{1,1,0,1,0}};

    matriz.CheckVizinhos(3,5,matriz.init);
    matriz.CheckVizinhos(3,6,matriz.init);
    matriz.CheckVizinhos(3,4,matriz.init);
    matriz.CheckVizinhos(3,2,matriz.init);
    matriz.listVertex(3,5, matriz.init);
}