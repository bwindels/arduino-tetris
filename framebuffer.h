#include "types.h"

typedef struct {
	dimension_t x, y;
	pixel_t * buffer;
} buffer_t;

/** copies src into dst at pos */
void fb_blit(buffer_t* dst, buffer_t* src, position_t pos);
/** fill rectangle in framebuffer with given value */
void fb_fill_rect(buffer_t* fb, position_t offset, position_t size, pixel_t value);
/** used to remove the piece buffer from the framebuffer so we can check wether an operation (move, rotate) is allowed */
void fb_invert_buffer(buffer_t* fb, buffer_t* buffer, position_t size);
/** used to drop all blocks x lines downwards */
void fb_move_rect(buffer_t* fb, vector_t direction);
/** checks if no pixels that are already set in the fb would be set again by piece at pos */
bool fb_is_not_set(buffer_t* fb, buffer_t* piece, position_t pos);