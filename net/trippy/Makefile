PORTNAME=	trippy
PORTVERSION=	0.8.0
CATEGORIES=	net

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Network diagnostic tool inspired by mtr
WWW=		https://github.com/fujiapple852/trippy

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo
USE_GITHUB=	yes
GH_ACCOUNT=	fujiapple852

OPTIONS_DEFINE=		SUID
OPTIONS_DEFAULT=	SUID
SUID_DESC=		Use suid to allow execution as non root

SUID_PLIST_FILES=	"@(,,4110) bin/trip"
SUID_PLIST_FILES_OFF=	"@(,,0100) bin/trip"

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/trip

.include <bsd.port.mk>
