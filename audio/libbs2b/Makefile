PORTNAME=	libbs2b
PORTVERSION=	3.1.0
PORTREVISION=	7
CATEGORIES=	audio
MASTER_SITES=	SF/bs2b/${PORTNAME}/${PORTVERSION}

MAINTAINER=	liangtai.s16@gmail.com
COMMENT=	Bauer Stereophonic-to-Binaural DSP
WWW=		http://bs2b.sourceforge.net/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libsndfile.so:audio/libsndfile

USES=		gmake libtool localbase pathfix pkgconfig tar:bzip2
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
