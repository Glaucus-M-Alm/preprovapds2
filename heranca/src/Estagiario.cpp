#include "Estagiario.hpp"
#include <iostream>
#include <string>
using std::string;
Estagiario::Estagiario(string nome, int id, double salarioBase):Funcionario(nome, id, salarioBase){

}
double Estagiario::calcularSalarioTotal(){
    return salarioBase*reducao;
}