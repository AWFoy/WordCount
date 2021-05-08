// WordCount.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main(int argc, char *argv[])
{
	if(argc==3){
	FILE *fp=fopen(argv[2],"r");
	if(!fp){
	printf("ERROR!");
	return -1;
	}
	if( !strcmp(argv[1],"-c")){
	char text;
	int num=0;
	text=fgetc(fp);
	while(text != EOF){
		text=fgetc(fp);
		num++;
	}
	printf("该文本文件的字符数为：%d\n",num);
	}
	if(!strcmp(argv[1],"-w")){
		int count=0;
		char a=fgetc(fp);
		while( a!= EOF){
			if( (a >='a' && a <='z') || ( a >='A' && a <='Z') || ( a >='0' && a <='9') ){
                     while( (a >='a' && a <='z') || ( a >='A' && a <='Z') || ( a >='0' && a <='9') )
                         a =fgetc(fp);
                     count++;
                     a =fgetc(fp);
                   
                }
                else{
                    a =fgetc(fp);
            }
		}
		 printf("该文本文件的单词数为：%d\n",count);
	}
	}
	return 0;
}

