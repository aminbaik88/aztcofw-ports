PORTNAME=	spacezero
PORTVERSION=	0.86.01
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}%20${PORTVERSION:R}/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	2D Real Time Strategy space combat game
WWW=		http://spacezero.sourceforge.net/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libvorbisfile.so:audio/libvorbis

BROKEN=		Error: no fonts found in your system
DEPRECATED=	broken, abandoned upstream, depends on deprecated gtk2
EXPIRATION_DATE=2023-06-03

USES=		openal:al,alut gnome pkgconfig xorg
USE_GNOME=	gtk20
USE_XORG=	x11
MAKE_ARGS=	DATADIR="${DATADIR}" \
		INSTALL_DATA_DIR="${DATADIR}"
ALL_TARGET=	${PORTNAME}

WRKSRC=		${WRKDIR}/${PORTNAME}

LDFLAGS_i386=	-Wl,-znotext

PORTDOCS=	*
PORTDATA=	*
PLIST_FILES=	bin/${PORTNAME} \
		share/pixmaps/${PORTNAME}.ico

DESKTOP_ENTRIES="SpaceZero" \
		"" \
		"${PREFIX}/share/pixmaps/${PORTNAME}.ico" \
		"${PORTNAME}" \
		"Game;StrategyGame;" \
		""

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_DATA} ${WRKSRC}/html/manual_files/space.ico ${STAGEDIR}${PREFIX}/share/pixmaps/${PORTNAME}.ico
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	cd ${WRKSRC}/dat && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}

do-install-DOCS-on:
	cd ${WRKSRC}/html && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
