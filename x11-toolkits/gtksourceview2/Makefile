PORTNAME=	gtksourceview2
PORTVERSION=	2.10.5
PORTREVISION?=	9
CATEGORIES=	x11-toolkits gnome
MASTER_SITES=	GNOME/sources/${PORTNAME:S/2$//}/${PORTVERSION:C/^([0-9]+\.[0-9]+).*/\1/}
DISTNAME=	${PORTNAME:S/2$//}-${PORTVERSION}
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Widget that adds syntax highlighting to GtkTextView

USES=		tar:bzip2

PORTSCOUT=	ignore:1

USES+=		gettext gmake gnome libtool localbase pathfix pkgconfig
USE_LDCONFIG=	yes
USE_GNOME=	gnomeprefix gtk20 libxml2 intlhack
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-compile-warnings=no --enable-glade-catalog=no
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
