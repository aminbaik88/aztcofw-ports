PORTNAME=	rgexf
PORTVERSION=	0.16.2
PORTREVISION=	1
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${DISTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Build, Import and Export GEXF Graph Files
WWW=		https://cran.r-project.org/web/packages/rgexf/

LICENSE=	MIT

CRAN_DEPENDS=	R-cran-XML>0:textproc/R-cran-XML \
		R-cran-igraph>0:math/R-cran-igraph \
		R-cran-servr>0:www/R-cran-servr
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist

.include <bsd.port.mk>
