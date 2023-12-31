PORTNAME=	feedbackd
DISTVERSIONPREFIX=	v
DISTVERSION=	0.1.0
CATEGORIES=	accessibility

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Haptic/visual/audio feedback for GNOME
WWW=		https://source.puri.sm/Librem5/feedbackd

LICENSE=	GPLv3+ LGPL21+
LICENSE_COMB=	multi
LICENSE_FILE_GPLv3+ =	${WRKSRC}/COPYING
LICENSE_FILE_LGPL21+ =	${WRKSRC}/COPYING.LIB

USES=		compiler:c11 gnome meson pkgconfig python:build shebangfix
USE_GITLAB=	yes
USE_GNOME=	glib20
USE_LDCONFIG=	yes
GL_SITE=	https://source.puri.sm
GL_ACCOUNT=	Librem5
GL_COMMIT=	2db8a72ef9432f80894eb5b36ce1e667496a931b
GL_TUPLE=	https://gitlab.gnome.org:guidog:gmobile:ff854988bff80f2d4c1181ccf3c94b032603b6f9:gmobile/subprojects/gmobile
SHEBANG_FILES=	build-aux/post_install.py
GLIB_SCHEMAS=	org.sigxcpu.feedbackd.gschema.xml

OPTIONS_DEFINE=	DAEMON DOCS GIR MANPAGES VAPI
OPTIONS_DEFAULT=DAEMON DOCS GIR MANPAGES VAPI
OPTIONS_SUB=	yes

DAEMON_DESC=		Build DBus daemon
DAEMON_BUILD_DEPENDS=	evdev-proto>0:devel/evdev-proto \
			libepoll-shim>0:devel/libepoll-shim
DAEMON_LIB_DEPENDS=	libjson-glib-1.0.so:devel/json-glib \
			libgudev-1.0.so:devel/libgudev
DAEMON_USE=		GNOME=gsound
DAEMON_MESON_TRUE=	daemon

DOCS_BUILD_DEPENDS=	gi-docgen:textproc/py-gi-docgen
DOCS_MESON_TRUE=	gtk_doc
DOCS_VARS=		DOCSDIR="${PREFIX}/share/doc/libfeedback-0"

GIR_DESC=		Build Gobject Introspection
GIR_USE=		GNOME=introspection:build
GIR_MESON_ENABLED=	introspection

MANPAGES_BUILD_DEPENDS=	rst2man:textproc/py-docutils
MANPAGES_MESON_TRUE=	man

VAPI_USES=		vala:build
VAPI_MESON_TRUE=	vapi
VAPI_IMPLIES=		GIR

.include <bsd.port.mk>
