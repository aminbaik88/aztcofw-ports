PORTNAME=	sam2p
PORTVERSION=	0.49.4
PORTREVISION=	3
PORTEPOCH=	1
CATEGORIES=	graphics
MASTER_SITES=	https://github.com/${GH_ACCOUNT}/${PORTNAME}/releases/download/v${PORTVERSION}/

MAINTAINER=	des@FreeBSD.org
COMMENT=	Converts raster (bitmap) image formats into PS or PDF files
WWW=		https://code.google.com/p/sam2p/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	bash:shells/bash
RUN_DEPENDS=	zip:archivers/zip \
		tif22pnm:graphics/tif22pnm

#USE_GITHUB=	yes
GH_ACCOUNT=	pts

USES=		cpe ghostscript:run gmake jpeg:run perl5
CPE_VENDOR=	${PORTNAME}_project
USE_GCC=	yes
USE_PERL5=	build
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-gif
MAKE_ENV=	MAKE=gmake
ALL_TARGET=	${PORTNAME}

PORTDOCS=	*
PORTEXAMPLES=	*
PLIST_FILES=	bin/${PORTNAME}

OPTIONS_DEFINE=	DOCS EXAMPLES

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

do-install-EXAMPLES-on:
	@(cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . \
		${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>
