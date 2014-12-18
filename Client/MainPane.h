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

    sf::RectangleShape box;
    std::vector <ChatMessage> messages;
};