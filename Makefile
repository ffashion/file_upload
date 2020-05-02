all: src/main/c/client/file_upload_client.c src/main/c/server/file_upload_server.c
	gcc -o output/client src/main/c/client/file_upload_client.c 
	gcc -o output/server src/main/c/server/file_upload_server.c
client: src/main/c/client/file_upload_client.c
	gcc -o output/client src/main/c/client/file_upload_client.c 
server: src/main/c/server/file_upload_server.c
	gcc -o output/server src/main/c/server/file_upload_server.c

