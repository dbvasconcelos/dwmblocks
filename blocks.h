//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
	{"",     "music",    0,                  11},
	{"",     "packages", 0,                  8},
	{"",     "volume",   0,                  10},
	{"",     "cpu_load", 10,                 18},
	{"",     "cpu_temp", 10,                 19},
	{"",     "memory",   10,                 17},
	{"",     "nettraf",  1,                  16},
	{"",     "weather",  3600,               5},
	{"",     "clock",    60,                 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 3;
