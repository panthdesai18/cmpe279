#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <sys/socket.h>
int main(int argc, char *argv[])
{
    int socket_new = atoi(argv[1]), valread;
    char hello[] = "Hello from server"; 
    char buffer[1024];
    valread = read( socket_new , buffer, 1024); 
    buffer[valread] = '\0';
    write(1, buffer, strlen(buffer));    
    send(socket_new , hello , strlen(hello) , 0 ); 
    printf("\nMessage Sent"); 
    return 0;
}    
