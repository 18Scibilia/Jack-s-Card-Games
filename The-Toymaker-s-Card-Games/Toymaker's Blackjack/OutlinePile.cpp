#include "Solitaire.h"

//This is where the outlines for the cards will be.

OutlinePile::OutlinePile()
{
    pileOutline.setSize(Vector2f(112, 158));
    pileOutline.setPosition(Vector2f(0, 0));
    pileOutline.setFillColor(Color::Transparent);
    pileOutline.setOutlineColor(Color(255, 255, 255, 127));
    //We all need a bit of colour in our lvies, don't we?
    pileOutline.setOutlineThickness(1);
}

OutlinePile::OutlinePile(int startXPosition, int startYPosition)
{
    pileOutline.setSize(Vector2f(112, 158));
    pileOutline.setPosition(Vector2f(startXPosition, startYPosition));
    pileOutline.setFillColor(Color::Transparent);
    pileOutline.setOutlineColor(Color(255,255,255,127));
    pileOutline.setOutlineThickness(1);
}
