PORTNAME=	editdistance
PORTVERSION=	0.6.2
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Fast implementation of the edit distance (Levenshtein distance)
WWW=		https://github.com/roy-ht/editdistance

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent cython distutils

post-patch:
# https://github.com/roy-ht/editdistance/blob/master/editdistance/bycython.pyx
	@${CP} ${FILESDIR}/bycython.pyx ${WRKSRC}/editdistance/bycython.pyx

post-install:
	${FIND} ${STAGEDIR}${PYTHON_SITELIBDIR} -name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>
