#ifndef JOGADOR_H
#define JOGADOR_H

#include <QFrame>
#include <QMouseEvent>
#include <vector>
#include <QPushButton>
#include <string>
#include "Baralho.h"

class Jogador : public QFrame
{
    std::vector<Carta> Elementos;
    int Soma;
    int NumeroDoJogador;
    static int NumeroDeJogadores;
    static int GanhadorDefinido;
    static int SomaJogador1;
    static int SomaJogador2;
    static int Turno;
    static int AuxiliarDeDesistencia;
    bool TemA;
    bool Desistiu;
    Baralho* baralho;
public:
    Jogador(QWidget* parent = nullptr);
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void resultMessage(std::string &s) const;
    int getSoma(){
       return Soma;
    }
    void setSoma(int SomaArquivo){
        Soma = SomaArquivo;
    }
};

#endif // JOGADOR_H
