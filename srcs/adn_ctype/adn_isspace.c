#include "adn_ctype.h"

/*
** si il y des caracteres de type espace
*/

int adn_isspace(int c)
{
	if (c == '\t' || c == '\n')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}		
