PORTNAME=	cpp-peglib
DISTVERSIONPREFIX=	v
DISTVERSION=	1.8.3
CATEGORIES=	textproc devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ header-only PEG (Parsing Expression Grammars) library
WWW=		https://github.com/yhirose/cpp-peglib

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	${LOCALBASE}/include/gtest/gtest.h:devel/googletest

USES=		cmake:testing compiler:c++17-lang localbase:ldflags

USE_GITHUB=	yes
GH_ACCOUNT=	yhirose

CMAKE_OFF=	BUILD_TESTS
CMAKE_TESTING_ON=	BUILD_TESTS # tests fail to link, possibly because googletest is 1.12.1, when the latest version is 1.13.0

NO_ARCH=	yes

PLIST_FILES=	include/peglib.h

.include <bsd.port.mk>
