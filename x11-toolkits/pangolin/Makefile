PORTNAME=	pangolin
DISTVERSIONPREFIX=	v
DISTVERSION=	0.8-54
PORTREVISION=	3
DISTVERSIONSUFFIX=	-gfe57db53
CATEGORIES=	x11-toolkits

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Lightweight rapid development library for managing OpenGL display
WWW=		https://github.com/stevenlovegrove/Pangolin

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENCE

LIB_DEPENDS=	libavcodec.so:multimedia/ffmpeg \
		liblz4.so:archivers/liblz4 \
		libpng.so:graphics/png \
		libtiff.so:graphics/tiff \
		libzstd.so:archivers/zstd \
		libwayland-client.so:graphics/wayland \
		libxkbcommon.so:x11/libxkbcommon

USES=		cmake compiler:c++17-lang eigen:3 gl jpeg localbase:ldflags pkgconfig xorg
USE_XORG=	ice sm x11 xext
USE_GL=		gl glew glu
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	stevenlovegrove
GH_PROJECT=	Pangolin

CMAKE_OFF=	BUILD_PANGOLIN_PYTHON

LDFLAGS+=	-pthread

.include <bsd.port.mk>
