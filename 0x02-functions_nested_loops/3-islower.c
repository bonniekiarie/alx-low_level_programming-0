/**
 * _islower - takes a character as an argument
 * Description: checks a cahracter is lower case or upper case
 * Return: 1 if argurment is lowercase, 0 otherwise
 */

int _islower(int c)
{
	/**
	 * c - single character parameter
	 */

	if (c < 97)
		return (0);
	return (1);
}

