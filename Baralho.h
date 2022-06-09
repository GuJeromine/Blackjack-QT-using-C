#ifndef BARALHO_H
#define BARALHO_H
#include <vector>
class Baralho{
    static Baralho* Instancia;
    std::vector<int> baralho;
    Baralho(){};
public:
    Baralho (const Baralho& Obj) = delete;
    Baralho operator=(Baralho Obj) = delete;
    static Baralho* getInstancia();
    int SortearCarta();
    void EmbaralharBaralho();
    int getTam();
};

class Carta{
public:
    int NumDaCarta;
    int NaipeDaCarta;
};





#endif // BARALHO_H
