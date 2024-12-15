#ifndef CELDA_H
#define CELDA_H

#include <string>   

class Celda {
private:
    std::string content; // Contenido de la celda}

public:
    Celda();
    void setContent(const std::string& value);
    std::string getContent() const;
    double getNumericValue() const; // Convierte el contenido a número, si aplica
}
