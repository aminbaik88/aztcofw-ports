PORTNAME=	webp-pixbuf-loader
DISTVERSION=	0.0.3
PORTEPOCH=	1
CATEGORIES=	graphics

MAINTAINER=	ports@FreeBSD.org
COMMENT=	WebP image loader plugin for GdkPixbuf2
WWW=		https://github.com/aruiz/webp-pixbuf-loader

LICENSE=	LGPL20+

LIB_DEPENDS=	libwebp.so:graphics/webp

USES=		gnome meson pkgconfig
USE_GNOME=	gdkpixbuf2

USE_GITHUB=	yes
GH_ACCOUNT=	aruiz

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/gdk-pixbuf-2.0/*/loaders/*

.include <bsd.port.mk>
