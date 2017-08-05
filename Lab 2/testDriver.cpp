#include <iostream>
#include <string>
using namespace std;

#include "SetCard.h"

void isSet(SetCard c1, SetCard c2, SetCard c3)
{
    if (c1.getShape() == c2.getShape() && c2.getShape() == c3.getShape())
        cout << "Yes" << endl;
    else if (c1.getColor() == c2.getColor() && c2.getColor() == c3.getColor())
        cout << "Yes" << endl;
    else if (c1.getShade() == c2.getShade() && c2.getShade() == c3.getShade())
        cout << "Yes" << endl;
    else if (c1.getNumber() == c2.getNumber() && c2.getNumber() == c3.getNumber())
        cout << "yes" << endl;
    else if (c1.getShape() != c2.getShape() && c2.getShape() != c3.getShape() && c1.getShape() != c3.getShape())
        cout << "Yes" << endl;
    else if (c1.getColor() != c2.getColor() && c2.getColor() != c3.getColor() && c1.getColor() != c3.getColor())
        cout << "Yes" << endl;
    else if (c1.getShade() != c2.getShade() && c2.getShade() != c3.getShade() && c1.getShade() != c3.getShade())
        cout << "Yes" << endl;
    else if (c1.getNumber() != c2.getNumber() && c2.getNumber() != c3.getNumber() && c1.getNumber() != c3.getNumber())
        cout << "yes" << endl;
    else cout << "no" << endl;
}

int main()
{
    SetCard c1 = SetCard(OVALS, SOLID, RED, TWO);
    SetCard c2 = SetCard(OVALS, SOLID, RED, TWO);
    SetCard c3 = SetCard(SQUIGGLES, OUTLINED, PURPLE, THREE);
    isSet(c1, c2, c3);
}