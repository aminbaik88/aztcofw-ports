PORTNAME=	pyinstaller
PORTVERSION=	3.5
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyInstaller-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Program to create standalone executables from Python scripts
WWW=		https://www.pyinstaller.org/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}altgraph>0:math/py-altgraph@${PY_FLAVOR}

USES=		cpe python:3.6+
USE_PYTHON=	autoplist concurrent distutils

EXTRACT_AFTER_ARGS=	--exclude doc/source --no-same-owner --no-same-permissions
DOCSDIR=	${PREFIX}/share/doc/${PYTHON_PKGNAMEPREFIX}${PORTNAME}
PORTDOCS=	*.txt

OPTIONS_DEFINE=		DOCS MANPAGES
OPTIONS_DEFAULT=	MANPAGES
OPTIONS_SUB=		yes

DOCS_BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sphinx>0:textproc/py-sphinx@${PY_FLAVOR} \
			${PYTHON_PKGNAMEPREFIX}sphinx_rtd_theme>0:textproc/py-sphinx_rtd_theme@${PY_FLAVOR}
DOCS_MAKE_ARGS=		SPHINXBUILD=sphinx-build-${PYTHON_VER}
DOCS_USES=		gmake
MANPAGES_BUILD_DEPENDS=	${DOCS_BUILD_DEPENDS}
MANPAGES_MAKE_ARGS=	${DOCS_MAKE_ARGS}
MANPAGES_USES=		gmake

post-patch:
	@${REINPLACE_CMD} -e '/install_requires/s,distribute,setuptools,' \
		${WRKSRC}/${PYSETUP}
	@${REINPLACE_CMD} -e '/\/sbin\/ldconfig/s,-p,-r,' \
		${WRKSRC}/PyInstaller/depend/utils.py
	${INSTALL_DATA} ${WRKSRC}/PyInstaller/utils/cliutils/makespec.py ${WRKSRC}/makespec.py

pre-build:
	cd ${WRKSRC}/bootloader && \
		${PYTHON_CMD} waf all

do-install-MANPAGES-on:
	( cd ${WRKSRC}/doc; ${SETENV} ${MAKE_ENV} ${MAKE_CMD} man ${MAKE_ARGS})
	( cd ${WRKSRC}/doc/_build/man ; ${INSTALL_MAN} pyi-makespec.1 pyinstaller.1 \
		${STAGEDIR}${PREFIX}/share/man/man1 )

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC}/doc ; ${SETENV} ${MAKE_ENV} ${MAKE_CMD} text ${MAKE_ARGS})
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/doc/_build/text/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
