PORTNAME=	calligraplan
DISTVERSION=	3.3.0
PORTREVISION=	3
CATEGORIES=	editors kde
MASTER_SITES=	KDE/stable/calligra/${PORTVERSION}
DIST_SUBDIR=	KDE/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Calligra project management application
WWW=		https://www.calligra.org/plan/

LIB_DEPENDS=	libKChart.so:graphics/kdiagram

USES=		cmake compiler:c++11-lib desktop-file-utils kde:5 \
		qt:5 tar:xz xorg
USE_KDE=	activities akonadi archive auth bookmarks codecs completion config \
		configwidgets coreaddons dbusaddons ecm guiaddons holidays i18n \
		iconthemes itemmodels itemviews jobwidgets js khtml kio \
		notifications parts service solid sonnet textwidgets wallet \
		widgetsaddons windowsystem xmlgui \
		akonadicontacts calendarcore contacts \
		doctools:build
USE_QT=		concurrent core dbus gui network printsupport widgets x11extras xml \
		buildtools:build qmake:build
USE_XORG=	ice sm x11 xext

PLIST_SUB+=	SHLIB_VER=18.0.0 SHLIB_SHORT=18

.include <bsd.port.mk>
