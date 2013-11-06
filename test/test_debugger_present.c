/*
   Simple test-program of debugger_present() from dbgtools.

   version 1.0, october, 2013

   Copyright (C) 2013- Fredrik Kihlander

   This software is provided 'as-is', without any express or implied
   warranty.  In no event will the authors be held liable for any damages
   arising from the use of this software.

   Permission is granted to anyone to use this software for any purpose,
   including commercial applications, and to alter it and redistribute it
   freely, subject to the following restrictions:

   1. The origin of this software must not be misrepresented; you must not
      claim that you wrote the original software. If you use this software
      in a product, an acknowledgment in the product documentation would be
      appreciated but is not required.
   2. Altered source versions must be plainly marked as such, and must not be
      misrepresented as being the original software.
   3. This notice may not be removed or altered from any source distribution.

   Fredrik Kihlander
*/

#include <dbgtools/debugger.h>

#include <stdio.h>

#if defined( __unix__ )
	#include <unistd.h>
#elif defined( _MSC_VER )
	#include <Windows.h>
	#define sleep( x ) Sleep( x * 1000 )
#endif

int main( int argc, const char** argv )
{
	(void)argc; (void)argv;
	for(;;)
	{
		printf("debugger: %s\n", debugger_present() ? "ATTACHED" : "NOT ATTACHED" );
		sleep( 1 );
	}
	return 0;
}
