# dcel inode

![Travis CI Status](https://api.travis-ci.org/element0/dcel-inode.svg?branch=master)

"Domain Cell" is a data primative.  Use it for an inode or a general node to keep a data structure.

Describes both a file and a directory.

[October 2022 - This has been rebuilt in Python and JavaScript, as libraries used by Laydbug.io. The dev repos are currently private.]


Has these general properties:
- provides a link to a storage domain (file)
- a map of addressable areas within the domain
- a directory

	dcel
	    file (storage)
	    map
	    directory


It is my intent to use this as a general data primative.  It can describe a directory tree or a file structure.
