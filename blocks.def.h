//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"", "cat /tmp/recordingicon 2>/dev/null",	        0,	9},
    {"", "~/.config/dwmblocks/scripts/nettraf",         1,  16},
    {"", "~/.config/dwmblocks/scripts/forecast",        18000, 5},
//  {"", "~/.config/dwmblocks/scripts/kernel",          360, 2},
    {"💻 ", "~/.config/dwmblocks/scripts/uptime",       60, 2},
    {"", "~/.config/dwmblocks/scripts/disk",            30, 10},
    {"" , "~/.config/dwmblocks/scripts/memory",         2,  10},
    {"", "~/.config/dwmblocks/scripts/volume",          1,  10},
    {"" , "~/.config/dwmblocks/scripts/battery",        3,  3},
	{"📅 ",  "date '+%b %d (%a) 🕗 %I:%M%p'",			30,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
