#if !defined(SERVER_H)
#define SERVER_H
#define IPv4 "127.0.0.1"
#define IPv6 "::1"
#define LOCALHOST "localhost"
#include "program.h"
const int port{5942};

class server
{
private:
    int port_internal{port};
public:
    server(/* args */){}

    void set_Port(int _port)
    {
        port_internal = _port;
    }

    void start();

    void stop();

    ~server(){}
};


#endif