#ifndef ESTAGIARIO
#define ESTAGIARIO
#include <string>
#include "Funcionario.hpp"
using std::string;

class Estagiario: public Funcionario{
    private:
        double reducao=0.6; //fração do salário base que o estagiário irá receber
    public:
    double calcularSalarioTotal() override;
    Estagiario(string nome,int id,double salarioBase);
};
#endif