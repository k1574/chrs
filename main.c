#include <stdio.h>
#include <stdlib.h>

char *argv0;

void
usage(void)
{
	fprintf(stderr, "Usage: %s <first_char> <last_char>\n", argv0);	
	exit(1);
}

void
main(int argc, char *argv[])
{
	char c1, c2;
	argv0 = argv[0] ;
	if(argc!=3 || argv[1][1]!=0 || argv[2][1]!=0 )
		usage();
	c1 = *argv[1] ;
	c2 = *argv[2] ;
	if( c2<c1 )
		usage();
	while(c1<=c2)
		printf("%c", c1++);
	puts("");
	exit(0);
}
