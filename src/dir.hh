#ifndef _HIENA_DOMAINCELL_DIR_H_
#define _HIENA_DOMAINCELL_DIR_H_

class dcel_dir {
	void * index;	// linked list of indices
public:
	void add_index( void * );
	void rm_index( void * );
	void *get_index( void * );
};

#endif /*!_HIENA_DOMAINCELL_DIR_H_ */
