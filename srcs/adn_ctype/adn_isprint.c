#include "adn_ctype.h"
/*
** caractere non speciaux
*/
int adn_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
