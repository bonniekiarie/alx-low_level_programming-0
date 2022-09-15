/**
 * _isdigit - takes a character as an argument
 * Description: checks if argument is a digit
 * Return: 0 if argurment is not a digit 1 otherwise
 */

/**
 * @c:single character parameter
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	return (0);
}

