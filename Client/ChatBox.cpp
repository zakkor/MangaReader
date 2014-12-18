#include "ChatBox.h"

ChatBox::ChatBox()
{
    box.setFillColor(sf::Color(255, 255, 255, 70));

    text.setColor(sf::Color::White);
    text.setString("");
    text.setCharacterSize(14);

    bgBox.setFillColor(sf::Color(255, 255, 255, 70));
    bgBox.setSize(sf::Vector2f(200, 200));
    bgBox.setPosition(1280-200, 720-200);

    box.setSize(sf::Vector2f(bgBox.getSize().x - 5, bgBox.getSize().y - 5));
    box.setPosition(bgBox.getPosition().x + 3, bgBox.getPosition().y + 3);

    text.setPosition(box.getPosition().x + 5, box.getPosition().y);
}
