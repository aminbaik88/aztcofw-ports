PORTNAME=	grako
DISTVERSION=	3.99.9
CATEGORIES=	textproc python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Convert EBNF grammar to PEG/Packrat parser in Python
WWW=		https://bitbucket.org/neogeny/grako

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytest-runner>0:devel/py-pytest-runner@${PY_FLAVOR}

USES=		python:3.6-3.9 zip
USE_PYTHON=	distutils cython autoplist

.include <bsd.port.mk>
