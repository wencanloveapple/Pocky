/*Do not edit this file.  It is machine generated. */

#ifndef FONTS_H_
#define FONTS_H_

struct FONTTABLE
{
     char ch;
     int x,y,x2,y2;
     float fx,fy,fx2,fy2;
};

 
#include "../extern/fonts/Anonymous.h" 
#include "../extern/fonts/Lekton.h" 
#include "../extern/fonts/RobotoBoldCondensed.h" 
#include "../extern/fonts/RobotoBoldCondensedItalic.h" 
#include "../extern/fonts/RobotoCondensed.h" 
#include "../extern/fonts/RobotoCondensedItalic.h" 
#include "../extern/fonts/RobotoItalic.h" 
#include "../extern/fonts/RobotoRegular.h"

enum FONTS {  FontAnonymous,
 FontLekton,
 FontRobotoBoldCondensed,
 FontRobotoBoldCondensedItalic,
 FontRobotoCondensed,
 FontRobotoCondensedItalic,
 FontRobotoItalic,
 FontRobotoRegular,
};

#define NUMFONTS 8 

static FONTTABLE *GetFontTable(FONTS font)
{
	switch(font)
	{
		case FONTS::FontAnonymous:
			return Anonymous::font;
		case FONTS::FontLekton:
			return Lekton::font;
		case FONTS::FontRobotoBoldCondensed:
			return RobotoBoldCondensed::font;
		case FONTS::FontRobotoBoldCondensedItalic:
			return RobotoBoldCondensedItalic::font;
		case FONTS::FontRobotoCondensed:
			return RobotoCondensed::font;
		case FONTS::FontRobotoCondensedItalic:
			return RobotoCondensedItalic::font;
		case FONTS::FontRobotoItalic:
			return RobotoItalic::font;
		case FONTS::FontRobotoRegular:
			return RobotoRegular::font;
	}
}


static unsigned char *GetFontData(FONTS font)
{
	switch(font)
	{
		case FONTS::FontAnonymous:
			return Anonymous::fontimage;
		case FONTS::FontLekton:
			return Lekton::fontimage;
		case FONTS::FontRobotoBoldCondensed:
			return RobotoBoldCondensed::fontimage;
		case FONTS::FontRobotoBoldCondensedItalic:
			return RobotoBoldCondensedItalic::fontimage;
		case FONTS::FontRobotoCondensed:
			return RobotoCondensed::fontimage;
		case FONTS::FontRobotoCondensedItalic:
			return RobotoCondensedItalic::fontimage;
		case FONTS::FontRobotoItalic:
			return RobotoItalic::fontimage;
		case FONTS::FontRobotoRegular:
			return RobotoRegular::fontimage;
	}
}


#endif