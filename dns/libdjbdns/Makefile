PORTNAME=	libdjbdns
PORTVERSION=	1.05
PORTREVISION=	2
CATEGORIES=	dns
MASTER_SITES=	http://smarden.org/pape/djb/manpages/
DISTNAME=	djbdns-pd-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Public domain DNS client library
WWW=		https://cr.yp.to/djbdns/dns.html

DEPRECATED=	No longer compliant with current DNS standards and source code hasn't been centrally managed for over 20 years
EXPIRATION_DATE=2023-06-30

USES=		gmake

USE_LDCONFIG=	yes
ALL_TARGET=	it

LIBS=		libdjbdns.a libdjbdns.so.1
INCLUDES=	alloc.h byte.h case.h dns.h env.h error.h fmt.h \
		gen_alloc.h gen_allocdefs.h iopause.h ip4.h ndelay.h \
		open.h openreadclose.h readclose.h scan.h select.h \
		socket.h str.h stralloc.h tai.h taia.h uint16.h \
		uint32.h uint64.h

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/include/libdjbdns
	cd ${WRKSRC} && \
		${INSTALL_LIB} ${LIBS} ${STAGEDIR}${PREFIX}/lib && \
		${INSTALL_DATA} ${INCLUDES} ${STAGEDIR}${PREFIX}/include/libdjbdns

.include <bsd.port.mk>
