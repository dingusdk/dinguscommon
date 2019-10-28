#ifndef _debug_h
#define _debug_h

#ifdef _DEBUG

#include <Arduino.h>

#define debug_print( x) Serial.print( x) 
#define debug_print2( x,y) Serial.print( x,y) 
#define debug_println( x) Serial.println( x)
#define debug_println2( x,y) Serial.println( x,y)

#else

#define debug_print( x) {}
#define debug_print2( x,y) {}
#define debug_println( x) {}
#define debug_println2( x,y) {}

#endif


#endif

