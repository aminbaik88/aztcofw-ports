PORTNAME=	gtfparse
DISTVERSION=	1.3.0
PORTREVISION=	1
CATEGORIES=	biology python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Parsing tools for GTF (gene transfer format) files
WWW=		https://github.com/openvax/gtfparse

LICENSE=	APACHE20

RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}pandas>=0.15:math/py-pandas@${PY_FLAVOR}

USES=		python:3.7+
USE_PYTHON=	distutils autoplist

NO_ARCH=	yes

.include <bsd.port.mk>
