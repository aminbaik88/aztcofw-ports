PORTNAME=	open62541
DISTVERSIONPREFIX=	v
DISTVERSION=	1.3.5
CATEGORIES=	devel

MAINTAINER=	nsonack@outlook.com
COMMENT=	Open source implementation of OPC UA
WWW=		https://open62541.org/

LICENSE=	MPL20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake python shebangfix
USE_GITHUB=	yes
USE_LDCONFIG=	yes

SHEBANG_GLOB=	*.py

CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_OFF=	UA_FORCE_WERROR
BINARY_ALIAS=	python3=${PYTHON_CMD}

OPTIONS_DEFINE=		OSSL
OPTIONS_DEFAULT=	OSSL

OSSL_DESC=		Enable encryption using OpenSSL
OSSL_USES=		ssl
OSSL_CMAKE_ON=		-DUA_ENABLE_ENCRYPTION=OPENSSL
OSSL_PLIST_FILES=	include/open62541/plugin/create_certificate.h

post-install:
	${RMDIR} ${STAGEDIR}${DATADIR}/tools/ua-nodeset
	${RMDIR} ${STAGEDIR}${DATADIR}/tools/nodeset_compiler/__pycache__

.include <bsd.port.mk>
