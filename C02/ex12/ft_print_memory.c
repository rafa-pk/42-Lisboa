#include <unistd.h>
#include <stdio.h>

//perceber isto
typedef unsigned char byte_t;

void	printByteHex1(byte_t Byte);
void	printAddressHex(void *str);
void	*ft_print_memory(void *addr, unsigned int size);

void	printByteHex1(byte_t Byte)
{
	if ((Byte / 16) < 10)
		printf("%c", (48 + (Byte / 16)));
	else
		printf("%c", (87 + (Byte / 16)))
	if((Byte % 16) < 10)
		printf("%c", (48 + (Byte % 16)));
	else
		printf("%c", (87 + (Byte % 16)));
}

void	printAddressHex(void *str)
{
	int		i;
	//perceber isto
	byte_t		*ptrByte;

	i = 7;
	//perceber isto 
	ptrByte = (byte_t *)str;
	while (i >= 0)
	{
		printf("Byte %d--> ", i);
		printByteHex1(*(ptrByte + i));
		printf("\n");
		--i;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	
}
