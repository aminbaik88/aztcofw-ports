PORTNAME=	webstone
PORTVERSION=	2.5
PORTREVISION=	4
CATEGORIES=	www benchmarks
MASTER_SITES=	http://crypto.stanford.edu/~nagendra/projects/WebStone/download/
PKGNAMESUFFIX=	-ssl
DISTNAME=	WebStone-SSL-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	World wide web server benchmarking with SSL support
WWW=		https://crypto.stanford.edu/~nagendra/projects/WebStone/

DEPRECATED=	Requires upstream EOL OpenSSL 1.0.X
EXPIRATION_DATE=	2023-06-01

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		perl5 shebangfix tar:tgz ssl
USE_PERL5=	run
SHEBANG_FILES=	bin/*.wpl bin/*.pl
perl_OLD_CMD=	/bin/perl5 /usr/local/bin/perl5.001
GNU_CONFIGURE=	yes
WRKSRC=		${WRKDIR}/WebStone${PORTVERSION}
CONFIGURE_WRKSRC=	${WRKSRC}/src
BUILD_WRKSRC=	${WRKSRC}/src
ALL_TARGET=	install
MAKE_JOBS_UNSAFE=	yes

CFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB}

.include <bsd.port.pre.mk>

.if ${SSL_DEFAULT} == base
BROKEN_FreeBSD_12=	incomplete definition of type 'struct ssl_st'
BROKEN_FreeBSD_13=	incomplete definition of type 'struct ssl_st'
BROKEN_FreeBSD_14=	incomplete definition of type 'struct ssl_st'
.endif

pre-configure:
	@${RM} ${WRKSRC}/src/config.cache

do-install:
	@${RMDIR} ${WRKSRC}/bin/runs
	@${MKDIR} ${STAGEDIR}${PREFIX}/webstone-ssl/bin
	@${MKDIR} ${STAGEDIR}${PREFIX}/webstone-ssl/conf
	@${MKDIR} ${STAGEDIR}${PREFIX}/webstone-ssl/lgm
	${INSTALL_SCRIPT} ${WRKSRC}/bin/* ${STAGEDIR}${PREFIX}/webstone-ssl/bin
	${INSTALL_SCRIPT} ${WRKSRC}/lgm/* ${STAGEDIR}${PREFIX}/webstone-ssl/lgm
	${INSTALL_DATA} ${WRKSRC}/conf/* ${STAGEDIR}${PREFIX}/webstone-ssl/conf
	${INSTALL_SCRIPT} ${WRKSRC}/webstone  ${STAGEDIR}${PREFIX}/webstone-ssl
.for i in webclient webmaster genrand
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/webstone-ssl/bin/${i}
.endfor
.for i in ws20_cgi ws25_cgi
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/webstone-ssl/lgm/${i}
.endfor

.include <bsd.port.post.mk>
