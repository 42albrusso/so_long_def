#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx/mlx.h"
# include "../get_next_line/get_next_line.h"
# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <fnctl.h>

typedef struct s_vector
{
	int	x;
	int	y;
}				t_vector;

typedef struct s_window
{
	void		*reference;
	t_vector	size;
}				t_window;

typedef struct s_sprite
{
	void		*reference;
	t_vector	size;
	char		*pixel;
	int			bits_per_pixel;
	int			line_size;
	int			endian;
}				t_sprite;

typedef struct s_game
{
	
#endif
