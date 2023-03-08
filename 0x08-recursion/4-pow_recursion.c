
/**
 * _pow_recursion - raise an int x to the power of y
 * @x: int to be raised
 * @y: power
 *
 * Description: a function that simply raise an integer called x to the power
 * of integer y using recursion
 *
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	x = x * _pow_recursion(x, y - 1);
	return (x);
}
