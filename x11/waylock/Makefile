PORTNAME=	waylock
DISTVERSIONPREFIX=	v
DISTVERSION=	0.6.2
CATEGORIES=	x11 wayland

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Small screenlocker for Wayland compositors
WWW=		https://github.com/ifreund/waylock

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	wayland-protocols>0:graphics/wayland-protocols \
		zig>=0.10.0:lang/zig
LIB_DEPENDS=	libwayland-client.so:graphics/wayland \
		libxkbcommon.so:x11/libxkbcommon
RUN_DEPENDS=	unix-selfauth-helper>0:security/unix-selfauth-helper

USES=		pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	ifreund
GH_TUPLE=	ifreund:zig-wayland:ace6aee:zig_wayland/deps/zig-wayland \
		ifreund:zig-xkbcommon:bfd1f97:zig_xkbcommon/deps/zig-xkbcommon
MAKE_ENV=	DESTDIR="${STAGEDIR}"
CONFIGURE_ARGS=	--prefix "${PREFIX}" \
		${WITH_DEBUG:D:U-Drelease-fast} \
		${WITH_PIE:D-Dpie} \
		${STRIP:C/.+/-Dstrip/} \
		-Dcpu=${CPUTYPE:Ubaseline} \
		--verbose
NO_INSTALL=	yes # strip(1) breaks runtime
PLIST_FILES=	bin/${PORTNAME} \
		etc/pam.d/${PORTNAME}

OPTIONS_DEFINE=	MANPAGES
OPTIONS_DEFAULT=MANPAGES

MANPAGES_BUILD_DEPENDS=	scdoc:textproc/scdoc
MANPAGES_CONFIGURE_ON=	-Dman-pages=true
MANPAGES_CONFIGURE_OFF=	-Dman-pages=false
MANPAGES_PLIST_FILES=	share/man/man1/${PORTNAME}.1.gz

post-patch:
# Respect LOCALBASE for unix-selfauth-helper
	@${REINPLACE_CMD} -e 's,/usr/local,${LOCALBASE},' \
		${WRKSRC}/pam.d/${PORTNAME}

do-build:
	@(cd ${WRKSRC} && ${MAKE_ENV} zig build ${CONFIGURE_ARGS})

.include <bsd.port.mk>
