#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <math.h>

int main(int argc, char **argv)
{
	int size;
	if(argc != 2)
	{
		perror("Argument count is not right...\n");
		return -1;
	}

	for(size = 0; argv[1][size] != '\0';size++){}

	int part1 = atoi((char *)argv[1]);
	int arr[size];
	int t_size = size;
	for(int i = 0; i <= t_size - 1;i++)
	{
		size -= 1;
		int temp = part1;
		int tpow = pow(10, size);
		temp /= tpow;
		temp %= 10;
		arr[i] = temp;
		
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	for(int a = 0; a  <= t_size - 1;a++)
	{
		
		int c;
		for(int b = 0; b <= 9 && arr[a] != b;++b)
		{
			c = b;
		}
		c++;
			
		printf("%d. -> %d \n", a, c);
	}
	
}
