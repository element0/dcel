#include <iostream>

#include "../src/dcel.hh"

int main()
{
    dcel * d = new dcel;

    d->set_storage( NULL );
    d->set_map( NULL );
    d->set_dir( NULL );

    delete d;

    return 0;
}
