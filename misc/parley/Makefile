PORTNAME=	parley
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	misc education kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Vocabulary trainer for KDE
WWW=		https://edu.kde.org/applications/all/parley

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

USES=		cmake desktop-file-utils gettext gnome kde:5 qt:5 tar:xz xorg
USE_GNOME=	libxml2 libxslt
USE_KDE=	attica auth codecs completion configwidgets coreaddons config \
		crash doctools i18n jobwidgets kcmutils kio newstuff \
		notifications kross khtml service solid sonnet textwidgets \
		widgetsaddons windowsystem xmlgui \
		libkeduvocdocument \
		ecm:build
USE_QT=		concurrent core dbus declarative gui location network multimedia \
		printsupport script svg webchannel webengine widgets xml \
		buildtools:build qmake:build
USE_XORG=	ice sm x11 xext xrender

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
