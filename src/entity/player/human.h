#ifndef PLAYER_HUMAN
#define PLAYER_HUMAN

#include "../player.h"
#include "../cell.h"

int human_select_cell_to_leave(s_player *p, struct s_cell **player_cells, int nb_cells);

#endif