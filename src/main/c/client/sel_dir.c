#include <stdio.h>
#include <dirent.h>
#include <malloc.h>
#include <unistd.h>
extern int get_file_list(const char *);
int sel_dir(const char* dir){
    if(NULL == dir){
			get_file_list(getcwd(NULL,0));
    }
    else{
        get_file_list(dir);
    }


}