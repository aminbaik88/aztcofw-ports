PORTNAME=	xfce4-cpugraph-plugin
PORTVERSION=	1.2.7
PORTREVISION=	1
CATEGORIES=	sysutils xfce
MASTER_SITES=	XFCE/panel-plugins
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Graphical representation of the CPU load
WWW=		https://goodies.xfce.org/projects/panel-plugins/xfce4-cpugraph-plugin

LICENSE=	GPLv2

USES=		compiler:c11 gettext-tools gmake gnome libtool pkgconfig \
		tar:bzip2 xfce
USE_CSTD=	c99
USE_GNOME=	cairo gtk30 intltool
USE_XFCE=	panel

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
