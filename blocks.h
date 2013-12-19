#include "types.h"
#include "framebuffer.h"

extern pixel_t line_piece_buffer[4][4];
extern pixel_t rev_l_piece_buffer[3][3];
extern pixel_t l_piece_buffer[3][3];
extern pixel_t t_piece_buffer[3][3];
extern pixel_t squiggly_piece_buffer[3][3];
extern pixel_t rev_squiggly_piece_buffer[3][3];
extern pixel_t square_piece_buffer[2][2];
//used for temporary storage for translations and rotations of a piece
//size will be adjusted according to the current piece
extern buffer_t temp_piece;
extern buffer_t tetris_pieces[6];