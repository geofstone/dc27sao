#include "blinky_engine.h"
#include "animations.h"

// frameCount = 46
// animationId = 0

extern led_frame* animations[];
extern uint16_t animations_framecounts[];
black_0() {
	code led_frame aniframes[] = {
		{ 0x051f, 0x0000, 0x0000, 0x007d },
		{ 0x0f50, 0x0000, 0x0000, 0x0064 },
		{ 0x0f5f, 0x0000, 0x0000, 0x0019 },
		{ 0x5f1f, 0x0000, 0x0000, 0x007d },
		{ 0xff5f, 0x0000, 0x0000, 0x007d },
		{ 0xff1f, 0x0005, 0x0000, 0x007d },
		{ 0xf5ff, 0x000f, 0x0000, 0x007d },
		{ 0xf01f, 0x005f, 0x0000, 0x007d },
		{ 0x50ff, 0x00ff, 0x0000, 0x0032 },
		{ 0x501f, 0x00ff, 0x0000, 0x004b },
		{ 0x001f, 0x05ff, 0x0000, 0x007d },
		{ 0x008f, 0x0ff5, 0x0000, 0x007d },
		{ 0x001f, 0x0ff0, 0x0000, 0x007d },
		{ 0x004f, 0x0f50, 0x0000, 0x007d },
		{ 0x001f, 0x0f00, 0x0000, 0x007d },
		{ 0x0030, 0x0500, 0x0000, 0x0064 },
		{ 0x003f, 0x0500, 0x0000, 0x0019 },
		{ 0x0010, 0x0000, 0x0000, 0x0064 },
		{ 0x001f, 0x0000, 0x0000, 0x0019 },
		{ 0x007f, 0x0000, 0x0000, 0x007d },
		{ 0x000f, 0x0000, 0x0000, 0x007d },
		{ 0x00ff, 0x2000, 0x0000, 0x0032 },
		{ 0x000f, 0x2000, 0x0000, 0x004b },
		{ 0x001f, 0x5000, 0x0000, 0x007d },
		{ 0x004f, 0xf000, 0x0000, 0x007d },
		{ 0x001f, 0xf000, 0x0002, 0x007d },
		{ 0x005f, 0xf000, 0x0005, 0x0032 },
		{ 0x00ff, 0xf000, 0x0005, 0x004b },
		{ 0x001f, 0x5000, 0x000f, 0x007d },
		{ 0x00ff, 0x0000, 0x002f, 0x007d },
		{ 0x001f, 0x0000, 0x005f, 0x007d },
		{ 0x006f, 0x0000, 0x00f5, 0x007d },
		{ 0x000f, 0x0000, 0x02f0, 0x007d },
		{ 0x003f, 0x0000, 0x05f0, 0x007d },
		{ 0x0010, 0x0000, 0x0f50, 0x0064 },
		{ 0x001f, 0x0000, 0x0f50, 0x0019 },
		{ 0x004f, 0x0000, 0x0f00, 0x007d },
		{ 0x00df, 0x0000, 0x0f00, 0x007d },
		{ 0x001f, 0x0000, 0x0500, 0x007d },
		{ 0x004f, 0x0000, 0x0000, 0x007d },
		{ 0x00ff, 0x0000, 0x0000, 0x0032 },
		{ 0x005f, 0x0000, 0x0000, 0x004b },
		{ 0x001f, 0x0000, 0x0000, 0x007d },
		{ 0x003f, 0x0000, 0x0000, 0x007d },
		{ 0x001f, 0x0000, 0x0000, 0x007d },
		{ 0x005f, 0x0000, 0x0000, 0x007d }
	};
	animations_framecounts[0] = 46;
	animations[0] = aniframes;
}
