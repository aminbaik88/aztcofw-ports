PORTNAME=	zope.broken
PORTVERSION=	3.6.0
PORTREVISION=	1
CATEGORIES=	devel python zope
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DIST_SUBDIR=	zope

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Zope Broken Object Interfaces
WWW=		https://pypi.org/project/zope.broken/

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=0:devel/py-zope.interface@${PY_FLAVOR}

USES=		python:3.6+ zip
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
