PORTNAME=	mod_memcache
PORTVERSION=	0.1.0
PORTREVISION=	5
CATEGORIES=	www
PKGNAMEPREFIX=	${APACHE_PKGNAMEPREFIX}

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	Apache 2.2.x module to manage apr_memcache connections
WWW=		https://github.com/joshrotenberg/modmemcache

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		apache
USE_GITHUB=	yes
GH_ACCOUNT=	joshrotenberg
GH_PROJECT=	modmemcache
GH_TAGNAME=	8e6d912

AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
SRC_FILE=	src/${PORTNAME}.c

.include <bsd.port.mk>
