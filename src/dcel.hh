
#ifndef _HIENA_DOMAINCELL_H_
#define _HIENA_DOMAINCELL_H_

#include "dir.hh"

class dcel {
	void *storage;
	void *map;
	dcel_dir *dir;
    public:
	dcel();
	~dcel();
	void set_storage ( void * );
	void set_map ( void * );
	void set_dir ( dcel_dir * );

	int add_child( void * );
	int rm_child( void * );
};

#endif /*!_HIENA_DOMAINCELL_H_*/
