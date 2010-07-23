#pragma once

#ifdef _MSC_VER
#include "SDL.h"
#else
#include "SDL/SDL.h"
#endif
#ifdef _MSC_VER
#define snprintf _snprintf
#endif

#define FULLSCREEN 0 
#define BOOL int
#define TRUE 1
#define FALSE 0
#define StringsEqual(s1, s2) (strcmp((s1),(s2))==0)

enum {
  SCREENWIDTH = 800,
  SCREENHEIGHT = 600,
  SCREENBPP = 0,
  SCREENFLAGS = SDL_ANYFORMAT,
  FPS = 20 //limit frames per second
} ;

typedef struct
{
	double pc1;
	double pc2;
	double pc3;
	double pc4;
	double pc5;
	double pc6;
	double pc1b;
	double pc2b;
	double pc3b;
	double pc4b;
	double pc5b;
	double pc6b;
	double x0;
	double x1;
	double y0;
	double y1;
	double diagram_a_x0;
	double diagram_a_x1;
	double diagram_a_y0;
	double diagram_a_y1;
	double diagram_b_x0;
	double diagram_b_x1;
	double diagram_b_y0;
	double diagram_b_y1;
	double diagram_c_x0;
	double diagram_c_x1;
	double diagram_c_y0;
	double diagram_c_y1;

	int coloringMode; //black/white, rainbow, use ctrl-U to change
	int colorWrapping; //wrap values or not? use alt-W to change
	double maxValue; //use U, shift-U to adjust
	double hueShift; //use alt-U, alt-shift u to cycle
	int settling; //use shift +,-
	int drawing; //use +, -
	double breatheRadius_c1c2; //ok being non-general, because one could rearrange params for this
} FastMapsSettings;


typedef struct
{
	const char * fieldType;
	const char * fieldName;
	void * reference;
	int defaultValue; //a default value, for construction. 
} SettingsFieldDescription;

extern FastMapsSettings * g_settings;

#define g_white 0xffffffff

#define TRANSLUCENT_RED 0x00000001
#define MAPDEFAULTFILE ("default.cfg" )

//fmod can be negative, so use this instead.
#define mmod(a,b) ((a>0)? fmod(a,b) : fmod(a,b)+b)

BOOL doesFileExist(const char *fname);
BOOL LockFramesPerSecond();
void plotpointcolor(SDL_Surface* pSurface, int px, int py, int newcol);
void plotlineHoriz(SDL_Surface* pSurface, int px0, int px1, int py, int newcol);
void plotlineVert(SDL_Surface* pSurface, int px, int py0, int py1, int newcol);
void plotlineRectangle(SDL_Surface* pSurface, int px0, int px1, int py0, int py1, int newcol);
void massert(BOOL condition, const char* message);
SDL_Surface* createSurface(SDL_Surface*reference, int width, int height);

#define MIN(X, Y)  ((X) < (Y) ? (X) : (Y))
#define MAX(X, Y)  ((X) > (Y) ? (X) : (Y))

