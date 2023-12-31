PORTNAME=	OpenFermion
DISTVERSIONPREFIX=	v
DISTVERSION=	1.5.1
PORTREVISION=	2
CATEGORIES=	science python # quantum-computing
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Electronic structure package for quantum computers
WWW=		https://github.com/quantumlib/OpenFermion

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

PY_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cirq-core>=0.15.0:science/py-cirq-core@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}cirq-google>=0.15.0:science/py-cirq-google@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}deprecation>0:devel/py-deprecation@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}h5py>=2.8:science/py-h5py@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}networkx>0:math/py-networkx@${PY_FLAVOR} \
		${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}PubChemPy>0:science/py-PubChemPy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=2.18:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scipy>=1.1.0:science/py-scipy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sympy>0:math/py-sympy@${PY_FLAVOR}
BUILD_DEPENDS=	${PY_DEPENDS}
RUN_DEPENDS=	${PY_DEPENDS}

USES=		python:3.7+
USE_PYTHON=	distutils autoplist

USE_GITHUB=	yes
GH_ACCOUNT=	quantumlib

NO_ARCH=	yes

.include <bsd.port.mk>
