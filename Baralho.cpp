#include "Baralho.h"
#include <vector>
#include <ctime>
#include <random>
#include <QDebug>
Baralho* Baralho::Instancia = nullptr;
Baralho* Baralho::getInstancia(){
    if(Instancia == nullptr){
        Instancia = new Baralho();
        Instancia->EmbaralharBaralho();
    }
    return Instancia;
}
int Baralho::SortearCarta(){
std::srand(std::time(nullptr));
int Aleatorio = std::rand();
Aleatorio = Aleatorio % baralho.size();
int carta;
carta = baralho[Aleatorio];
std::vector<int>::iterator it = baralho.begin();
for(int i = 0; i < Aleatorio; i++){
    it++;
}
baralho.erase(it);
return carta;
}
void Baralho::EmbaralharBaralho(){
    for(int i = 1; i <=52; i++){
        baralho.push_back(i);
    }
}
int Baralho::getTam(){
    qDebug() << baralho.size();
    return baralho.size();
}
//std::vector<int> Baralho::baralho = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26,
//                                     27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52};
