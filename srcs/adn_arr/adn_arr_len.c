#include <string.h>
#include <adn_arr.h>
#include <stddef.h>

size_t adn_arr_len(void *tab)
{
	size_t len;
	void **arr;

	arr = tab;
	len = 0;
	while(arr[len])
		len++;
	return(len);
}