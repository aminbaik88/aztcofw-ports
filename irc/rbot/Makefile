PORTNAME=	rbot
PORTVERSION=	20160325
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	irc ruby

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Ruby IRC bot similar to infobot
WWW=		https://ruby-rbot.org/

LICENSE=	GPLv2 MIT
LICENSE_COMB=	dual
LICENSE_FILE_GPLv2=	${WRKSRC}/GPLv2
LICENSE_FILE_MIT=	${WRKSRC}/COPYING.rbot

RUN_DEPENDS=	${RUBY_SITEARCHLIBDIR}/tokyocabinet.so:databases/ruby-tokyocabinet \
		rubygem-gettext>=0:devel/rubygem-gettext \
		rubygem-htmlentities>=0:textproc/rubygem-htmlentities \
		rubygem-hpricot>=0:www/rubygem-hpricot \
		rubygem-mechanize>=0:www/rubygem-mechanize \
		rubygem-tzinfo>=0:devel/rubygem-tzinfo \
		rubygem-oauth>=0:net/rubygem-oauth \
		rubygem-oauth21>=0:net/rubygem-oauth21
LIB_DEPENDS=	libtokyocabinet.so:databases/tokyocabinet

USES=		cpe ruby:setup

CONFIGURE_ARGS=	--prefix=${PREFIX}
NO_ARCH=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	ruby-${PORTNAME}
GH_TAGNAME=	e358601cc521d8aced941eb928fae2d8c53cf0c2

SUB_FILES=	pkg-message

PORTDOCS=	REQUIREMENTS ChangeLog

CPE_VENDOR=	ruby-rbot

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
