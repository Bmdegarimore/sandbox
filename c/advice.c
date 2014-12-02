#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	char *advice[] = {
		"Sup Fatso \r\n",
		"Go for the tight jeans. No they do NOT make you look fat. \r\n",
		"One word: Poop \r\n",
		"Yo Bro what the hell You think you doing? \r\n",
		"You might want to rethink that haircut \r\n"
	};
	int listener_d = socket (PF_INET, SOCK_STREAM, 0); //Creates Socket

	struct sockaddr_in name;
	name.sin_family = PF_INET;
	name.sin_port = (in_port_t)htons(30000); //Bind socketto port 30000
	name.sin_addr.s_addr = htonl (INADDR_ANY);
	bind (listener_d, (struct sockaddr *) &name, sizeof(name));

	listen (listener_d, 10); //Set to the listen que depth to 10
	puts ("waiting for connection");
	while(1){	//Loop accept/begin talking section
		struct sockaddr_storage client_addr;
		unsigned int address_size = sizeof(client_addr);
		int connect_d = accept (listener_d, (struct sockaddr *)&client_addr, &address_size);
		char *msg = advice[rand() % 5];

		send (connect_d, msg, strlen(msg), 0);
		close(connect_d);
	}
	return 0;
}