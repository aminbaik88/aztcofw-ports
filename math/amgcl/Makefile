PORTNAME=	amgcl
DISTVERSION=	1.4.3
PORTREVISION=	1
CATEGORIES=	math

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ header-only library for solving large sparse linear systems
WWW=		https://github.com/ddemidov/amgcl

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BUILD_DEPENDS=	boost-libs>0:devel/boost-libs
RUN_DEPENDS=	${PREFIX}/include/boost/property_tree/ptree.hpp:devel/boost-libs

USES=		cmake
.if !exists(/usr/include/omp.h)
USES+=		compiler:gcc-c++11-lib
.endif

USE_GITHUB=	yes
GH_ACCOUNT=	ddemidov

NO_BUILD=	yes
NO_ARCH=	yes

do-test:
	@cd ${BUILD_WRKSRC} && \
		${SETENV} ${CONFIGURE_ENV} ${CMAKE_BIN} ${CMAKE_ARGS} -DAMGCL_BUILD_TESTS:BOOL=ON ${CMAKE_SOURCE_PATH} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} ${ALL_TARGET} && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} test

.include <bsd.port.mk>
