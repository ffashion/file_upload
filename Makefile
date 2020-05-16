.PHONY: all,client,server
out_client = output/client
out_server = output/server
main_client = src/main/c/client/file_upload_client.c
main_server = src/main/c/server/file_upload_server.c
root_client = src/main/c/client
root_server = src/main/c/server
output_lib = output/lib

all: client server 
client: ${main_client} lib_file_client
	gcc -o ${out_client} ${main_client} ${output_lib}/file.a

lib_file_client:
	cd ${root_client} && gcc -c get_file_list.c sel_dir.c && ar -rv file.a get_file_list.o sel_dir.o  && rm *.o
	mv ${root_client}/file.a ${output_lib}/

server: ${main_server}
	gcc -o ${out_server} ${main_server}

