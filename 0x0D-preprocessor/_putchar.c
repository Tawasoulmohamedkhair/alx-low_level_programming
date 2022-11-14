#include <unistd>
/**
 * _putchar - writes the charachter c
 * @c : the character to print 
 * Return : success on 1 
 **/
int _putchar(char c)
{
	return(write(1,&c,1));
}
