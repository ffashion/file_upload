#include <stdio.h>
#include <dirent.h>
#include <malloc.h>
#include <unistd.h>
#include "resources.h"
int sel_dir(const char* dir){
    if(NULL == dir){
			get_file_list(getcwd(NULL,0));
    }
    else{
        get_file_list(dir);
    }


}