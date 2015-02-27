#include "asn_ctype.h"
/*
** caractere ascii en decimal
*/
int adn_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}