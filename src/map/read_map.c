#include "so_long.h"

int	ft_keep_width(char *path)
{
	int		width;
	int		fd;
	char	*map_nbr;

	width = 0;
	fd = open((const char *)path, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (1)
	{
		map_nbr = ft_calloc(2, 1);
		read(fd, map_nbr, 1);
		if (map_nbr[0] == '\n')
			break ;
		free(map_nbr);
		i++;
	}
	free(map_nbr);
	close(fd);
	return (width);
}

int	ft_keep_height(char *path)
{
	int		height;
	int		fd;
	char	*map_nbr;

	height = 0;
	fd = open((const char *)path, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (1)
	{
		map_nbr = ft_calloc(2, 1);
		read = (fd, map_nbr, 1);
		if (map_nbr[0] == '\n')
			height++;
		else if (map_nbr[0] == '\0')
			break ;
		free(map_nbr);
	}
	free(map_nbr);
	close(fd);
	return (height);
}

void	ft_read_map(t_game	*game)
{
	int	i;

	i = 0;
	while (i < game->map.height)
	{
		game->map.map[i] = get_next_line(fd);
		i++;
	}
}
