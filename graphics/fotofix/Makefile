PORTNAME=	fotofix
PORTVERSION=	0.01.1.88
PORTREVISION=	1
CATEGORIES=	graphics

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple image viewer
WWW=		http://www.prima.eu.org/fotofix/

DEPRECATED=	Depends on expired graphics/IPA
EXPIRATION_DATE=2023-06-21

RUN_DEPENDS=	IPA>=1.03:graphics/IPA \
		p5-Prima>=1.22:x11-toolkits/p5-Prima

NO_ARCH=	yes

USES=		perl5 shebangfix
SHEBANG_FILES=	fotofix
USE_GITHUB=	yes
GH_ACCOUNT=	dk
GH_TAGNAME=	2a4706c

PLIST_FILES=	bin/fotofix man/man1/fotofix.1.gz

DESKTOP_ENTRIES="FotoFix" "" "" "fotofix" "" ""

do-build:
	(cd ${WRKSRC} && pod2man fotofix fotofix.1)

do-install:
	(cd ${WRKSRC} && ${INSTALL_SCRIPT} fotofix \
		${STAGEDIR}${PREFIX}/bin)
	(cd ${WRKSRC} && ${INSTALL_MAN} fotofix.1 \
		${STAGEDIR}${MANPREFIX}/man/man1)

.include <bsd.port.mk>
