PORTNAME=	libretro-desmume2015
PORTVERSION=	0.20220405
PORTREVISION=	2
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Port of Desmume to libretro based on Desmume SVN circa 2015
WWW=		https://github.com/libretro/desmume2015

LICENSE=	GPLv2

BROKEN_aarch64=	fails to compile: invokes x86 assembler

USES=		compiler:c++11-lib gmake gl
USE_LDCONFIG=	yes
USE_GL=		gl

USE_GITHUB=	yes
GH_ACCOUNT=	libretro
GH_PROJECT=	desmume2015
GH_TAGNAME=	af397ff

PLIST_FILES=	lib/libretro/desmume2015_libretro.so

MAKEFILE=	Makefile.freebsd

.include <bsd.port.options.mk>

.if ${ARCH} != aarch64 && ${ARCH} != amd64 && !${ARCH:Marmv*} && ${ARCH} != i386
MAKE_ENV+=	DESMUME_JIT=0
.endif

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/lib/libretro;
	${INSTALL_LIB} ${WRKSRC}/desmume/desmume2015_libretro.so ${STAGEDIR}/${PREFIX}/lib/libretro;

.include <bsd.port.mk>
