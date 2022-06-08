#ifndef BARALHO_H
#define BARALHO_H
#include <vector>
class Baralho{
    static std::vector<int> baralho;
public:
    static int SortearCarta();
    static void EmbaralharBaralho();
    static int getTam();
};

class Carta{
public:
    int NumDaCarta;
    int NaipeDaCarta;
};





#endif // BARALHO_H
