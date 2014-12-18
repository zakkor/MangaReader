#include <SFML/Network/TcpSocket.hpp>
#include <SFML/Audio/Music.hpp>
#include "SFML/Graphics.hpp"
#include "Person.h"
#include "TextureHandler.h"
#include "ChatBox.h"
#include "MainPane.h"

class Client
{
public:
    Client();
    void run();

    sf::Vector2u screenSize;
private:
    void processEvents();
    void processNetworkEvents();
    void render();

    void startClient();


    //-------------------------------//

    sf::RenderWindow window;

    TextureHandler textureHandler;
    sf::Font font;

    sf::TcpSocket client;

    ChatBox chatBox;
    MainPane mainPane;


    short personCount;

    short personId;

    bool inFocus;

    bool currentlyTyping;

    std::map<short, Person> personMap;
};