PORTNAME=	more-itertools
PORTVERSION=	8.14.0
PORTREVISION=	2
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	More routines for operating on iterables, beyond itertools
WWW=		https://github.com/more-itertools/more-itertools

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}flit-core>=3.2<4:devel/py-flit-core@${PY_FLAVOR}

USES=		python:3.5+
USE_PYTHON=	autoplist concurrent pep517 unittest

NO_ARCH=	yes

.include <bsd.port.mk>
