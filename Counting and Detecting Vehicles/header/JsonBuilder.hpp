/*
 * JsonBuilder.hpp
 *
 * @Author: Alonso Loaiza Pereira
 * @e-mail: hiyitsu@gmail.com
 * @University: Instituto Tecnologico de Costa Rica (TEC)
 *
 * @Description:
 * Clase encargada de almacenar la informacion (Simple POJO) de un reporte la cual contiene una lista con
 * los registros de los vehiculos que pasaron por la estructura, ademas de otros datos como fecha de inicio
 * del reporte y fecha final, humedad, temperatura y luminosidad.
 */

//Bibliotecas
#include <string>				//Manejo de string
#include <ctime>				//Manejo de Dates (time_t)
#include <vector>				//Manejo de listas
#include <sstream>				//Conversion de valores numericos (float e int)
#include "Reporte.hpp"			//Reporte
#include "RegistroVehiculo.hpp"	//Registro de Vehiculo

//Especificacion de Namespace
using std::string;
using std::ostringstream;
using std::time_t;
using std::vector;

#ifndef JSONBUILDER_HPP_
#define JSONBUILDER_HPP_

class JsonBuilder
{
public:

	//Constructor y Destructor
	JsonBuilder();
	virtual ~JsonBuilder();

	//Metodos
	string convertToJSON(Reporte rReporte);
	string convertToJSON(RegistroVehiculo rRegistro);

private:

	//Atributos
	ostringstream* mStringBuffer;	//String Buffer para conversion de valores numericos

	//Metodos
	string convertArray(vector<RegistroVehiculo> rRegistros);
	string convertDate(time_t rFecha);
	string convertFloat(float rValor);
	string convertInt(int rValor);
	string convertString(string rPalabra);
};

#endif /* JSONBUILDER_HPP_ */