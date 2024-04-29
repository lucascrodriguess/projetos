#include "Dados.h"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>

Dados::Dados(){};
Dados::~Dados(){};

void Dados::LerArquivoCSV(const std::string arquivo) {
    std::ifstream file(arquivo);
    if(!file.is_open()) {
        throw std::runtime_error("Erro ao abrir o arquivo ");
        return;
    }
    std::string linha;
    while(!file.eof()) {
        file.getline(file, linha);
    }
    file.close();
}