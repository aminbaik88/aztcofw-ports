PORTNAME=	upx
PORTVERSION=	3.96
MASTER_SITES=	https://github.com/upx/upx/releases/download/v${PORTVERSION}/
CATEGORIES=	archivers
DISTVERSIONSUFFIX=	-src

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ultimate Packer for eXecutables
WWW=		https://upx.github.io/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libucl.so:archivers/ucl

USES=		cpe gmake perl5 tar:xz
USE_PERL5=	build

MAKE_ENV=	UPX_UCLDIR=${LOCALBASE} \
		target=freebsd

PLIST_FILES=	bin/upx \
		man/man1/upx.1.gz

CPE_VENDOR=	upx_project

.include <bsd.port.pre.mk>

.if ${OPSYS} == FreeBSD && ( ${OSVERSION} >= 1400079 || ( ${OSVERSION} >= 1302505 && ${OSVERSION} < 1400000 ))
CFLAGS+=       -Wno-error=unused-but-set-variable
.endif

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/upx.out ${STAGEDIR}${PREFIX}/bin/upx
	${INSTALL_MAN} ${WRKSRC}/doc/upx.1 ${STAGEDIR}${PREFIX}/man/man1

.include <bsd.port.post.mk>
