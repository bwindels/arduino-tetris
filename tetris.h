#include "types.h"

//tetris logic, we use the framebuffer as the playing field to conserve memory
bool tetris_rotate_piece(buffer_t* fb, buffer_t* piece, bool ccw);
bool tetris_move_piece(buffer_t* fb, buffer_t* piece, position_t pos);
dimension_t tetris_count_filled_lines(buffer_t* fb);
void tetris_drop_lines(buffer_t* fb, dimension_t lineCount);