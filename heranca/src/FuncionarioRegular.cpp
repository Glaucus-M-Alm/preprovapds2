#include "FuncionarioRegular.hpp"
#include <iostream>
#include <string>
using std::string;
FuncionarioRegular::FuncionarioRegular(string nome, int id, double salarioBase):Funcionario(nome,id,salarioBase){

}
double calcularSalarioTotal(double salarioBase){
    return salarioBase;
}