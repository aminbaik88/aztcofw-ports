PORTNAME=	libaccounts-qt5
DISTVERSION=	1.16
PORTREVISION=	4
CATEGORIES=	net-im
DIST_SUBDIR=	KDE/${GL_ACCOUNT}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt5 wrapper for SSO framework
WWW=		https://code.google.com/p/accounts-sso/

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libaccounts-glib.so:net-im/libaccounts-glib

USES=		compiler:c++17-lang gettext-runtime gnome qmake \
		pathfix pkgconfig python qt:5 tar:bz2
USE_GNOME=	glib20
USE_QT=		buildtools:build core qmake:build testlib xml

# gitlab variables
USE_GITLAB=	yes
GL_ACCOUNT=	accounts-sso
GL_PROJECT=	libaccounts-qt
GL_COMMIT=	525ec684cfa8d234f797d7e49e21c476eea04d8e

OPTIONS_DEFINE=	DOCS
OPTIONS_SUB=	yes

DOCS_BUILD_DEPENDS=	doxygen:devel/doxygen
DOCS_QMAKE_ON=		CONFIG+=docs

pre-configure:
	${REINPLACE_CMD} -e 's,$$$${INSTALL_LIBDIR},${LOCALBASE}/libdata,' \
		${WRKSRC}/common-pkgconfig.pri

.include <bsd.port.mk>
