PORTNAME=	gromit
PORTVERSION=	20041213
PORTREVISION=	9
CATEGORIES=	x11
MASTER_SITES=	http://www.home.unix-ag.org/simon/gromit/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GRaphics Over Miscellaneous Objects (Gromit)
WWW=		https://www.home.unix-ag.org/simon/gromit/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gnome pkgconfig xorg
USE_GNOME=	gtk20
USE_XORG=	x11

DOCS=		AUTHORS ChangeLog README

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gromit ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/gromitrc ${STAGEDIR}${EXAMPLESDIR}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${DOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
