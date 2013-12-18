#include <stdlib.h>
#include <string.h>
#include "human.h"
#include "../../ui.h"

short check_command(const char *typed, const char *command);

int human_select_cell_to_leave(s_player *p, struct s_cell **player_cells, int nb_cells)
{
	int command_size = 30;
	char command[command_size];

	ui_list_cells(player_cells, nb_cells);

	ui_prompt_command(command, (size_t) command_size);

	// list player cells
	// prompt cell to leave
	/*
	 * Command examples:
	 * cells
	 * neighbours #
	 * leave #
	 */
	return 1;
}

/**
 * Checks if a typed command match the provided command.
 * Returns 1 if the typed command is correct, 0 else.
 */
short check_command(const char *typed, const char *command)
{
	char *result;
	int position;

	// Find command in type
	result = strstr(typed, command);
	if (result == NULL) {
		return 0;
	}

	position = (int) (result - typed);
	return position == 0;
}
