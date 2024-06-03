#include <iostream>
#include <iomanip>
#include "Cliente.h"
#include "Veiculo.h"
#include "GerenciadorVeiculos.h"
#pragma once

using namespace std;

class Pedido {

    private:
        static int numeroDoPedidoGeral;
        int numeroDoPedido;
        Cliente* cliente;
        GerenciadorVeiculos* veiculos;
        double localDeEntregaLatitude;
        double localDeEntregaLongitude;
        int pesoDaCarga;
        int volumeDaCarga;
        string enderecoColeta;
        string enderecoEntrega;
        string prioridade;

    public:
        Pedido();
        Pedido (Cliente* cliente, int pesoDaCarga, double localDeEntregaLatitude, double localDeEntregaLongitude);
        ~Pedido();

        int setNumeroDoPedido();
        int setCliente(Cliente* cliente);
        int setVeiculo(Veiculo* veiculo);
        int setLocalDeEntregaLatitude(double localDeEntregaLatitude);
        int setLocalDeEntregaLongitude(double localDeEntregaLongitude);
        int setPesoDaCarga(int pesoDaCarga);
        int setVolumeDaCarga(int volumeDaCarga);
        int setEnderecoColeta(string coleta);
        int setEnderecoEntrega(string entrega);
        int setPrioridade(string prioridade);

        int getNumeroDoPedido();
        Cliente* getPessoa();
        GerenciadorVeiculos* getVeiculos();
        double getLocalDeEntregaLatitude();
        double getLocalDeEntregaLongitude();
        int getPesoDaCarga();
        int getVolumeDaCarga();
        string getEnderecoColeta();
        string getEnderecoEntrega();
        string getPrioridade();

        friend ostream& operator<<(ostream& out, Pedido *pedido);
};
