PORTNAME=	bencodetools
PORTVERSION=	g20221122
CATEGORIES=	devel

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Collection of tools for manipulating bencoded data
WWW=		https://gitlab.com/heikkiorsila/bencodetools

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	bash:shells/bash

USES=		shebangfix
USE_GITLAB=	yes
GL_ACCOUNT=	heikkiorsila
GL_COMMIT=	f08cb85806d5b188f3af04cd21393dd8eb51b287
USE_LDCONFIG=	yes

SHEBANG_FILES=	configure

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--c-compiler=${CC} \
		--package-prefix=${STAGEDIR} \
		--prefix=${PREFIX} \
		--without-python

PLIST_FILES=	bin/bencat \
		include/bencodetools/bencode.h \
		lib/libbencodetools.so

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/bencat \
		${STAGEDIR}${PREFIX}/lib/libbencodetools.so

.include <bsd.port.mk>
