PORTNAME=	samurai
DISTVERSION=	1.2-16
PORTREVISION=	1
DISTVERSIONSUFFIX=	-gca5a6ba
CATEGORIES=	devel
#MASTER_SITES=	https://github.com/michaelforney/samurai/releases/download/${DISTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Ninja-compatible build tool written in C
WWW=		https://github.com/michaelforney/samurai

LICENSE=	APACHE20 MIT
LICENSE_COMB=	multi
LICENSE_FILE_APACHE20=	${WRKSRC}/LICENSE
LICENSE_FILE_MIT=	${WRKSRC}/LICENSE

USES=		cpe
CPE_VENDOR=	${PORTNAME}_project
USE_GITHUB=	yes
GH_ACCOUNT=	michaelforney
ALL_TARGET=	samu
PLIST_FILES=	bin/samu \
		share/man/man1/samu.1.gz

.include <bsd.port.mk>
