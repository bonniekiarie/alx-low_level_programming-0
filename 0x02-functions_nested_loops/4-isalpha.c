/**
 * _isalpha - takes a character as an argument
 * Description: checks a cahracter is lower case or upper case
 * Return: 0 if argurment is lowercase, 1 otherwise
 */

/**
 * @c:single character parameter
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

