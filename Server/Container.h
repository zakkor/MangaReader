#include <SFML/Network/TcpSocket.hpp>
#include "Person.h"

class Container
{
public:
    unsigned short id;
    Person player;
    sf::TcpSocket socket;
};

