PORTNAME=	typed-ast
PORTVERSION=	1.5.4
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	typed_ast-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Fork of Python ast modules with type comment support
WWW=		https://github.com/python/typed_ast

LICENSE=	APACHE20 PSFL
LICENSE_COMB=	multi
LICENSE_FILE_APACHE20=	${WRKSRC}/LICENSE

USES=		python:3.6+
USE_PYTHON=	autoplist concurrent distutils

post-install:
	${FIND} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR} -name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>
