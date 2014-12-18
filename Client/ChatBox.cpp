#include "ChatBox.h"

ChatBox::ChatBox()
{
    bgBox.setFillColor(sf::Color(183, 183, 183));
    box.setFillColor(sf::Color::White);
    text.setColor(sf::Color::Black);
    text.setString("");
    text.setCharacterSize(14);

    bgBox.setSize(sf::Vector2f(400, 100));
    bgBox.setPosition(0, 300);

    box.setSize(sf::Vector2f(bgBox.getSize().x - 5, bgBox.getSize().y - 5));
    box.setPosition(bgBox.getPosition().x + 3, bgBox.getPosition().y + 3);

    text.setPosition(box.getPosition().x + 5, box.getPosition().y);
}
