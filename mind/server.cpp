#include "server.h"
#include "program.h"

using namespace std;

void server::start()
{
    Log("inicio de servidor iniciado en el puerto ", port);
}
void server::stop()
{
    Log("finalizacion de servidor");
}