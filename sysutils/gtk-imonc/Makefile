PORTNAME=	gtk-imonc
PORTVERSION=	0.6.4.1
PORTREVISION=	17
CATEGORIES=	sysutils
MASTER_SITES=	http://stefan-strigler.de/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GTK2-based imond-client to control an on(e) disc fli4l router
WWW=		http://stefan-strigler.de/gtkimonc/

LICENSE=	GPLv2+

BROKEN_FreeBSD_13=	ld: error: duplicate symbol: admin_passwd
BROKEN_FreeBSD_14=	ld: error: duplicate symbol: admin_passwd

GNU_CONFIGURE=	yes
USES=		pkgconfig gettext gnome iconv xorg
USE_GNOME=	gtk20
USE_XORG=	x11
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib -lX11

post-patch:
	@${REINPLACE_CMD} -e \
		's|/gnome/apps/Internet|/applications|' ${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} -e \
		's|/usr/share/pixmaps/||' ${WRKSRC}/gtk-imonc.desktop
	@${REINPLACE_CMD} -e \
		's|<endian.h>|<sys/endian.h>|' ${WRKSRC}/src/md5.h

.include <bsd.port.mk>
