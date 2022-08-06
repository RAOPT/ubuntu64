#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/epoll.h>



int main (int argc, char* argv[]) {
	printf("This is test01: [%d] [%s]\n", argc, argv[1]);	// argv[1]表示命令行第二个参数 也就是./a.out之后的第一个参数
	printf("raopt throw something such as[%d] apples to the trush\n", argc);
	printf("molokai seems not work?\n");
	return 0;
}
