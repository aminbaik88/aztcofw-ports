PORTNAME=	ruby-augeas
PORTVERSION=	0.5.0
PORTREVISION=	4
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby bindings for Augeas
WWW=		https://augeas.net/

LICENSE=	LGPL21

LIB_DEPENDS=	libaugeas.so:textproc/augeas

CONFIGURE_ARGS=	--with-opt-include="${LOCALBASE}/include/libxml2"
USE_GNOME=	libxml2
USES=		gem gnome pkgconfig

.include <bsd.port.mk>
