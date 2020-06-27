/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//* 22.333.444-PEREZ_DEL_RIO,JuanManuel-(07-2299) *//**/
/**//**   DEBE MODIFICAR LA LÍNEA DE COMENTARIO ANTERIOR CON SUS DATOS   **//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
/**//**//**   DESARROOLLE LAS "FUNCIONES MIEMBRO" DE LA CLASE    **//**//**//**/

#include "Prisma.h"

using namespace std;

//Prisma::Prisma()
//{
//    this->color.assign("Incoloro");
//    this->alto = 1;
//    this->ancho = 1;
//    this->profundidad = 1;
//}
//
//Prisma::Prisma(const string& color = "Incoloro", int alto = 1, int ancho = 1)
//{
//    this->color.assign(color);
//    this->alto = alto;
//    this->ancho = ancho;
//}

Prisma::Prisma(const string& color, int alto, int ancho, int profundidad)
{
    this->color.assign(color);
    this->alto = alto;
    this->ancho = ancho;
    this->profundidad = profundidad;
}

Prisma Prisma::operator ++(int)
{
    const Prisma p(*this);
    ++(this->alto);
    ++(this->ancho);
    ++(this->profundidad);
    return p;
}

Prisma& Prisma::operator --()
{
    this->alto--;
    this->ancho--;
    this->profundidad--;
    return *this;
}

Prisma operator *(int mult, const Prisma& p)
{
    return Prisma(p.color, p.alto * mult, p.ancho * mult, p.profundidad * mult);
}

ostream& operator <<(ostream& sal, const Prisma& p)
{
    return sal << p.alto << "x" << p.ancho << "x" << p.profundidad << "-" << p.color;
}
//
//string Prisma::getColor() const
//{
//    return this->color;
//}
//
//int Prisma::getAlto() const
//{
//    return this->alto;
//}
//
//int Prisma::getAncho() const
//{
//    return this->ancho;
//}
//
//int Prisma::getProfundidad() const
//{
//    return this->profundidad;
//}
