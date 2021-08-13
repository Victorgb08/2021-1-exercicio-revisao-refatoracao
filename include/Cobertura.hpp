#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Imovel.hpp"
#include "Cliente.hpp"
using namespace std;

class Cobertura : public Imovel {
    
    public:

        double valor();

        double comissao();

        double comissaoCob = 0.10;

        void print();
    
};

#endif