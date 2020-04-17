/* Authored by: Shivam Kumar Singh (Roll: B-61)
             Section: K18MS (Reg. No: 11803277)
				
	(d) TO COPY CONTENT OF ONE FILE INTO OTHER                 */
	
	#include <unistd.h>
	#include<stdio.h>
	#include<fcntl.h>
	
	int main()
	{
		int fd, n, p;
		char arr[100];
		fd = open("SEEK_END.txt", O_CREAT|O_RDWR, 0777);
		n = read(0, arr, 100);
		write(fd, arr, n);
		p = lseek(fd, -5, SEEK_END);
		read(fd, arr, 5);
		write(1, arr, 5);
		printf("\n");
	}
