PORTNAME=	unuran
PORTVERSION=	1.10.0
CATEGORIES=	math
MASTER_SITES=	http://statmath.wu-wien.ac.at/unuran/

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Universal Non-Uniform RANdom number generators
WWW=		http://statmath.wu-wien.ac.at/unuran/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	librngstreams.so:math/rngstreams

USES=		gmake libtool localbase:ldflags
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-shared --with-urng-rngstream --with-urng-default=rngstream \
		--enable-info
MAKE_ENV=	MAKE="${MAKE_CMD}"

USE_LDCONFIG=	yes
INFO=		unuran
PORTDOCS=	unuran.pdf unuran.txt

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e '/UNURANFULLCHECK=true make check/s/make/${MAKE_CMD}/' \
		${WRKSRC}/Makefile.in

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for DD in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/doc/${DD} ${STAGEDIR}${DOCSDIR}
.endfor

.ifdef(MAINTAINER_MODE)
CONFIGURE_ARGS+=	--enable-check-struct --enable-logging

do-test:
	@(cd ${WRKSRC}; ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} check)

fullcheck: build
	@(cd ${WRKSRC}; ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} fullcheck)

.endif

.include <bsd.port.mk>
