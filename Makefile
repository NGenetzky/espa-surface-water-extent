#------------------------------------------------------------------------------
# Makefile
#
# Project Name: surface-water-extent
# Makefile that will invoke subsequent Makefiles in subdirectories.
# Assumes the following Makefiles exist:
#	not-validated-prototype-dswe/Makefile
#------------------------------------------------------------------------------

all:
	echo "make all in not-validated-prototype-dswe"; \
        (cd not-validated-prototype-dswe; $(MAKE) all -f Makefile);

install:
	echo "make install in not-validated-prototype-dswe"; \
        (cd not-validated-prototype-dswe; $(MAKE) install -f Makefile);

clean:
	echo "make clean in not-validated-prototype-dswe"; \
        (cd not-validated-prototype-dswe; $(MAKE) clean -f Makefile);

