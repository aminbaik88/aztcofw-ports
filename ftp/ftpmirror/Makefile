PORTNAME=	ftpmirror
PORTVERSION=	1.96
PORTREVISION=	5
CATEGORIES=	ftp
MASTER_SITES=	ftp://ftp.sai.msu.su/pub/unix/FTP/mirror/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utility to mirror directory hierarchy with FTP

DEPRECATED=	Abandonware
EXPIRATION_DATE=2023-05-31
BROKEN=		Do not build

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	p5-Socket6>=0:net/p5-Socket6

OPTIONS_DEFINE=	DOCS

GNU_CONFIGURE=	yes

USES=		shebangfix perl5
SHEBANG_FILES=	ftpmirror rotate

CONFIGURE_ENV+=	PERL="${PERL}" INSTALL_PROGRAM="${INSTALL_SCRIPT}"

PORTDOCS=	README.jis RELEASE.jis

post-configure:
	@${REINPLACE_CMD} -i '' -e 's|%%PREFIX%%|${PREFIX}|' \
		${WRKSRC}/Fan/Fan.pm

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
