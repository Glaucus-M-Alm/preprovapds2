#include "Gerente.hpp"
#include <iostream>
#include <string>
using std::string;
Gerente::Gerente(string nome, int id, double salarioBase, double bonus):Funcionario(nome, id, salarioBase), bonus(bonus){

}
double Gerente::calcularSalarioTotal(){
    return salarioBase + bonus;
}