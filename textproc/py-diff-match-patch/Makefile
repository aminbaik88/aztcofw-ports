PORTNAME=	diff-match-patch
PORTVERSION=	20200713
CATEGORIES=	textproc python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Algorithms for converting plain text
WWW=		https://github.com/diff-match-patch-python/diff-match-patch

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python:3.6+ shebangfix
USE_PYTHON=	autoplist concurrent distutils unittest

NO_ARCH=	yes

python_OLD_CMD=	/usr/bin/python[0-9\.]*
SHEBANG_GLOB=	*.py

.include <bsd.port.mk>
