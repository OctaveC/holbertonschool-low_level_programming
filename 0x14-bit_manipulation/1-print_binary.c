#include "holberton.h"

/**
 * print_binary - convert an unsigned long int to a print_binary
 * @n: An unsigned long int to be converted
 *
 * Return: Nothing
 **/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	/* ^ that que n est inférieur à 1, on appelle notre fonction */
	/* en récursion avec tout les 1 et les 0 du nombre n en forme */
	/* binaire déplacé d'une byte vers le droite */
	/* tel que si n est égal à 27 (en binaire 11011), ça va nous donner */
	/* 01101, puis 00110, puis 00011, puis 00001, puis 00000 */

	_putchar((n & 1) + '0');
	/* ^ le (n & 1) à pour effet de transformer tout les 0 et 1 du n sous */
	/* forme binaire qui viennent avant le dernier à droite en 0, il faut */
	/* imaginer le 1 dans le (n & 1) en temps que 000000000001 */
	/* (une infinité de 0 suivits d'un 1 à la fin), donc si on fait 27 */
	/* en binaire (11011) & 1, on obtiens 00001 */
	/* comme notre fonctione est récursive, et qu'on décale les 0 et 1 */
	/* d'un cran à droite à chaque fois, ça nous permet d'afficher le */
	/*nombre qu'on désire, converti en binaire, charactère par charactère*/
}
