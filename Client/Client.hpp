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

    std::string IntToString ( int number );
    string copyFromCharToChar(char char1, char char2, string str);


    //-------------------------------//

    sf::RenderWindow window;

    sf::View mangoView;

    TextureHandler textureHandler;
    sf::Font font;

    sf::TcpSocket client;

    ChatBox chatBox;
    MainPane mainPane;

    sf::Texture texture;

    short personCount;

    short personId;

    bool inFocus;

    bool currentlyTyping;

    float zoomFactor;

    bool scrolling;
    sf::Vector2f origMousePosition;

    std::string currentManga;

    std::map<short, Person> personMap;
};