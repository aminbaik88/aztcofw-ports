PORTNAME=	python-gdsii
PORTVERSION=	0.2.1
CATEGORIES=	cad python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	GDSII manipulation library
WWW=		https://pythonhosted.org/python-gdsii/

LICENSE=	LGPL3+
LICENSE_FILE=	${WRKSRC}/LGPL-3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yaml>0:devel/py-yaml@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
