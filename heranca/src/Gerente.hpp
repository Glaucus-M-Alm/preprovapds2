#ifndef GERENTE
#define GERENTE
#include <string>
#include "Funcionario.hpp"
using std::string;

class Gerente: public Funcionario{
    private:
        double bonus;
    public:
    double calcularSalarioTotal() override;
    Gerente(string nome,int id,double salarioBase,double bonus);
};
#endif