PORTNAME=	dotenv
PORTVERSION=	2.8.1
CATEGORIES=	misc rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Loads environment variables from .env
WWW=		https://github.com/bkeepers/dotenv

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gem

NO_ARCH=	yes

CONFLICTS_INSTALL=	py*-python-dotenv # bin/dotenv

PLIST_FILES=	bin/dotenv

.include <bsd.port.mk>
