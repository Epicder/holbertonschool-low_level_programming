#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - libera la memoria de la grid hecha en el otro ejercicio
 * @grid: grid del ejercicio anterior
 * @height: altura
 * Return: 0
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
