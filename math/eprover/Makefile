PORTNAME=	eprover
DISTVERSIONPREFIX=	E-
DISTVERSION=	2.0
PORTREVISION=	1
CATEGORIES=	math

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Theorem prover for full first-order logic with equality
WWW=		https://www.eprover.org

LICENSE=	LGPL20+ GPLv2+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	bash:shells/bash \
		help2man:misc/help2man
RUN_DEPENDS=	bash:shells/bash

USES=		shebangfix
USE_GITHUB=	yes

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--bindir=${STAGEDIR}${PREFIX}/bin/ \
		--man-prefix=${STAGEDIR}${PREFIX}/man/man1/
SHEBANG_FILES=	PROVER/eproof PROVER/eproof_ram

post-build:
	@cd ${WRKSRC} && ${MAKE} man
	@${REINPLACE_CMD} -e 's|EXECPATH=.|EXECPATH=${PREFIX}/bin|' \
		${WRKSRC}/PROVER/eproof ${WRKSRC}/PROVER/eproof_ram

post-install:
.for f in checkproof e_axfilter e_deduction_server e_ltb_runner eground \
	  ekb_create ekb_delete ekb_ginsert ekb_insert epclextract eprover
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${f}
.endfor

.include <bsd.port.mk>
