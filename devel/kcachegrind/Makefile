PORTNAME=	kcachegrind
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	devel kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Profiler frontend for KDE
WWW=		https://www.kde.org

USES=		cmake compiler:c++11-lang desktop-file-utils kde:5 python:run qt:5 \
		shebangfix tar:xz xorg
USE_KDE=	archive auth bookmarks codecs completion config configwidgets \
		coreaddons dbusaddons i18n itemviews jobwidgets kio service solid \
		widgetsaddons windowsystem xmlgui \
		ecm:build
USE_QT=		concurrent core dbus gui network widgets xml \
		buildtools:build qmake:build
USE_XORG=	x11

SHEBANG_FILES=	converters/dprof2calltree \
		converters/hotshot2calltree.in \
		converters/memprof2calltree \
		converters/op2calltree

OPTIONS_DEFINE=	DOT VALGRIND DOCS

DOT_DESC=		Use GraphViz/dot to render call graphs
DOT_RUN_DEPENDS=	dot:graphics/graphviz

VALGRIND_DESC=		Install devel/valgrind
VALGRIND_RUN_DEPENDS=	valgrind:devel/valgrind

.include <bsd.port.mk>
