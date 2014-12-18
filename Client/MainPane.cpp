#include "MainPane.h"

MainPane::MainPane()
{
    sf::Vector2f targetSize(1280 - 200, 720);
//    box.setFillColor(sf::Color(255, 133, 100));
//    texture.loadFromFile("mango.png");
//    mango.setTexture(texture);

//    mango.setScale(0.5, 0.5);
//    mango.setScale(
//            1,
//            targetSize.y / mango.getLocalBounds().height);

//    mango.setOrigin(mango.getLocalBounds().width, mango.getLocalBounds().height);
    sf::FloatRect mangoRect = mango.getLocalBounds();
    mango.setOrigin(mangoRect.left + mangoRect.width/2.0f,
            0);
    mango.setPosition(targetSize.x/2.0f,0);
//    mango.setPosition(0, 0);


    bgArea.setSize(sf::Vector2f(200, 720-200));
    bgArea.setPosition(1280-200, 0);
    bgArea.setFillColor(sf::Color(255, 255, 255, 128));

    messageArea.setSize(sf::Vector2f(bgArea.getSize().x - 5, bgArea.getSize().y - 5));
    messageArea.setPosition(bgArea.getPosition().x + 3, bgArea.getPosition().y + 3);
    messageArea.setFillColor(sf::Color(255, 255, 255, 128));
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
    chatMessage.message.setPosition(1280-200+5, 720-200 - 20);
    chatMessage.name.setPosition(1280-200+5, 720-200 - 40);

    for (unsigned int i = 0; i < messages.size(); ++i)
    {
        messages.at(i).message.setPosition(messages.at(i).message.getPosition().x,
                                                messages.at(i).message.getPosition().y - 40);
        messages.at(i).name.setPosition(messages.at(i).name.getPosition().x,
                messages.at(i).name.getPosition().y - 40);
    }
    messages.emplace_back(chatMessage);
}
