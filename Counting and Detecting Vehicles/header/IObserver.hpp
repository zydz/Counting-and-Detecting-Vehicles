/*
 * IObserver.hpp
 *
 * @Author: Alonso Loaiza Pereira
 * @e-mail: hiyitsu@gmail.com
 * @University: Instituto Tecnologico de Costa Rica (TEC)
 *
 * @Description:
 * Clase abstracta es decir no puede ser inicializada, la cual funciona como una interfaz (como en Java)
 * la cual declara un metodo virtual notificarReporte el cual debe ser sobreescrito en la clase que herede
 * de esta clase. Cabe destacar que esta clase corresponde a una implementacion del patron de diseño
 * Observer and Observable.
 */

#ifndef IOBSERVER_HPP_
#define IOBSERVER_HPP_

//Bibliotecas
#include "Reporte.hpp"	//Clase Reporte

class IObserver
{
public:

	//Destructor
	virtual ~IObserver() {};

	//Metodos Abstractos
	virtual void notificarReporte(Reporte* rpReporte) = 0;
};

#endif /* IOBSERVER_HPP_ */
