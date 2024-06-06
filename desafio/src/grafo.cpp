#include "grafo.hpp"
#include <vector>
#include <iostream>

using namespace std;

int Grafo :: CheckVizinhos(int vert1, int vert2, vector<vector<int>> matriz){
    if(matriz[vert1][vert2] == 1){
        cout<<"São vizinhos" << endl;
    }else{
        cout<<"Não são vizinhos" << endl;
    }
    return 0;
}

int Grafo :: listVertex(int vertex, int columns, vector<vector<int>> matriz){
    cout<<"Os vértices vizinhos de " << vertex<<" são: "<< endl;
    for(int i = 0; i < columns; i++){
        if(matriz[vertex-1][i] == 1){
        cout<< i+1 <<endl;
        }
    }
    return 0;
}