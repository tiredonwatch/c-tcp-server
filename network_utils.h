#ifndef NETWORK_UTILS
#define NETWORK_UTILS

#include <sys/types.h>
#include <sys/socket.h>

#define SERVER_PORT 8080
#define BACKLOG     10     // max number of connections in queue
#define MAX_CLIENTS 10     // total connected clients
#define BUFFER_SIZE 4096   // 4KB buffer size 

#endif