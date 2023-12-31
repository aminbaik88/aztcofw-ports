PORTNAME=	libkgapi
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE based library to access google services
WWW=		https://progdan.cz/category/akonadi-google/

LICENSE=	LGPL21

LIB_DEPENDS=	libical.so:devel/libical \
		libsasl2.so:security/cyrus-sasl2

CONFLICTS_BUILD=	kdepim-runtime-18.0[04]* \
			kdepim-runtime-17.*

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash emoticons guiaddons i18n iconthemes init \
		itemmodels itemviews jobwidgets kdelibs4support kio \
		notifications parts service textwidgets unitconversion \
		widgetsaddons windowsystem xmlgui solid sonnet wallet \
		ecm:build
# pim components
USE_KDE+=	calendarcore contacts
USE_QT=		concurrent core dbus declarative gui location network \
		printsupport webchannel webengine widgets xml \
		buildtools:build qmake:build

USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
