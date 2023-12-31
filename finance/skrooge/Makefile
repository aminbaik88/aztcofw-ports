PORTNAME=	skrooge
DISTVERSION=	2.29.0
PORTREVISION=	1
CATEGORIES=	finance kde
MASTER_SITES=	KDE/stable/${PORTNAME}
DIST_SUBDIR=	KDE/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Personal finance manager
WWW=		https://skrooge.org

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	xsltproc:textproc/libxslt
LIB_DEPENDS=	libofx.so:finance/libofx \
		libsqlcipher.so:databases/sqlcipher

USES=		cmake compiler:c++11-lib desktop-file-utils gettext grantlee:5 \
		kde:5 pkgconfig python:3.4+ qca qt:5 shared-mime-info \
		shebangfix sqlite:3 tar:xz xorg
USE_KDE=	activities archive attica5 auth bookmarks codecs completion \
		config configwidgets coreaddons crash dbusaddons emoticons \
		guiaddons i18n iconthemes init itemmodels itemviews jobwidgets \
		kio newstuff notifications notifyconfig package parts \
		plasma-framework runner service solid sonnet textwidgets \
		unitconversion wallet widgetsaddons windowsystem xmlgui \
		doctools:build ecm:build
# designerplugin is weird: it's defined as a _run dependency, but
# skrooge checks for it at build-time.
USE_KDE+=	designerplugin:build
USE_QT=		concurrent core dbus declarative designer gui network \
		printsupport script sql svg webkit widgets xml xmlpatterns \
		buildtools:build designer:build qmake:build testlib:build
USE_XORG=	x11
SHEBANG_FILES=	plugins/import/skrooge_import_backend/skrooge-sabb.py \
		skgbankmodeler/skrooge-coinmarketcap.py \
		skgbankmodeler/skrooge-cryptocompare.py \
		skgbankmodeler/skrooge-exchangerates.py \
		skgbankmodeler/skrooge-exchangerates_apilayer.py \
		skgbankmodeler/skrooge-ratesapi.py \
		skgbankmodeler/skrooge-yahoodl.py

USE_LDCONFIG=	yes

PLIST_SUB=	SHLIB_VER="${PORTVERSION}"

# Skrooge creates several empty directories due to how it calls CMake's
# install(DIRECTORY ...) function, so we need some code to remove them.
post-install:
	${FIND} ${STAGEDIR}${PREFIX}/share/skrooge/html \
		-type d -empty -delete

.include <bsd.port.mk>
