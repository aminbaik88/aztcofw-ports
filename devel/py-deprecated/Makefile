PORTNAME=	deprecated
PORTVERSION=	1.2.13
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Deprecated-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	@deprecated decorator to deprecate old python classes, functions or methods
WWW=		https://github.com/tantale/deprecated

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}wrapt>=1.10<2:devel/py-wrapt@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
