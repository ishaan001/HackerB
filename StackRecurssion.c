#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_valid(char *str, int size, int *array) {
	int n, count = 0;
	char substr[2];
	if (size == 0)
		return 1;
	if (size == 1) {
		if (*str != '0')
			return 1;
		else return 0;
	}
	if (array[size] >= 0)
		return array[size];

	if (str[size-1] != '0')
		count += count_valid(str, size-1, array);

	strncpy(substr, str+(size-2), 2);
	n = atoi (substr);
	if (n >= 1 && n <= 26)
		count += count_valid(str, size-2, array);

	array[size] = count;
	return count;
}

int main () {
	char *input = "12";
	int i, size = strlen(input);
	int *array = (int *) malloc (sizeof(int) * (size+1));
	for (i=1; i <= size; i++)
		array[i] = -1;

	printf ("%d\n", count_valid(input, size, array));
}
