#include <iostream>
#include <cmath>
#include <iomanip>
#include "utilidad.h"
#include "hojaCalculo.h"
using namespace std;

//constructor
HojaCalculo::HojaCalculo(int fila, int columnas)
            :red(fila, vector<Celda>(columna)){}

//asigando el contenido a las celda
void HojaCalculo::EstablecerContenidoCelda(int fila, int columna, const string& valor)
{
    if(fila >= 0 && columna >= 0 && fila < red.size() && columna < red[0].size())
    {
        return red[fila][columna].EstablecerContenido(valor);
    }
}

//obteniendo el contenido de la celda (cuerpo)
string HojaCalculo::ObtenerContenidoCelda(int fila, int columna) const
{
    if(fila >= 0 && columna >= 0 && fila < red.size() && columna < red[0].size())
    {
        return red[fila][columna].ObtenerContenido();
    }
    return "";
}

//obteniendo el valor numero de una celda
auto HojaCalculo::ObtenerValorCelda(int fila, int columna) const
{
    string contenido = ObtenerContenidoCelda(fila, columna);
    if(!contendio.empty() && contenido[0] == '=')
    {
        return EvaluarExpresion(contenido.substr(1));// quitamos el '='
    }

    //en el caso no sea formula, intentar convertirlo a numero
    return utilidad::
}

