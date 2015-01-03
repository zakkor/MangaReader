#include "MainPane.h"

MainPane::MainPane()
{
    box.setSize(sf::Vector2f(400, 300));
    box.setFillColor(sf::Color::White);
}


ChatMessage::ChatMessage()
{
    name.setCharacterSize(14);
    name.setColor(sf::Color::Black);
    name.setPosition(0, 0);
    message.setCharacterSize(14);
    message.setColor(sf::Color::Black);
    message.setPosition(0, 0);
}

void MainPane::addNewMessage(ChatMessage chatMessage)
{
    chatMessage.message.setPosition(5, 280);
    chatMessage.name.setPosition(5, 260);

    for (unsigned int i = 0; i < messages.size(); ++i)
    {
        messages.at(i).message.setPosition(messages.at(i).message.getPosition().x,
                                                messages.at(i).message.getPosition().y - 40);
        messages.at(i).name.setPosition(messages.at(i).name.getPosition().x,
                messages.at(i).name.getPosition().y - 40);
    }
    messages.emplace_back(chatMessage);
}
