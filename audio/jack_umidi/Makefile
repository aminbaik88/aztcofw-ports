PORTNAME=	jack_umidi
DISTVERSIONPREFIX=	v
PORTVERSION=		1.1.1
PORTREVISION=	2
CATEGORIES=	audio

MAINTAINER=	hselasky@FreeBSD.org
COMMENT=	Daemon that converts a raw MIDI device into a JACK MIDI device
WWW=		https://github.com/hselasky/jack_umidi

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libjack.so:audio/jack

USES=		tar:bzip2 uidfix

USE_GITHUB=	yes
GH_ACCOUNT=	hselasky

PLIST_FILES=	sbin/jack_umidi \
		man/man8/jack_umidi.8.gz
SUB_FILES=	jack_umidi.conf

OPTIONS_DEFINE=	DEBUG DEVD_SCRIPT

DEVD_SCRIPT_DESC=	Install devd script to auto-launch jack_umidi

DEVD_SCRIPT_PLIST_FILES=	etc/devd/jack_umidi.conf

MAKE_ARGS+=	HAVE_MAN="YES"
MAKE_ARGS+=	PTHREAD_LIBS="-lpthread"

DEBUG_MAKE_ARGS=	HAVE_DEBUG="YES"

post-install-DEVD_SCRIPT-on::
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/devd
	${INSTALL_DATA} ${WRKDIR}/jack_umidi.conf \
		 ${STAGEDIR}${PREFIX}/etc/devd

.include <bsd.port.mk>
