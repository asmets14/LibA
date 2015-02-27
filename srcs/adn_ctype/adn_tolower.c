#include "adn_ctype.h"
/*
** Transforme les Maj en Min
*/
int adn_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		c += 32;
	return (c);
}
