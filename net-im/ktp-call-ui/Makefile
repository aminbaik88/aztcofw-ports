PORTNAME=	ktp-call-ui
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Voice/Video Call UI for Telepathy
WWW=		https://community.kde.org/KTp

LICENSE=	GPLv2+ LGPL21+
LICENSE_COMB=	multi
LICENSE_FILE_GPLv2+ =	${WRKSRC}/COPYING
LICENSE_FILE_LGPL21+ =	${WRKSRC}/COPYING.LIB

LIB_DEPENDS=	libKTpCommonInternals.so:net-im/ktp-common-internals \
		libQt5GStreamer-1.0.so:multimedia/gstreamer1-qt \
		libboost_thread.so:devel/boost-libs \
		libfarstream-0.2.so:net-im/farstream \
		libtelepathy-farstream.so:net-im/telepathy-farstream \
		libtelepathy-glib.so:net-im/telepathy-glib \
		libtelepathy-qt5-farstream.so:net-im/telepathy-qt

USES=		cmake compiler:c++11-lang gettext gnome gstreamer kde:5 pkgconfig \
		python qt:5 tar:xz
USE_GNOME=	glib20
USE_KDE=	auth codecs config configwidgets coreaddons iconthemes \
		i18n kcmutils kdeclarative notifications package service \
		wallet widgetsaddons xmlgui \
		ecm:build
USE_QT=		core dbus declarative gui network widgets xml \
		buildtools:build qmake:build
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
