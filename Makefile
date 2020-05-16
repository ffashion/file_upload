out_client = output/client
out_server = output/server
main_client = src/main/c/client/file_upload_client.c
main_server = src/main/c/server/file_upload_server.c

all: client server

client: ${main_client}
	gcc -o ${out_client} ${main_client}


server: ${main_server}
	gcc -o ${out_server} ${main_server}

