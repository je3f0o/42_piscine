#include <string.h>
#include <stdlib.h>
#include "ft_strjoin.h"

int calculate_buffer_size(int size, char **strs, char *sep) {
	int i                = 0;
	int strings_size     = 0;
	int seperator_length = strlen(sep);
	int seperator_size   = (size - 1) * seperator_length;

	if (size == 0) {
		return 0;
	}

	while (i < size) {
		strings_size += strlen(strs[i]);
		i += 1;
	}

	return strings_size + seperator_size + 1;
}

char *ft_strjoin(int size, char **strs, char *sep) {
	int i                = 1;
	int string_length    = 0;
	int offset_index     = 0;
	char *buffer         = 0;
	char *offset_pointer = 0;

	buffer = (char *)malloc(calculate_buffer_size(size, strs, sep));

	if (buffer != NULL && size > 0) {
		string_length = strlen(strs[0]);
		memcpy(buffer, strs[0], string_length);

		offset_index = string_length;
		while (i < size) {
			offset_pointer = &(buffer[offset_index]);

			string_length = strlen(sep);
			memcpy(offset_pointer, sep, string_length);
			offset_index += string_length;

			offset_pointer = &(buffer[offset_index]);
			string_length = strlen(strs[i]);
			memcpy(offset_pointer, strs[i], string_length);
			offset_index += string_length;

			i += 1;
		}
	}

	return buffer;
}
