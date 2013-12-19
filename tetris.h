#include "types.h"

//tetris logic, we use the framebuffer as the playing field to conserve memory
void tetris_rotate_square_buffer(buffer_t* src, buffer_t* dst, bool ccw);
bool tetris_apply_rotated_piece(buffer_t* fb, buffer_t* piece, bool ccw);

bool tetris_move_piece(buffer_t* fb, buffer_t* piece, position_t pos);
dimension_t tetris_count_filled_lines(buffer_t* fb);
void tetris_drop_lines(buffer_t* fb, dimension_t lineCount);