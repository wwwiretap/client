# Makefile.in generated by automake 1.11.3 from Makefile.am.
# src/libcharon/plugins/maemo/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002,
# 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011 Free Software
# Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.





pkgdatadir = $(datadir)/strongswan
pkgincludedir = $(includedir)/strongswan
pkglibdir = $(libdir)/strongswan
pkglibexecdir = $(libexecdir)/strongswan
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-unknown-linux-gnu
host_triplet = x86_64-unknown-linux-gnu
subdir = src/libcharon/plugins/maemo
DIST_COMMON = $(srcdir)/Makefile.am $(srcdir)/Makefile.in
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/macros/with.m4 \
	$(top_srcdir)/m4/macros/enable-disable.m4 \
	$(top_srcdir)/m4/macros/add-plugin.m4 \
	$(top_srcdir)/configure.in
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__uninstall_files_from_dir = { \
  test -z "$$files" \
    || { test ! -d "$$dir" && test ! -f "$$dir" && test ! -r "$$dir"; } \
    || { echo " ( cd '$$dir' && rm -f" $$files ")"; \
         $(am__cd) "$$dir" && rm -f $$files; }; \
  }
am__installdirs = "$(DESTDIR)$(plugindir)" \
	"$(DESTDIR)$(dbusservicedir)"
LTLIBRARIES = $(noinst_LTLIBRARIES) $(plugin_LTLIBRARIES)
am__DEPENDENCIES_1 =
libstrongswan_maemo_la_DEPENDENCIES = $(am__DEPENDENCIES_1)
am_libstrongswan_maemo_la_OBJECTS = maemo_plugin.lo maemo_service.lo
libstrongswan_maemo_la_OBJECTS = $(am_libstrongswan_maemo_la_OBJECTS)
libstrongswan_maemo_la_LINK = $(LIBTOOL) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(libstrongswan_maemo_la_LDFLAGS) $(LDFLAGS) -o $@
am_libstrongswan_maemo_la_rpath = -rpath \
	$(plugindir)
#am_libstrongswan_maemo_la_rpath =
DEFAULT_INCLUDES = -I. -I$(top_builddir)
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__depfiles_maybe = depfiles
am__mv = mv -f
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) \
	--mode=compile $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(LIBTOOL) --tag=CC $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) \
	--mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) \
	$(LDFLAGS) -o $@
SOURCES = $(libstrongswan_maemo_la_SOURCES)
DIST_SOURCES = $(libstrongswan_maemo_la_SOURCES)
DATA = $(dbusservice_DATA)
ETAGS = etags
CTAGS = ctags
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /home/andy/Documents/dev/vapana/strongswan/missing --run aclocal-1.11
ALLOCA = 
AMTAR = $${TAR-tar}
AR = ar
AUTOCONF = ${SHELL} /home/andy/Documents/dev/vapana/strongswan/missing --run autoconf
AUTOHEADER = ${SHELL} /home/andy/Documents/dev/vapana/strongswan/missing --run autoheader
AUTOMAKE = ${SHELL} /home/andy/Documents/dev/vapana/strongswan/missing --run automake-1.11
AWK = mawk
BFDLIB = 
BTLIB = 
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -g -O2 -Wall -Wno-format -Wno-pointer-sign -include /home/andy/Documents/dev/vapana/strongswan/config.h
CPP = gcc -E
CPPFLAGS = 
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DLLIB = -ldl 
DLLTOOL = false
DSYMUTIL = 
DUMPBIN = 
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /bin/grep -E
EXEEXT = 
FGREP = /bin/grep -F
GPERF = /usr/bin/gperf
GREP = /bin/grep
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
LD = /usr/bin/ld -m elf_x86_64
LDFLAGS = 
LEX = flex
LEXLIB = -lfl
LEX_OUTPUT_ROOT = lex.yy
LIBOBJS = 
LIBS = 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIPO = 
LN_S = ln -s
LTLIBOBJS = 
MAKEINFO = ${SHELL} /home/andy/Documents/dev/vapana/strongswan/missing --run makeinfo
MANIFEST_TOOL = :
MKDIR_P = /bin/mkdir -p
MYSQLCFLAG = 
MYSQLCONFIG = 
MYSQLLIB = 
NM = /usr/bin/nm -B
NMEDIT = 
OBJDUMP = objdump
OBJEXT = o
OTOOL = 
OTOOL64 = 
PACKAGE = strongswan
PACKAGE_BUGREPORT = 
PACKAGE_NAME = strongSwan
PACKAGE_STRING = strongSwan 5.0.2dr4
PACKAGE_TARNAME = strongswan
PACKAGE_URL = 
PACKAGE_VERSION = 5.0.2dr4
PATH_SEPARATOR = :
PERL = /usr/bin/perl
PKG_CONFIG = /usr/bin/pkg-config
PKG_CONFIG_LIBDIR = 
PKG_CONFIG_PATH = 
PTHREADLIB = -lpthread 
RANLIB = ranlib
RTLIB = -lrt 
RUBY = 
RUBYINCLUDE = 
SED = /bin/sed
SET_MAKE = 
SHELL = /bin/bash
SOCKLIB = 
STRIP = strip
VERSION = 5.0.2dr4
YACC = bison -y
YFLAGS = 
abs_builddir = /home/andy/Documents/dev/vapana/strongswan/src/libcharon/plugins/maemo
abs_srcdir = /home/andy/Documents/dev/vapana/strongswan/src/libcharon/plugins/maemo
abs_top_builddir = /home/andy/Documents/dev/vapana/strongswan
abs_top_srcdir = /home/andy/Documents/dev/vapana/strongswan
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_DUMPBIN = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = tar --format=ustar -chf - "$$tardir"
am__untar = tar -xf -
attest_plugins =  sha1 sha2 md5 random x509 pkcs1 pkcs8 pem gmp
axis2c_CFLAGS = 
axis2c_LIBS = 
bindir = ${exec_prefix}/bin
build = x86_64-unknown-linux-gnu
build_alias = 
build_cpu = x86_64
build_os = linux-gnu
build_vendor = unknown
builddir = .
c_plugins =  socket-default stroke updown xauth-generic
charon_natt_port = 4500
charon_plugins =  aes des sha1 sha2 md5 random nonce x509 revocation constraints pubkey pkcs1 pkcs8 pgp dnskey pem fips-prf gmp xcbc cmac hmac attr kernel-netlink resolve socket-default stroke updown xauth-generic
charon_udp_port = 500
clearsilver_LIBS = 
datadir = ${datarootdir}
datarootdir = ${prefix}/share
dbusservicedir = 
dev_headers = no
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
gtk_CFLAGS = 
gtk_LIBS = 
h_plugins =  attr kernel-netlink resolve
host = x86_64-unknown-linux-gnu
host_alias = 
host_cpu = x86_64
host_os = linux-gnu
host_vendor = unknown
htmldir = ${docdir}
imcvdir = ${exec_prefix}/lib/ipsec/imcvs
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/andy/Documents/dev/vapana/strongswan/install-sh
ipsec_script = ipsec
ipsec_script_upper = IPSEC
ipsecdir = ${exec_prefix}/libexec/ipsec
ipsecgroup = root
ipseclibdir = ${exec_prefix}/lib/ipsec
ipsecuser = root
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
linux_headers = ${top_srcdir}/src/include
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
maemo_CFLAGS = 
maemo_LIBS = 
manager_plugins =  pkcs1 pkcs8 pem gmp
mandir = ${datarootdir}/man
medsrv_plugins =  sha1 sha2 random pkcs1 pkcs8 pem gmp
mkdir_p = /bin/mkdir -p
nm_CFLAGS = 
nm_LIBS = 
nm_ca_dir = /usr/share/ca-certificates
nm_plugins =  aes des sha1 sha2 md5 random nonce x509 revocation constraints pkcs1 pkcs8 pem fips-prf gmp xcbc cmac hmac kernel-netlink socket-default
oldincludedir = /usr/include
openac_plugins =  aes des sha1 sha2 md5 random x509 pkcs1 pkcs8 pem gmp
p_plugins = 
pcsclite_CFLAGS = 
pcsclite_LIBS = 
pdfdir = ${docdir}
piddir = /var/run
pki_plugins =  aes des sha1 sha2 md5 random x509 pkcs1 pkcs8 pem gmp
plugindir = ${exec_prefix}/lib/ipsec/plugins
pool_plugins = 
prefix = /usr/local
program_transform_name = s,x,x,
psdir = ${docdir}
random_device = /dev/random
resolv_conf = ${prefix}/etc/resolv.conf
routing_table = 220
routing_table_prio = 220
s_plugins =  aes des sha1 sha2 md5 random nonce x509 revocation constraints pubkey pkcs1 pkcs8 pgp dnskey pem fips-prf gmp xcbc cmac hmac
sbindir = ${exec_prefix}/sbin
scepclient_plugins =  aes des sha1 sha2 md5 random x509 pkcs1 pkcs8 pem gmp
scripts_plugins =  aes des sha1 sha2 md5 random x509 pkcs1 pkcs8 pem gmp hmac
sharedstatedir = ${prefix}/com
soup_CFLAGS = 
soup_LIBS = 
srcdir = .
starter_plugins =  kernel-netlink
strongswan_conf = ${prefix}/etc/strongswan.conf
sysconfdir = ${prefix}/etc
systemdsystemunitdir = 
target_alias = 
top_build_prefix = ../../../../
top_builddir = ../../../..
top_srcdir = ../../../..
urandom_device = /dev/urandom
xml_CFLAGS = 
xml_LIBS = 
INCLUDES = -I$(top_srcdir)/src/libstrongswan -I$(top_srcdir)/src/libhydra \
	-I$(top_srcdir)/src/libcharon ${maemo_CFLAGS}

AM_CFLAGS = -rdynamic
#noinst_LTLIBRARIES = libstrongswan-maemo.la
plugin_LTLIBRARIES = libstrongswan-maemo.la
libstrongswan_maemo_la_SOURCES = \
	maemo_plugin.h maemo_plugin.c \
	maemo_service.h maemo_service.c

libstrongswan_maemo_la_LDFLAGS = -module -avoid-version
libstrongswan_maemo_la_LIBADD = ${maemo_LIBS}
dbusservice_DATA = org.strongswan.charon.service
EXTRA_DIST = org.strongswan.charon.service.in
CLEANFILES = $(dbusservice_DATA)
all: all-am

.SUFFIXES:
.SUFFIXES: .c .lo .o .obj
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu src/libcharon/plugins/maemo/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --gnu src/libcharon/plugins/maemo/Makefile
.PRECIOUS: Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):

clean-noinstLTLIBRARIES:
	-test -z "$(noinst_LTLIBRARIES)" || rm -f $(noinst_LTLIBRARIES)
	@list='$(noinst_LTLIBRARIES)'; for p in $$list; do \
	  dir="`echo $$p | sed -e 's|/[^/]*$$||'`"; \
	  test "$$dir" != "$$p" || dir=.; \
	  echo "rm -f \"$${dir}/so_locations\""; \
	  rm -f "$${dir}/so_locations"; \
	done
install-pluginLTLIBRARIES: $(plugin_LTLIBRARIES)
	@$(NORMAL_INSTALL)
	test -z "$(plugindir)" || $(MKDIR_P) "$(DESTDIR)$(plugindir)"
	@list='$(plugin_LTLIBRARIES)'; test -n "$(plugindir)" || list=; \
	list2=; for p in $$list; do \
	  if test -f $$p; then \
	    list2="$$list2 $$p"; \
	  else :; fi; \
	done; \
	test -z "$$list2" || { \
	  echo " $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$list2 '$(DESTDIR)$(plugindir)'"; \
	  $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$list2 "$(DESTDIR)$(plugindir)"; \
	}

uninstall-pluginLTLIBRARIES:
	@$(NORMAL_UNINSTALL)
	@list='$(plugin_LTLIBRARIES)'; test -n "$(plugindir)" || list=; \
	for p in $$list; do \
	  $(am__strip_dir) \
	  echo " $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=uninstall rm -f '$(DESTDIR)$(plugindir)/$$f'"; \
	  $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=uninstall rm -f "$(DESTDIR)$(plugindir)/$$f"; \
	done

clean-pluginLTLIBRARIES:
	-test -z "$(plugin_LTLIBRARIES)" || rm -f $(plugin_LTLIBRARIES)
	@list='$(plugin_LTLIBRARIES)'; for p in $$list; do \
	  dir="`echo $$p | sed -e 's|/[^/]*$$||'`"; \
	  test "$$dir" != "$$p" || dir=.; \
	  echo "rm -f \"$${dir}/so_locations\""; \
	  rm -f "$${dir}/so_locations"; \
	done
libstrongswan-maemo.la: $(libstrongswan_maemo_la_OBJECTS) $(libstrongswan_maemo_la_DEPENDENCIES) $(EXTRA_libstrongswan_maemo_la_DEPENDENCIES) 
	$(libstrongswan_maemo_la_LINK) $(am_libstrongswan_maemo_la_rpath) $(libstrongswan_maemo_la_OBJECTS) $(libstrongswan_maemo_la_LIBADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/maemo_plugin.Plo
include ./$(DEPDIR)/maemo_service.Plo

.c.o:
	$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(COMPILE) -c $<

.c.obj:
	$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ `$(CYGPATH_W) '$<'`
	$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(COMPILE) -c `$(CYGPATH_W) '$<'`

.c.lo:
	$(LTCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Plo
#	source='$<' object='$@' libtool=yes \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(LTCOMPILE) -c -o $@ $<

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
install-dbusserviceDATA: $(dbusservice_DATA)
	@$(NORMAL_INSTALL)
	test -z "$(dbusservicedir)" || $(MKDIR_P) "$(DESTDIR)$(dbusservicedir)"
	@list='$(dbusservice_DATA)'; test -n "$(dbusservicedir)" || list=; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_DATA) $$files '$(DESTDIR)$(dbusservicedir)'"; \
	  $(INSTALL_DATA) $$files "$(DESTDIR)$(dbusservicedir)" || exit $$?; \
	done

uninstall-dbusserviceDATA:
	@$(NORMAL_UNINSTALL)
	@list='$(dbusservice_DATA)'; test -n "$(dbusservicedir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(dbusservicedir)'; $(am__uninstall_files_from_dir)

ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)
	list='$(SOURCES) $(HEADERS) $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	mkid -fID $$unique
tags: TAGS

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	set x; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: CTAGS
CTAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(LTLIBRARIES) $(DATA)
installdirs:
	for dir in "$(DESTDIR)$(plugindir)" "$(DESTDIR)$(dbusservicedir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libtool clean-noinstLTLIBRARIES \
	clean-pluginLTLIBRARIES mostlyclean-am

distclean: distclean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-dbusserviceDATA install-pluginLTLIBRARIES

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am:

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-dbusserviceDATA uninstall-pluginLTLIBRARIES

.MAKE: install-am install-strip

.PHONY: CTAGS GTAGS all all-am check check-am clean clean-generic \
	clean-libtool clean-noinstLTLIBRARIES clean-pluginLTLIBRARIES \
	ctags distclean distclean-compile distclean-generic \
	distclean-libtool distclean-tags distdir dvi dvi-am html \
	html-am info info-am install install-am install-data \
	install-data-am install-dbusserviceDATA install-dvi \
	install-dvi-am install-exec install-exec-am install-html \
	install-html-am install-info install-info-am install-man \
	install-pdf install-pdf-am install-pluginLTLIBRARIES \
	install-ps install-ps-am install-strip installcheck \
	installcheck-am installdirs maintainer-clean \
	maintainer-clean-generic mostlyclean mostlyclean-compile \
	mostlyclean-generic mostlyclean-libtool pdf pdf-am ps ps-am \
	tags uninstall uninstall-am uninstall-dbusserviceDATA \
	uninstall-pluginLTLIBRARIES


org.strongswan.charon.service: $(srcdir)/org.strongswan.charon.service.in
	sed -e 's|[@]LIBEXECDIR[@]|$(libexecdir)|' $< >$@

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
