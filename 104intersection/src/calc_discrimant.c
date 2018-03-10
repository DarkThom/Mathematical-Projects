/*
** calc_discrimant_sphere.c for  in /home/BLENEA_T/Projects/math/104intersection
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Dec 19 19:39:28 2016 Thomas BLENEAU
** Last update Fri Jan  6 19:00:55 2017 Thomas BLENEAU
*/

#include "../include/my.h"

void		calc_discrimant_sphere(char **av, double a, double b, double c)
{
  double	delta;
  t_coord	coord;
  double	result_1;
  double	result_2;

  delta = (pow(b, 2) - (4.0 * a * c));
  if (delta < 0)
    printf("No intersection point.\n");
  else if (delta == 0)
    {
      result_1 = (-b / (2.0 * a));
      coord.x1 = (atof(av[2]) + (result_1 * atof(av[5])));
      coord.y1 = (atof(av[3]) + (result_1 * atof(av[6])));
      coord.z1 = (atof(av[4]) + (result_1 * atof(av[7])));
      printf("1 intersection point :\n");
      printf("(%.3f, %.3f, %.3f)\n", coord.x1, coord.y1, coord.z1);
    }
  else if (delta > 0)
    {
      result_1 = ((-b + sqrt(delta)) / (2.0 * a));
      result_2 = ((-b - sqrt(delta)) / (2.0 * a));
      coord.x1 = (atof(av[2]) + (result_1 * atof(av[5])));
      coord.y1 = (atof(av[3]) + (result_1 * atof(av[6])));
      coord.z1 = (atof(av[4]) + (result_1 * atof(av[7])));
      coord.x2 = (atof(av[2]) + (result_2 * atof(av[5])));
      coord.y2 = (atof(av[3]) + (result_2 * atof(av[6])));
      coord.z2 = (atof(av[4]) + (result_2 * atof(av[7])));
      printf("2 intersection points :\n");
      printf("(%.3f, %.3f, %.3f)\n", coord.x1, coord.y1, coord.z1);
      printf("(%.3f, %.3f, %.3f)\n", coord.x2, coord.y2, coord.z2);
    }
}

void		calc_discrimant_cylindre(char **av, double a, double b, double c)
{
  double	delta;
  t_coord	coord;
  double	result_1;
  double	result_2;

  if (a != 0)
    {
      delta = (pow(b, 2) - (4.0 * a * c));
      if (delta < 0)
	printf("No intersection point.\n");
      else if (delta == 0)
	{
	  result_1 = (-b / (2.0 * a));
	  coord.x1 = (atof(av[2]) + (result_1 * atof(av[5])));
	  coord.y1 = (atof(av[3]) + (result_1 * atof(av[6])));
	  coord.z1 = (atof(av[4]) + (result_1 * atof(av[7])));
	  printf("1 intersection point :\n");
	  printf("(%.3f, %.3f, %.3f)\n", coord.x1, coord.y1, coord.z1);
	}
      else if (delta > 0)
	{
	  result_1 = ((-b + sqrt(delta)) / (2.0 * a));
	  result_2 = ((-b - sqrt(delta)) / (2.0 * a));
	  coord.x1 = (atof(av[2]) + (result_1 * atof(av[5])));
	  coord.y1 = (atof(av[3]) + (result_1 * atof(av[6])));
	  coord.z1 = (atof(av[4]) + (result_1 * atof(av[7])));
	  coord.x2 = (atof(av[2]) + (result_2 * atof(av[5])));
	  coord.y2 = (atof(av[3]) + (result_2 * atof(av[6])));
	  coord.z2 = (atof(av[4]) + (result_2 * atof(av[7])));
	  printf("2 intersection points :\n");
	  printf("(%.3f, %.3f, %.3f)\n", coord.x1, coord.y1, coord.z1);
	  printf("(%.3f, %.3f, %.3f)\n", coord.x2, coord.y2, coord.z2);
	}
    }
  else if (a == 0)
    {
      if (atoi(av[7]) != 0)
	{
	  if (c == 0)
	    printf("There is an infinite number of intersection points.\n");
	  else
	    printf("No intersection point.\n");
	}
      else
	printf("No intersection point.\n");
    }
}

void		calc_discrimant_cone(char **av, double a, double b, double c)
{
  double	delta;
  t_coord	coord;
  double	result_1;
  double	result_2;
  double	result_3;

  if ((int) (a * 1000000) != 0)
    {
      delta = (pow(b, 2) - (4.0 * a * c));
      if (delta < 0)
	printf("No intersection point.\n");
      else if (delta == 0)
	{
	  result_1 = (-b / (2.0 * a));
	  coord.x1 = (atof(av[2]) + (result_1 * atof(av[5])));
	  coord.y1 = (atof(av[3]) + (result_1 * atof(av[6])));
	  coord.z1 = (atof(av[4]) + (result_1 * atof(av[7])));
	  printf("1 intersection point :\n");
	  printf("(%.3f, %.3f, %.3f)\n", coord.x1, coord.y1, coord.z1);
	}
      else if (delta > 0)
	{
	  result_1 = ((-b + sqrt(delta)) / (2.0 * a));
	  result_2 = ((-b - sqrt(delta)) / (2.0 * a));
	  coord.x1 = (atof(av[2]) + (result_1 * atof(av[5])));
	  coord.y1 = (atof(av[3]) + (result_1 * atof(av[6])));
	  coord.z1 = (atof(av[4]) + (result_1 * atof(av[7])));
	  coord.x2 = (atof(av[2]) + (result_2 * atof(av[5])));
	  coord.y2 = (atof(av[3]) + (result_2 * atof(av[6])));
	  coord.z2 = (atof(av[4]) + (result_2 * atof(av[7])));
	  printf("2 intersection points :\n");
	  printf("(%.3f, %.3f, %.3f)\n", coord.x1, coord.y1, coord.z1);
	  printf("(%.3f, %.3f, %.3f)\n", coord.x2, coord.y2, coord.z2);
	}
    }
  else
    {
      if ((int) (b * 1000000) == 0)
	{
	  if ((int) (c * 1000000) == 0)
	    printf("There is an infinite number of intersection points.\n");
	  else
	    printf("No intersection point.\n");
	}
      else
	{
	  result_3 = (-c / b);
	  coord.x1 = (atof(av[2]) + (result_3 * atof(av[5])));
	  coord.y1 = (atof(av[3]) + (result_3 * atof(av[6])));
	  coord.z1 = (atof(av[4]) + (result_3 * atof(av[7])));
	  printf("1 intersection point :\n");
	  printf("(%.3f, %.3f, %.3f)\n", coord.x1, coord.y1, coord.z1);
	}
    }
}
