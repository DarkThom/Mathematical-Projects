/*
** 101pong.c for  in /home/BLENEA_T/Projects/101pong
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Nov  7 17:36:07 2016 Thomas BLENEAU
** Last update Thu Nov 17 16:12:53 2016 Thomas BLENEAU
*/

#include "./include/my.h"

int	main(int ac, char **av)
{
  if (ac == 8 && atof(av[7]) > 0)
    {
      if (isnum(av[1]) == 1 && isnum(av[2]) == 1 &&
	  isnum(av[3]) == 1 && isnum(av[4]) == 1 &&
	  isnum(av[5]) == 1 && isnum(av[6]) == 1 &&
	  isnum_v2(av[7]) == 1)
	{
	  float	x0 = atof(av[1]);
	  float	y0 = atof(av[2]);
	  float	z0 = atof(av[3]);
	  float	x1 = atof(av[4]);
	  float	y1 = atof(av[5]);
	  float	z1 = atof(av[6]);
	  int	n = atof(av[7]);

	  float speed_vector_X = x1 + (n * (x1 - x0));
	  float speed_vector_Y = y1 + (n * (y1 - y0));
	  float speed_vector_Z = z1 + (n * (z1 - z0));
	  float Nspeed_vector = sqrt(pow((x1 - x0), 2) + pow((y1 - y0), 2) + pow((z1 - z0), 2));
	  float N_time_shift = (-z1 / (z1 - z0));
	  float angle;

	  printf("The speed vector coordinates are :\n(%.2f;%.2f;%.2f)\n", (x1 - x0), (y1 - y0), (z1 - z0));
	  printf("At time t+%d, ball coordinates will be :\n(%.2f;%.2f;%.2f)\n", n, speed_vector_X, speed_vector_Y, speed_vector_Z);
	  if (speed_vector_Z == 0)
	    {
	      if ((z1 - z0) == 0)
		{
		  if (z1 == 0)
		    printf("The incidence angle is :\n0.00 degrees\n");
		  else
		    printf("The ball won't reach the bat.\n");
		}
	    }
	  if (N_time_shift < 0)
	    printf("The ball won't reach the bat.\n");
	  else if (N_time_shift > 0)
	    {
	      angle = fabs((z1 - z0) / Nspeed_vector);
	      angle = fabs(((180 * acos(angle)) / M_PI) - 90);
	      printf("The incidence angle is :\n%.2f degrees\n", angle);
	    }
	}
      return (0);
    }
  return (84);
}
