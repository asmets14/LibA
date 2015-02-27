#include "adn_ctype.h"
/*
** type alaphabetique uniquement
*/
int adn_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
