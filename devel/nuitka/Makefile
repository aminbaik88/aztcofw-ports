PORTNAME=	nuitka
PORTVERSION=	1.5
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMESUFFIX=	${PYTHON_PKGNAMESUFFIX}
DISTNAME=	Nuitka-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Compatible and efficient Python compiler
WWW=		https://nuitka.net/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ordered-set>=4.1.0:devel/py-ordered-set@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}zstandard>=0.15:archivers/py-zstandard@${PY_FLAVOR}

USES=		cpe python:3.6+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
