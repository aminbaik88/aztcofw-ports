PORTNAME=	crossfire-client
PORTVERSION=	1.75.2
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	SF/crossfire/${PORTNAME}/${PORTVERSION}

MAINTAINER=	kevinz5000@gmail.com
COMMENT=	Cooperative multiplayer graphical RPG and adventure game
WWW=		https://crossfire.real-time.com/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libcurl.so:ftp/curl

USES=		cmake gnome perl5 pkgconfig sdl vala:build
USE_GNOME=	gtk20
USE_PERL5=	build
USE_SDL=	sdl image mixer

CMAKE_ARGS=	-DLUA=OFF -DMETASERVER2=ON -DSOUND=ON

.include <bsd.port.mk>
