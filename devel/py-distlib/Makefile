PORTNAME=	distlib
DISTVERSION=	0.3.6
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Low-level components of distutils2 and higher-level APIs
WWW=		https://bitbucket.org/pypa/distlib

LICENSE=	PSFL
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		python:3.6+
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

post-patch:
	${ECHO} "from setuptools import setup ; setup()" > ${WRKSRC}/setup.py

.include <bsd.port.mk>
