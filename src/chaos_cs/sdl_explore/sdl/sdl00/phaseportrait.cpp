/*
henon set is:
x_ = 1 - c1*x*x + y;
						y = c2*x;
						x=x_;*/

#include "phaseportrait.h"

void InitialSettings(PhasePortraitSettings*settings, int width, int height, double *outA, double *outB)
{
	settings->x0 = -1.75;
	settings->x1 = 1.75;
	settings->y0 = -1.75;
	settings->y1 = 1.75;
	settings->width = width;
	settings->height = height;

	*outA=-1.1;
	*outB= 1.72;
	settings->seedsPerAxis = 40;
	settings->settling = 48;
	settings->drawing = 20;
}

void DrawPhasePortrait( SDL_Surface* pSurface, PhasePortraitSettings*settings, double c1, double c2 ) 
{
	double sx0= -2, sx1=2, sy0= -2, sy1=2;

	int nXpoints=settings->seedsPerAxis;
	int nYpoints=settings->seedsPerAxis;
	int height=settings->height;
	int width=settings->width;
	double sxinc = (nXpoints==1) ? 1e6 : (sx1-sx0)/(nXpoints-1);
	double syinc = (nYpoints==1) ? 1e6 : (sy1-sy0)/(nYpoints-1);

	double x_,x,y;
	double X0=settings->x0, X1=settings->x1, Y0=settings->y0, Y1=settings->y1;

	SDL_FillRect ( pSurface , NULL , g_white );  //clear surface quickly

	for (double sx=sx0; sx<=sx1; sx+=sxinc)
            {
                for (double sy=sy0; sy<=sy1; sy+=syinc)
                {
                    x = sx; y=sy;

					for (int ii=0; ii<(settings->settling); ii++)
                    {
                        x_ = c1*x - y*y;
						y = c2*y + x*y;
                        x=x_; 
						if (ISTOOBIG(x)||ISTOOBIG(y)) break;
                    }
					for (int ii=0; ii<(settings->drawing); ii++)
                    {
						x_ = c1*x - y*y;
						y = c2*y + x*y;
                        x=x_; 
						if (ISTOOBIG(x)||ISTOOBIG(y)) break;

                        int px = (int)(width * ((x - X0) / (X1 - X0)));
                        int py = (int)(height - height * ((y - Y0) / (Y1 - Y0)));
                        if (py >= 0 && py < height && px>=0 && px<width)
						{
							//get pixel color, mult by 0.875 (x-x>>3)
  Uint32 col = 0 ; Uint32 colR;
  //determine position
  char* pPosition = ( char* ) pSurface->pixels ;
  //offset by y
  pPosition += ( pSurface->pitch * py ) ;
  //offset by x
  pPosition += ( pSurface->format->BytesPerPixel * px ) ;
  //copy pixel data
  memcpy ( &col , pPosition , pSurface->format->BytesPerPixel ) ;


  SDL_Color color ;
  SDL_GetRGB ( col , pSurface->format , &color.r , &color.g , &color.b ) ;
  colR = color.r;
							
							// a quick mult, stops at 7, but whatever
						//int newcolor = (color.r)-((color.r)>>3);
						Uint32 newcolor = (colR)-((colR)>>2);
						//int newcolor = ((color.r)>>2)+((color.r)>>3); //5/8

  Uint32 newcol = SDL_MapRGB ( pSurface->format , newcolor , newcolor , newcolor ) ;
  memcpy ( pPosition , &newcol , pSurface->format->BytesPerPixel ) ;

						}
                    }
                }
            }
}

