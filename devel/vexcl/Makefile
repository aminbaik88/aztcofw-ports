PORTNAME=	vexcl
DISTVERSION=	1.4.3
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ vector expression template library for OpenCL/CUDA
WWW=		https://github.com/ddemidov/vexcl

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

HPP_DEPENDS=	boost-libs>0:devel/boost-libs \
		opencl>0:devel/opencl
BUILD_DEPENDS=	${HPP_DEPENDS} \
		ocl-icd>0:devel/ocl-icd # devel/ocl-icd is probably not needed
RUN_DEPENDS=	${HPP_DEPENDS}

USES=		cmake:testing localbase:ldflags
.if !exists(/usr/include/omp.h)
USES+=		compiler:gcc-c++11-lib
.endif

USE_GITHUB=	yes
GH_ACCOUNT=	ddemidov

CMAKE_TESTING_ON=	VEXCL_BUILD_TESTS # tests pass when the OpenCL provider pocl is installed

NO_BUILD=	yes
NO_ARCH=	yes

.include <bsd.port.mk>
