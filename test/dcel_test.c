#include <stdio.h>

#include "../src/dcel.h"

int main ( int argc, char * argv[] )
{
	dcel *d = domaincell_new ( NULL );
	domaincell_cleanup( d );
	return 0;
}
