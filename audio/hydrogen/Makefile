PORTNAME=	hydrogen
DISTVERSION=	1.1.1
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	https://github.com/hydrogen-music/${PORTNAME}/releases/download/${DISTVERSION}/ \
		SF/hydrogen/Hydrogen/${DISTVERSION}%20Sources/

MAINTAINER=	FreeBSD@ShaneWare.Biz
COMMENT=	Advanced drum machine
WWW=		http://www.hydrogen-music.org/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libsndfile.so:audio/libsndfile \
		liblo.so:audio/liblo

USES=		cmake compiler:c++17-lang desktop-file-utils pkgconfig \
		localbase qt:5
USE_QT=		core gui network widgets xml xmlpatterns buildtools:build \
		linguisttools:build qmake:build testlib:build
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_INSTALL_MANDIR=${LOCALBASE}/man

OPTIONS_SINGLE=		EXPORT
OPTIONS_SINGLE_EXPORT=	LIBARCHIVE LIBTAR
OPTIONS_DEFINE=		ALSA DEBUG JACK LADSPA LASH OSS PORTAUDIO \
			PULSEAUDIO RDF TEST
OPTIONS_DEFAULT=	JACK LADSPA LIBARCHIVE OSS RDF

EXPORT_DESC=		Export support for drumkit

ALSA_CMAKE_BOOL=	WANT_ALSA
ALSA_LIB_DEPENDS=	libasound.so:audio/alsa-lib
ALSA_RUN_DEPENDS=	alsa-plugins>=0:audio/alsa-plugins

DEBUG_CMAKE_BOOL=	WANT_DEBUG

JACK_CMAKE_BOOL=	WANT_JACK WANT_JACKSESSION
JACK_LIB_DEPENDS=	libjack.so:audio/jack

LADSPA_CMAKE_BOOL=	WANT_LADSPA
LADSPA_CMAKE_ON=	-DLADSPA_LIBRARIES:STRING=${LOCALBASE}/lib/ladspa
LADSPA_BUILD_DEPENDS=	ladspa>=0:audio/ladspa
LADSPA_RUN_DEPENDS=	analyseplugin:audio/ladspa

LASH_CMAKE_BOOL=	WANT_LASH
LASH_LIB_DEPENDS=	liblash.so:audio/lash

LIBARCHIVE_DESC=	LibArchive support
LIBARCHIVE_CMAKE_BOOL=	WANT_LIBARCHIVE
LIBARCHIVE_USES=	libarchive

LIBTAR_DESC=		Libtar support
LIBTAR_CMAKE_BOOL=	WANT_LIBTAR
LIBTAR_CMAKE_ON=	-DCMAKE_REQUIRED_INCLUDES:STRING=${LOCALBASE}/include/
LIBTAR_LIB_DEPENDS=	libtar.so:devel/libtar

OSS_CMAKE_BOOL=		WANT_OSS

PORTAUDIO_CMAKE_BOOL=	WANT_PORTAUDIO
PORTAUDIO_LIB_DEPENDS=	libportaudio.so:audio/portaudio

PULSEAUDIO_CMAKE_BOOL=	WANT_PULSEAUDIO
PULSEAUDIO_LIB_DEPENDS=	libpulse.so:audio/pulseaudio

RDF_DESC=		RDF File support
RDF_CMAKE_BOOL=		WANT_LRDF
RDF_CMAKE_ON=		-DLRDF_INCLUDE_DIR:STRING=${LOCALBASE}/include/raptor2
RDF_LIB_DEPENDS=	liblrdf.so:textproc/liblrdf

TEST_CMAKE_BOOL=	WANT_CPPUNIT
TEST_BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/cppunit.pc:devel/cppunit
TEST_LDFLAGS=		-lexecinfo

post-patch:
	@${REINPLACE_CMD} 's|EXISTS(tar|EXISTS(${LOCALBASE}/lib/libtar.so|g' \
		${WRKSRC}/CMakeLists.txt

do-test-TEST-on:
	cd ${WRKSRC} && ./src/tests/tests

.include <bsd.port.mk>
