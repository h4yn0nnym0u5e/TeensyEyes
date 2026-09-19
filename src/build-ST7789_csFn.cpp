// This forces the display driver to be built in the current directory.
// Arduino does not build *.cpp files in a sub-directory.

#ifdef ARDUINO
#include "config-display.h"

#ifdef USE_ST7789_CSFN
#include "displays/ST7789_csFn_Display.h"
#include "displays/ST7789_csFn_Display.cpp"
#endif	/* USE_ST7789_CSFN  */
#endif	/* ARDUINO  */
