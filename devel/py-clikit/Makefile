PORTNAME=	clikit
PORTVERSION=	0.6.2
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Utilities to build beautiful and testable command line interfaces
WWW=		https://github.com/sdispater/clikit

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}crashtest>=0.3.0:devel/py-crashtest@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pastel>=0.2.0:devel/py-pastel@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pylev>=1.3<2.0:devel/py-pylev@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
