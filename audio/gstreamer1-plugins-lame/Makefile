PORTREVISION=	0
CATEGORIES=	audio

COMMENT=	GStreamer High-quality free mp3 encode plugin

GST_PLUGIN=	lame
DIST=		good

MASTERDIR=	${.CURDIR}/../../multimedia/gstreamer1-plugins

PLIST=  ${.CURDIR}/pkg-plist

LIB_DEPENDS= libmp3lame.so:audio/lame

.include "${MASTERDIR}/Makefile"
