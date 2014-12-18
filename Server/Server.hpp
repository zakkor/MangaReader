#include <SFML/Network/TcpSocket.hpp>
#include <SFML/Audio/Music.hpp>
#include <map>
#include <deque>
#include <SFML/Network/SocketSelector.hpp>
#include <SFML/Network/TcpListener.hpp>
#include "SFML/Graphics.hpp"
#include "Person.h"
#include "TextureHandler.h"
#include "Parser.h"

class Server
{
public:
    Server();
    void run();
private:
    void checkForNewConnections();
    void processEvents();
    void processNetworkEvents();

    void initializePlayers();

    //string helpers



    //


    sf::RenderWindow window;
//    TextureHandler textureHandler;


    sf::TcpListener listener;
    std::deque<sf::TcpSocket*> clients;
    sf::SocketSelector selector;

    short personCount;
    std::map<short, Person> personMap;
    Parser parser;
};