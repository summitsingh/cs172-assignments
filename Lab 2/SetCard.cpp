#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "SetCard.h"

SetCard::SetCard(shape cardShape, shading cardShade, color cardColor, number cardNumber)
{
    cardShape_ = cardShape;
    cardShade_ = cardShade;
    cardColor_ = cardColor;
    cardNumber_ = cardNumber;
}

SetCard::SetCard()
{
    cardShape_ = OVALS;
    cardShade_ = STRIPED;
    cardColor_ = RED;
    cardNumber_ = ONE;
}

shape SetCard::getShape() const
{
    return cardShape_;
}

shading SetCard::getShade() const
{
    return cardShade_;
}

color SetCard::getColor() const
{
    return cardColor_;
}

number SetCard::getNumber() const
{
    return cardNumber_;
}
