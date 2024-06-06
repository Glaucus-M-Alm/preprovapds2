#include <cstdlib>
#include <ctime>
#include <iostream>
#include "src/Estagiario.hpp"
#include "src/FuncionarioRegular.hpp"
#include "src/Gerente.hpp"
using std::cout;
using std::endl;

int main(){
    Funcionario* funcionario1 = new Estagiario("Patricia",007,1000);
    Funcionario* funcionario2 = new FuncionarioRegular("Tomas",005,1000);
    Funcionario* funcionario3 = new Gerente("Julia",003,1000,300);

    cout << "Salário total do Estagiario (" << funcionario1->calcularSalarioTotal() << "): R$" << funcionario1->calcularSalarioTotal() << endl;
    cout << "Salário total do Funcionário Regular (" << funcionario2->calcularSalarioTotal() << "): R$" << funcionario2->calcularSalarioTotal() << endl;
    cout << "Salário total do Gerente (" << funcionario3->calcularSalarioTotal() << "): R$" << funcionario3->calcularSalarioTotal() << endl;

    return 0;


}