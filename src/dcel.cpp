/* Copyright (c) 2016 Raygan Henley */
/* see "LICENSE" */

#include <iostream>
#include "dcel.hh"

void dcel::set_storage ( void * s ) {
	storage = s;
}

void dcel::set_map ( void * m ) {
	map = m;
}

void dcel::set_dir ( dcel_dir * d ) {
	dir = d;
}

dcel::~dcel()
{
}

dcel::dcel()
{
}
