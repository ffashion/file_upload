#include<stdio.h>
#include <dirent.h>
#include <malloc.h>
#include <unistd.h>
int get_file_list(const char*dirname){
        DIR *dir_stream = NULL;//一个目录流
		//typedef struct  dirent dirent_;//定义别名 否则好像数组不能用
		
        struct dirent *dir_u_file;//相关目录信息 dir_under_file

        if(NULL == opendir(dirname)){
                puts("目录不存在");
                return -1;
        }
        else{
                dir_stream = opendir(dirname);//根据目录打开目录流
        }
        dir_u_file = readdir(dir_stream);//从目录流中读取下一个entry，返回目录中的每个entry
        while(NULL != dir_u_file){
                if(DT_DIR == dir_u_file->d_type){
                        printf("%s/   ",dir_u_file->d_name);
                }
                else{
						printf("%s   ",dir_u_file->d_name);
					}

				
               
                dir_u_file = readdir(dir_stream);//从目录中读取下一个entry
                
        }
        printf("\n");
        closedir(dir_stream);

		return 0;
}