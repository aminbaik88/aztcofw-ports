PORTNAME=	gnome-shell-extension-lockkeys
PORTVERSION=	0.0.0.20180511
PORTREVISION=	2
CATEGORIES=	deskutils gnome
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Gnome-shell Numlock and Capslock indicator
WWW=		https://github.com/kazysmaster/gnome-shell-extension-lockkeys

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/lockkeys@vaina.lt/LICENSE

BUILD_DEPENDS=	gnome-shell>=0:x11/gnome-shell \
		gsettings-desktop-schemas>=3.12.0:devel/gsettings-desktop-schemas
RUN_DEPENDS=	gnome-shell>=0:x11/gnome-shell \
		gsettings-desktop-schemas>=3.12.0:devel/gsettings-desktop-schemas

USES=		gettext gmake gnome localbase pkgconfig
USE_GNOME=	glib20
USE_GITHUB=	yes

GLIB_SCHEMAS=	org.gnome.shell.extensions.lockkeys.gschema.xml

GH_ACCOUNT=	kazysmaster
GH_TAGNAME=	0bf0917

PKGMESSAGE=	../gnome-shell-extra-extensions/pkg-message.slaves

NO_BUILD=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/glib-2.0/schemas/
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/gnome-shell/extensions/
	${INSTALL_DATA} ${WRKSRC}/lockkeys\@vaina.lt/schemas/org.gnome.shell.extensions.lockkeys.gschema.xml \
		${STAGEDIR}${PREFIX}/share/glib-2.0/schemas/
	@${RM} -r ${WRKSRC}/lockkeys\@vaina.lt/schemas/
	cd ${WRKSRC} && ${COPYTREE_SHARE} lockkeys\@vaina.lt \
		${STAGEDIR}${PREFIX}/share/gnome-shell/extensions/

.include <bsd.port.mk>
