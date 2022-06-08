#include "janela.h"
#include "Baralho.h"
#include <vector>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QInputDialog>
#include <QMessageBox>
#include <QTextEdit>
#include <QPushButton>
#include <QMainWindow>

Janela::Janela(QWidget *parent)
    : QMainWindow{parent}
{
    this->setGeometry(50,50, 1400, 650);
    this->setWindowTitle("Blackjack 21");
    this->setCentralWidget(new QWidget());
    Salvar = new QPushButton("Salvar", this);
    Salvar->setGeometry(1250, 25, 100, 275);
    Abrir = new QPushButton("Abrir", this);
    Abrir->setGeometry(1250, 350, 100, 275);
    connect(Salvar, SIGNAL(clicked(bool)),this,SLOT(SalvarLista()));
    connect(Abrir, SIGNAL(clicked(bool)),this,SLOT(AbrirLista()));
    ListaGrafica* lista = new ListaGrafica(this);
    ListaGrafica* lista2 = new ListaGrafica(this);
    listas.push_back(lista);
    listas.push_back(lista2);
    lista->setGeometry(50, 25, 1150, 275);
    lista2->setGeometry(50, 350, 1150, 275);
    lista->show();
    lista2->show();
}

void Janela::SalvarLista() {

}

void Janela::AbrirLista() {

}
