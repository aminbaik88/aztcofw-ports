PORTNAME=	filevercmp
DISTVERSION=	g20151117
CATEGORIES=	sysutils

MAINTAINER=	jwb@FreeBSD.org
COMMENT=	Compare version strings as in sort --version-sort
WWW=		https://github.com/ekg/filevercmp

LICENSE=	GPLv3

DEPRECATED=	Dependent ports use git submodules now

USE_GITHUB=	yes
GH_ACCOUNT=	ekg
GH_TAGNAME=	cccb6ba1fffa2898718b0a96c63279e0979e002b

MAKEFILE=	${FILESDIR}/Makefile
INSTALL_TARGET=	install-strip
PLIST_FILES=	bin/filevercmp include/filevercmp.h lib/libfilevercmp.a

.include <bsd.port.mk>
