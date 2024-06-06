#include <cstdlib>
#include <ctime>
#include <iostream>
#include "src/Veiculo.hpp"
#include "src/Caminhao.hpp"
#include "src/Van.hpp"
#include <vector>
using namespace std;


int main(){

    vector<Veiculo*> veiculo;
    veiculo.push_back(new Caminhao("ford","naoentendodecaminhao",12,2));
    veiculo.push_back(new Caminhao("fiat","modelodecaminhaogenerico",13,5));
    veiculo.push_back(new Van("mercedes","tambemnaoentendodevan",12,12));
    veiculo.push_back(new Van("Mitsubishi","modelodevangenerico",15,37));
    veiculo.push_back(new Van("Volksvagen","seila",5,20));
    veiculo.push_back(new Caminhao("Pedro","b11",50,10));

    for(int i=0;i<veiculo.size();i++){
        veiculo[i]->exibirDados();
    }
}