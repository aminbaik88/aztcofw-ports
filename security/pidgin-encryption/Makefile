PORTNAME=	pidgin
PORTVERSION=	3.1
PORTREVISION=	8
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}-encrypt/Releases/${PORTVERSION}
PKGNAMESUFFIX=	-encryption
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

MAINTAINER=	perlfu@gmail.com
COMMENT=	Encryption Plugin for the Pidgin instant messenger client
WWW=		http://pidgin-encrypt.sf.net

BUILD_DEPENDS=	${LOCALBASE}/bin/pidgin:net-im/pidgin
RUN_DEPENDS=	${LOCALBASE}/bin/pidgin:net-im/pidgin
LIB_DEPENDS=	libpurple.so:net-im/libpurple \
		libnss3.so:security/nss

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static \
		--with-nspr-includes=${LOCALBASE}/include/nspr	\
		--with-nspr-libs=${LOCALBASE}/lib	\
		--with-nss-includes=${LOCALBASE}/include/nss \
		--with-nss-libs=${LOCALBASE}/lib
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip
USES=		gettext gmake gnome libtool pkgconfig
USE_GNOME=	gtk20

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes
NLS_CONFIGURE_ENABLE=	nls
NLS_USES=	gettext

post-extract:
	@${REINPLACE_CMD} -e 's|glib/.*\.h"|glib.h"|g' ${WRKSRC}/rsa_nss.c

.include <bsd.port.mk>
