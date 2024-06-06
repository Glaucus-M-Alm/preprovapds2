#include "Funcionario.hpp"
#include <iostream>
#include <string>
using std::string;
Funcionario::Funcionario(string nome,int id,double salarioBase):nome(nome),id(id),salarioBase(salarioBase){

}
double Funcionario::calcularSalarioTotal(){
    return salarioBase;
}