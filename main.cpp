#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	FILE *fp1 = fopen(argv[2], "r");
	
	uint32_t n1, n2;
	fread(&n1, sizeof(n1), 1, fp);
	fread(&n2, sizeof(n2), 1, fp1);


    uint32_t num1 = ntohl(n1);


    uint32_t num2 = ntohl(n2);

	n1 = num1;
	n2 = num2;

    
    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",n1, n1, n2, n2, n1+n2, n1+n2);
	exit(0);
}
