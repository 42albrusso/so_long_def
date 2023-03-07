#include "so_long.h"

int	ft_check_wall_up(t_game *game)
{
	int	i;

	i = 0;
	while (game->map.map[0][i])
	{
		if (game->map.map[0][i] != '1')
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_wall_down(t_game *game)
{
	int	i;

	i = 0;
	while (game->map.map[game->map.height][i])
	{
		if (game->map.map[map.height][i] != '1')
			return (0);
		i++;
	}
	return (1);
}
