PORTNAME=	curtail
DISTVERSION=	1.5.0
CATEGORIES=	graphics print

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Simple & useful image compressor
WWW=		https://github.com/Huluti/Curtail

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	appstream-util:devel/appstream-glib
RUN_DEPENDS=	cwebp:graphics/webp \
		jpegoptim:graphics/jpegoptim \
		optipng:graphics/optipng \
		pngquant:graphics/pngquant

USES=		desktop-file-utils gettext gnome meson pkgconfig python
USE_GNOME=	glib20 gtk30

USE_GITHUB=	yes
GH_ACCOUNT=	Huluti
GH_PROJECT=	Curtail

GLIB_SCHEMAS=	com.github.huluti.Curtail.gschema.xml

NO_ARCH=	yes

BINARY_ALIAS=	python3=${PYTHON_CMD}

post-install: # adjust python path in the executable
	@${REINPLACE_CMD} -i '' -e 's|^#!.*|#!${PYTHON_CMD}|' ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

# 1 test fails, see https://github.com/Huluti/Curtail/issues/142

.include <bsd.port.mk>
