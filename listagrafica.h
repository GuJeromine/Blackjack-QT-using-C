#ifndef LISTAGRAFICA_H
#define LISTAGRAFICA_H

#include <QFrame>
#include <QMouseEvent>
#include <vector>
#include <QPushButton>
#include <string>
#include "Baralho.h"

class ListaGrafica : public QFrame
{
    std::vector<Carta> Elementos;
    int Soma;
    int NumeroDaLista;
    static int NumeroDeListas;
    static int GanhadorDefinido;
    static int SomaLista1;
    static int SomaLista2;
    static int Turno;
    static int AuxiliarDeDesistencia;
    bool TemA;
    bool Desistiu;
    bool Ganhou;
public:
    ListaGrafica(QWidget* parent = nullptr);
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void resultMessage(std::string &s) const;
    int getSoma(){
        Soma;
    }
    int setSoma(int SomaArquivo){
        Soma = SomaArquivo;
    }
};

#endif // LISTAGRAFICA_H
