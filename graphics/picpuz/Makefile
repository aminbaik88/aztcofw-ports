PORTNAME=	picpuz
PORTVERSION=	2.1.1
PORTREVISION=	8
CATEGORIES=	graphics games
MASTER_SITES=	http://kornelix.squarespace.com/storage/downloads/ \
		http://www.stasyan.com/devel/distfiles/

MAINTAINER=	devel@stasyan.com
COMMENT=	Jigsaw puzzle program
WWW=		http://kornelix.squarespace.com/picpuz/

BROKEN_armv6=		fails to compile: use of undeclared identifier __NR_SYSCALL_BASE
BROKEN_armv7=		fails to compile: use of undeclared identifier __NR_SYSCALL_BASE

USES=		compiler:c++11-lang dos2unix gmake gnome pkgconfig
DOS2UNIX_GLOB=	*.h
USE_GNOME=	gtk20

ALL_TARGET=	#
#RUN_DEPENDS+=	xdg-desktop-menu:devel/xdg-utils
DESKTOP_ENTRIES="Picpuz" \
		"Jigsaw Puzzle" \
		"${PREFIX}/share/pixmaps/picpuz.png" \
		"picpuz" \
		"Graphics;Game;GTK;" \
		true

post-install:
	(cd ${STAGEDIR}${PREFIX}/share/pixmaps && \
		${LN} -s ${DATADIR}/icons/picpuz.png .)

.include <bsd.port.mk>
