PORTNAME=	kolourpaint
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE paint program
WWW=		http://www.kolourpaint.org

USES=		cmake compiler:c++11-lang desktop-file-utils gettext \
		kde:5 qt:5 tar:xz xorg
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash emoticons guiaddons i18n iconthemes init \
		itemmodels itemviews jobwidgets kdelibs4support kio libkexiv2 \
		libksane notifications parts service solid sonnet textwidgets \
		unitconversion widgetsaddons windowsystem xmlgui \
		ecm:build
USE_QT=		dbus concurrent core gui network printsupport widgets xml \
		buildtools:build qmake:build
USE_XORG=	x11
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
