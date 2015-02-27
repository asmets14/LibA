#include "adn_ctype.h"
/*
** Transforme Min en Maj
*/
int adn_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
