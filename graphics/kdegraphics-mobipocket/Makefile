PORTNAME=	kdegraphics-mobipocket
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Mobipocket plugins for Strigi indexing and thumbnails
WWW=		https://www.kde.org

USES=		cmake compiler:c++11-lang kde:5 qt:5 tar:xz
USE_KDE=	completion config coreaddons jobwidgets kio service solid \
		widgetsaddons windowsystem \
		ecm:build
USE_QT=		concurrent core dbus gui network widgets \
		buildtools:build qmake:build

USE_LDCONFIG=	yes

.include <bsd.port.mk>
