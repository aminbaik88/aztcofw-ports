PORTNAME=	gpds
DISTVERSION=	1.5.1
CATEGORIES=	devel

MAINTAINER=	jbo@insane.engineer
COMMENT=	General purpose data serializer library written in modern C++
WWW=		https://gpds.simulton.com/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/license.txt

RUN_DEPENDS=	spdlog>=1.9.0:devel/spdlog

USES=		cmake compiler:c++17-lang
USE_GITHUB=	yes
GH_ACCOUNT=	simulton

CMAKE_OFF=	GPDS_BUILD_EXAMPLES GPDS_BUILD_TESTS
CMAKE_ON=	GPDS_FEATURE_SPDLOG

.include <bsd.port.mk>
