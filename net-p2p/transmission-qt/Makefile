PKGNAMESUFFIX=	-qt
PORTREVISION=	5

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		compiler:c++11-lang qt:5
NLS_USES=	gettext-runtime:run qt:5
USE_QT=		buildtools:build linguisttools:build qmake:build \
		core dbus gui network widgets
CMAKE_ON=	USE_QT

MASTERDIR=	${.CURDIR}/../transmission-cli
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

SLAVEPORT=	qt

.include "${MASTERDIR}/Makefile"
