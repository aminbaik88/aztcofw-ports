PORTNAME=	lxqt-build-tools
PORTVERSION=	0.12.0
CATEGORIES=	devel
MASTER_SITES=	LXQT/${PORTNAME}

MAINTAINER=	jsm@FreeBSD.org
COMMENT=	Helpers CMake modules for LXQt
WWW=		https://github.com/lxde/lxqt-build-tools

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/BSD-3-Clause

USES=		cmake lxqt pkgconfig qt:5 tar:xz gnome
USE_QT=		qmake:build buildtools:build core
USE_GNOME=	glib20

.include <bsd.port.mk>
