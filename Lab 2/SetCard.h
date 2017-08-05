#ifndef _SetCard_K
#define _SetCard_K

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

enum shape {OVALS, SQUIGGLES, DIAMONDS};
enum shading {SOLID, STRIPED, OUTLINED};
enum color {RED, PURPLE, GREEN};
enum number{ONE, TWO, THREE};

class SetCard
{
    private:
        shape cardShape_;
        shading cardShade_;
        color cardColor_;
        number cardNumber_;
                
    public:
        
        SetCard(shape cardShape, shading cardShade, color cardColor, number cardNumber);
        SetCard();

        shape getShape() const;
        shading getShade() const;
        color getColor() const;
        number getNumber() const;
        
};
#endif