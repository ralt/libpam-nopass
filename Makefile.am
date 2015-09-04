lib_LTLIBRARIES = pam_nopass.la
pam_nopass_la_LDFLAGS = -avoid-version -module -Wl
pam_nopass_la_LIBADD = @LTLIBOBJS@
pam_nopass_la_SOURCES = pam_nopass.c

AM_CFLAGS			= -Wall
AUTOMAKE_OPTIONS		= dist-bzip2 dist-xz

LIBTOOL_DEPS			= @LIBTOOL_DEPS@

libtool: $(LIBTOOL_DEPS)
	$(SHELL) ./config.status --recheck
