PORTNAME=	lskat
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME:tu}_DESC}
WWW=		https://www.kde.org/applications/games/lskat/

USES=		cmake compiler:c++11-lang kde:5 qt:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons crash \
		guiaddons i18n libkdegames notifyconfig widgetsaddons xmlgui \
		ecm:build
USE_QT=		core dbus declarative gui network svg widgets xml \
		buildtools:build qmake:build

OPTIONS_DEFINE=	DOCS

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
