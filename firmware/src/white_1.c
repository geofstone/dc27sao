#include "blinky_engine.h"
#include "animations.h"

// frameCount = 51
// animationId = 1

extern led_frame* animations[];
extern uint16_t animations_framecounts[];
white_1() {
	code led_frame aniframes[] = {
		{ 0x44ff, 0xfff4, 0x0040, 0x01f4 },
		{ 0x00ff, 0xfff0, 0x000f, 0x007d },
		{ 0xf0ff, 0xfff0, 0x0000, 0x007d },
		{ 0x00ff, 0xfff0, 0x00ff, 0x007d },
		{ 0x00ff, 0xfff0, 0x0000, 0x007d },
		{ 0x00ff, 0xffff, 0x000f, 0x007d },
		{ 0x0fff, 0xfff0, 0x0000, 0x007d },
		{ 0xf0ff, 0xfff0, 0x000f, 0x007d },
		{ 0x00ff, 0xfff0, 0x0000, 0x007d },
		{ 0x00ff, 0xfff0, 0x0000, 0x0177 },
		{ 0x00ff, 0xffff, 0x000f, 0x007d },
		{ 0xf0ff, 0xfff0, 0x0000, 0x007d },
		{ 0x00ff, 0xfff0, 0x000f, 0x0177 },
		{ 0x00ff, 0xfff0, 0x00f0, 0x007d },
		{ 0x00ff, 0xfff0, 0x0000, 0x0177 },
		{ 0x00ff, 0xfff0, 0x000f, 0x0177 },
		{ 0x0fff, 0xfff0, 0x0000, 0x007d },
		{ 0x00ff, 0xfff0, 0x000f, 0x0177 },
		{ 0x00ff, 0xffff, 0x0000, 0x007d },
		{ 0x00ff, 0xfff0, 0x0000, 0x0177 },
		{ 0xf0ff, 0xfff0, 0x00ff, 0x007d },
		{ 0x0fff, 0xfff0, 0x0000, 0x007d },
		{ 0x00ff, 0xfff0, 0x0000, 0x0177 },
		{ 0x00ff, 0xfff0, 0x000f, 0x0177 },
		{ 0xf0ff, 0xfff0, 0x0000, 0x007d },
		{ 0x00ff, 0xfff0, 0x000f, 0x007d },
		{ 0x00ff, 0xfff0, 0x00f0, 0x007d },
		{ 0x00ff, 0xffff, 0x000f, 0x007d },
		{ 0x00ff, 0xfff0, 0x00f0, 0x007d },
		{ 0x00ff, 0xfff0, 0x000f, 0x0177 },
		{ 0xf0ff, 0xfff0, 0x0000, 0x007d },
		{ 0x00ff, 0xfff0, 0x0000, 0x0177 },
		{ 0xf0ff, 0xfff0, 0x000f, 0x007d },
		{ 0x000f, 0xfff0, 0x0000, 0x007d },
		{ 0x00ff, 0xfff0, 0x000f, 0x0177 },
		{ 0x00ff, 0xfff0, 0x0000, 0x0177 },
		{ 0x00ff, 0xfff0, 0x000f, 0x0177 },
		{ 0xf0ff, 0xfff0, 0x0000, 0x007d },
		{ 0x00ff, 0xfff0, 0x000f, 0x0177 },
		{ 0x00f0, 0xfff0, 0x0000, 0x007d },
		{ 0x00ff, 0xfff0, 0x0000, 0x0177 },
		{ 0xf0ff, 0xfff0, 0x000f, 0x007d },
		{ 0x00ff, 0xffff, 0x0000, 0x007d },
		{ 0x00ff, 0xfff0, 0x000f, 0x0177 },
		{ 0x0fff, 0xfff0, 0x0000, 0x007d },
		{ 0x00ff, 0xfff0, 0x000f, 0x0177 },
		{ 0x00ff, 0xfff0, 0x00f0, 0x007d },
		{ 0x00ff, 0xfff0, 0x000f, 0x0177 },
		{ 0x00ff, 0xffff, 0x0000, 0x007d },
		{ 0x00ff, 0xfff0, 0x000f, 0x0177 },
		{ 0x0055, 0x5550, 0x0000, 0x03e8 }
	};
	animations_framecounts[1] = 51;
	animations[1] = aniframes;
}