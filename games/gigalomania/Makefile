PORTNAME=	gigalomania
PORTVERSION=	0.28
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	https://launchpad.net/gigalomania/trunk/${PORTVERSION}/+download/
DISTNAME=	${PORTNAME}src

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Open source 2D real time strategy god game
WWW=		http://gigalomania.sourceforge.net/

USES=		sdl zip
USE_SDL=	image2 mixer2 sdl2

PORTDOCS=	readme.html

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|CC=g++|CC=${CXX}|' \
		-e '/^CCFLAGS/ s|-O2|${CXXFLAGS}|' \
		-e 's|-O2 $$(INC)|$$(INC)|' \
		-e 's|/usr/X11R6|${LOCALBASE}|' \
		${WRKSRC}/Makefile
	@${FIND} ${WRKSRC} -exec ${GREP} -q "__linux" {} \; \
		-exec ${REINPLACE_CMD} 's|__linux|__${OPSYS}__|' {} \;
	@${REINPLACE_CMD} 's|/opt/gigalomania/||g' \
		${WRKSRC}/gigalomania.desktop
	@${REINPLACE_CMD} 's|/usr/share|${LOCALBASE}/share|g' \
		${WRKSRC}/game.cpp \
		${WRKSRC}/gamestate.cpp

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} "gfx islands sound" \
		${STAGEDIR}${DATADIR})
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.desktop \
		${STAGEDIR}${PREFIX}/share/applications
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}64.png \
		${STAGEDIR}${PREFIX}/share/pixmaps

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/readme.html ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
