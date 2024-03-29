Summary: packet filter generator for various firewall systems
Name: filtergen
Version: 0.12.4
Release: 1
License: GPL
Group: Applications/System
URL: http://spacepants.org/src/filtergen
Packager: Jamie Wilkinson <jaq@spacepants.org>

Source: http://spacepants.org/src/filtergen/download/%name-%version.tar.gz

Buildroot: %{_tmppath}/%{name}-root
BuildPrereq: rpm-build gcc flex make

%description
filtergen is a packet filter generator.  It compiles a fairly high-level
description language into iptables, ipchains, or ipfilter rules (and has
bits of support for Cisco IOS access lists).


%prep
%setup -q

./configure

%build
make CFLAGS="${RPM_OPT_FLAGS}"

%install
rm -rf $RPM_BUILD_ROOT
make PREFIX=${RPM_BUILD_ROOT}/usr BINDIR=${RPM_BUILD_ROOT}/sbin install

%post
/sbin/chkconfig --add filtergen
/sbin/chkconfig filtergen off

%preun
/sbin/service filtergen accept
/sbin/chkconfig --del filtergen

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root)
/sbin/filtergen
/etc/init.d/filtergen
/etc/filter/
%{_mandir}/*
%doc HISTORY HONESTY README TODO tests/*.filter

%changelog
* Wed Mar 10 2004 Jamie Wilkinson <jaq@spacepants.org> - 0.12-1
- New upstream release.

* Wed Nov 13 2002 Matthew Kirkwood <matthew@hairy.beasts.org> 0.11-1
- Release 0.11, rename init script from "filter" to "filtergen"

* Mon Sep  2 2002 Matthew Kirkwood <matthew@hairy.beasts.org> 0.10-1
- Add new sample and documentation stuff

* Sun Aug 18 2002 Wil Cooley <wcooley@nakedape.cc> 0.8-1
- Initial RPM creation
