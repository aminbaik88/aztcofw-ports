PORTNAME=	vpn-slice
DISTVERSION=	0.15
CATEGORIES=	security python net-vpn
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Customized VPN split-tunnel
WWW=		https://github.com/dlenski/vpn-slice

LICENSE=	GPLv3

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}dnspython>=1.16:dns/py-dnspython@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}setproctitle>=1.2:devel/py-setproctitle@${PY_FLAVOR}

USES=		python:3.3+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
