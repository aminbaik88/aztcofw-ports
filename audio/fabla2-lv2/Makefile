PORTNAME=	fabla2
DISTVERSION=	g20180331
PORTREVISION=	3
CATEGORIES=	audio
PKGNAMESUFFIX=	-lv2

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Sampler with multiple layers, banks, pads, integrated FX and routing
WWW=		http://openavproductions.com/fabla2/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	lv2>0:audio/lv2
LIB_DEPENDS=	libsamplerate.so:audio/libsamplerate \
		libsndfile.so:audio/libsndfile

USES=		cmake compiler:c++11-lang gnome pkgconfig xorg
USE_GITHUB=	yes
GH_ACCOUNT=	openAVproductions
GH_PROJECT=	openAV-Fabla2
GH_TAGNAME=	33f4062
USE_GNOME=	cairo
USE_XORG=	x11

CFLAGS+=	-I${FILESDIR}

PLIST_FILES=	lib/lv2/fabla2.lv2/fabla2.so \
		lib/lv2/fabla2.lv2/fabla2.ttl \
		lib/lv2/fabla2.lv2/fabla2ui.so \
		lib/lv2/fabla2.lv2/manifest.ttl

post-patch:
	@${REINPLACE_CMD} -e 's|GLOB srcUI  |GLOB srcUI  ${FILESDIR}/mntent_compat.c++ |' ${WRKSRC}/CMakeLists.txt
.for f in src/ui.cxx src/ui/avtk/lv2/testUi.cxx
	@cd ${WRKSRC} && ${REINPLACE_CMD} -e 's/ _LV2UI_Descriptor/ LV2UI_Descriptor/' ${f} # fix for audio/lv2 1.18.0
.endfor

.include <bsd.port.mk>
