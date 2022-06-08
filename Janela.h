#ifndef JANELA_H
#define JANELA_H

#include <QMainWindow>
#include <vector>
#include <string>
#include <QPushButton>
#include <QTextEdit>
#include "Jogador.h"

class Janela : public QMainWindow
{
    Q_OBJECT
    QPushButton *Salvar;
    QPushButton *Abrir;
    QTextEdit *editor;
    Jogador* Jogador1;
    Jogador* Jogador2;
    void recalcularPosicoes();
public:
    explicit Janela(QWidget *parent = nullptr);

public slots:
    void SalvarLista();
    void AbrirLista();
signals:

};

#endif // JANELA_H

