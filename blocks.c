#include "blocks.h"

pixel_t line_piece_buffer[4][4] = {
	{0, 0, 1, 0},
	{0, 0, 1, 0},
	{0, 0, 1, 0},
	{0, 0, 1, 0}
};

pixel_t rev_l_piece_buffer[3][3] = {
	{0, 1, 0},
	{0, 1, 0},
	{1, 1, 0}
};

pixel_t l_piece_buffer[3][3] = {
	{0, 1, 0},
	{0, 1, 0},
	{0, 1, 1}
};

pixel_t t_piece_buffer[3][3] = {
	{0, 1, 0},
	{1, 1, 1},
	{0, 0, 0}
};

pixel_t squiggly_piece_buffer[3][3] = {
	{0, 0, 1},
	{0, 1, 1},
	{0, 1, 0}
};

pixel_t rev_squiggly_piece_buffer[3][3] = {
	{1, 0, 0},
	{1, 1, 0},
	{0, 1, 0}
};

pixel_t square_piece_buffer[2][2] = {
	{1, 1},
	{1, 1}
};

//used for temporary storage for translations and rotations of a piece
//size will be adjusted according to the current piece
buffer_t temp_piece = {0, 0, pixel_t[16]};

buffer_t tetris_pieces[6] = {
	{4, 4, line_piece_buffer},
	{3, 3, l_piece_buffer},
	{3, 3, rev_l_piece_buffer},
	{3, 3, squiggly_piece_buffer},
	{3, 3, rev_squiggly_piece_buffer},
	{2, 2, square_piece_buffer}
};