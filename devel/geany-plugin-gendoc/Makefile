PORTNAME=	geany-plugin-gendoc
PORTVERSION=	${GEANY_VER}
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Geany plugin: ${${GEANY_PLUGIN}_DESC}
WWW=		https://plugins.geany.org/geanygendoc.html

LIB_DEPENDS=	libctpl.so:textproc/ctpl
RUN_DEPENDS=	${LOCALBASE}/bin/rst2html:textproc/py-docutils

.include "${.CURDIR}/../geany-plugins/files/Makefile.common"
.include <bsd.port.mk>
