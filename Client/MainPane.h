#include "SFML/Graphics.hpp"

class ChatMessage
{
public:
    ChatMessage();
    sf::Text name;
    sf::Text message;
};

class MainPane
{
public:
    MainPane();

    void addNewMessage(ChatMessage chatMessage);

    sf::Sprite mango;
    sf::RectangleShape messageArea, bgArea;
    sf::Texture texture;
    std::vector <ChatMessage> messages;
};