#include <stdio.h>
#include <dirent.h>
#include <unistd.h>
extern int get_one_dir_file_list(const char *);
extern int sel_dir(const char*);
//#include "../resources/resources.h"
int main(int argc,const char* argv[]){
		sel_dir(argv[1]);
		return 0;
}
