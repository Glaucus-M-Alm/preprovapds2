#ifndef GRAFO
#define GRAFO
#include <vector>

using namespace std;

class Grafo{
    private:
        int rows;
        int columns;
    public:
        vector<vector<int>> init;
        int CheckVizinhos(int vertex1, int vertex2, vector<vector<int>> matriz);
        int listVertex(int vertex, int columns, vector<vector<int>> matriz);
};

#endif