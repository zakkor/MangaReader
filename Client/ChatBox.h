#include <SFML/Graphics.hpp>

class ChatBox
{
public:
    ChatBox();

    sf::Text text;
    sf::RectangleShape box, bgBox;
};