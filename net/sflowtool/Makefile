PORTNAME=	sflowtool
DISTVERSIONPREFIX=	v
DISTVERSION=	6.01
CATEGORIES=	net

MAINTAINER=	eduardo@FreeBSD.org
COMMENT=	sFlow capture and sFlow-to-NetFlow conversion tool
WWW=		https://github.com/sflow/sflowtool/

LICENSE=	InMon
LICENSE_NAME=	InMon Corp
LICENSE_FILE=	${WRKSRC}/COPYING
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USES=		autoreconf
USE_GITHUB=	yes
GH_ACCOUNT=	sflow
USE_RC_SUBR=	${PORTNAME}

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/sflowtool

PORTDOCS=	README
PORTEXAMPLES=	sflowenable

OPTIONS_DEFINE=	DOCS EXAMPLES

.include <bsd.port.options.mk>

# Patch byteswap.h where not available
.if ${OPSYS} == FreeBSD && ${OSVERSION} < 1301511
EXTRA_PATCHES=	${PATCHDIR}/extra-patch-src_sflowtool.c
.endif

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${PORTEXAMPLES:S|^|${WRKSRC}/scripts/|} ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
