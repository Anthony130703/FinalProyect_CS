#include "Celda.h"
#include <stdexcept>
#include <cstdlib>

Celda::Celda() : content("") {}

void Celda::setContent(const std::string& value) {
    content = value;
}

std::string Celda::getContent() const {
    return content;
}

double Celda::getNumericValue() const{
    try{
        return std::stod(content);
    } catch( const std::invalid_argument&) {
        return 0.0;// si no es un número, retorna a 0   
    }
}