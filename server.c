#include <sys/types.h>
#include <sys/socket.h>
// ушел  читать про сокеты в виндовс

int Socket(int domain, int type, int protocol);

int main()
{
    int serverfd = socket(AF_INET, SOCK_STREAM, 0);

    return 0;
}