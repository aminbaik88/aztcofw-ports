PORTNAME=	NMF
PORTVERSION=	0.21.0
PORTREVISION=	4
CATEGORIES=	math
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Algorithms and Framework for Nonnegative Matrix Factorization
WWW=		https://cran.r-project.org/web/packages/NMF/

LICENSE=	GPLv2+

BROKEN=		does not build with R 4.3.0+

CRAN_DEPENDS=	R-cran-pkgmaker>=0.20:devel/R-cran-pkgmaker \
		R-cran-registry>0:devel/R-cran-registry \
		R-cran-rngtools>=1.2.3:devel/R-cran-rngtools \
		R-cran-stringr>=1.0.0:textproc/R-cran-stringr \
		R-cran-digest>0:security/R-cran-digest \
		R-cran-gridBase>0:graphics/R-cran-gridBase \
		R-cran-colorspace>0:graphics/R-cran-colorspace \
		R-cran-RColorBrewer>0:graphics/R-cran-RColorBrewer \
		R-cran-foreach>0:devel/R-cran-foreach \
		R-cran-doParallel>0:devel/R-cran-doParallel \
		R-cran-ggplot2>0:graphics/R-cran-ggplot2 \
		R-cran-reshape2>0:devel/R-cran-reshape2
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist,compiles

.include <bsd.port.mk>
