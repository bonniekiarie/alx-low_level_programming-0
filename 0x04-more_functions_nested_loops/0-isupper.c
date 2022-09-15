/**
 * _isupper - takes a character as an argument
 * Description: checks a cahracter is lower case or upper case
 * Return: 1 if argurment is uppercase, 0 otherwise
 */

/**
 * @c:single character parameter
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}

