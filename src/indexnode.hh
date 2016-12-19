#ifndef _HIENA_DOMAINCELL_INDEXNODE_H_
#define _HIENA_DOMAINCELL_INDEXNODE_H_

class indexnode {
	dcel * dcel;
	indexnode * next;
	indexnode * prev;
    public:
	int set_dcel( dcel * );
	void set_next( indexnode * );
	void set_prev( indexnode * );
};

#endif /*!_HIENA_DOMAINCELL_INDEXNODE_H_*/
