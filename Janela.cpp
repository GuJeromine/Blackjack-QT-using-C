#include "Jogador.h"
#include "Baralho.h"
#include "Janela.h"
#include <vector>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QInputDialog>
#include <QMessageBox>
#include <QTextEdit>
#include <QPushButton>
#include <QMainWindow>
#include <cstdio>

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
    Jogador* Jogador1 = new Jogador(this);
    Jogador* Jogador2 = new Jogador(this);
    Jogador1->setGeometry(50, 25, 1150, 275);
    Jogador2->setGeometry(50, 350, 1150, 275);
    Jogador1->show();
    Jogador2->show();
}

void Janela::SalvarLista() {
    /*FILE* file;
    try{
    file = fopen("Salvo.txt", "w");
    if(file == NULL){
        throw -1;
    }
    ListaGrafica* lista2 = listas.pop_back();
    ListaGrafica* lista = listas.pop_back();
    fprintf(file,"%d\n", lista->Elementos.size());
    std::vector<Carta>::iterator it = lista->Elementos.begin();
    for(; it != lista->Elementos.end(); it++){
        fprintf(file, "%d ", *it);
    }
    fprintf(file, "\n");
    fprintf(file,"%d\n", lista2->Elementos.size());
    it = lista2->Elementos.begin();
    for(; it != lista2->Elementos.end(); it++){
        fprintf(file, "%d ", *it);
    }
    fprintf(file, "\n");



    fclose(file);
    }
    catch(int ex){

    }*/
}

void Janela::AbrirLista() {

}
