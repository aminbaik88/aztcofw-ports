PORTNAME=	getdelta
PORTVERSION=	0.7.8
PORTREVISION=	5
CATEGORIES=	sysutils ports-mgmt
MASTER_SITES=	http://linux01.gwdg.de/~nlissne/

MAINTAINER=	astatutov@gmail.com
COMMENT=	Script for reducing bandwidth load while upgrading ports disfiles
WWW=		http://linux01.gwdg.de/~nlissne/

LICENSE=	GPLv2

RUN_DEPENDS=	deltup>=0.4.4:sysutils/deltup \
		wget:ftp/wget \
		bash:shells/bash

USES=		tar:bzip2
NO_WRKSUBDIR=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/getdelta.sh
SUB_FILES=	pkg-message

post-patch:
	@${REINPLACE_CMD} -e 's,%%LOCALBASE%%,${LOCALBASE},; \
		s,%%PREFIX%%,${PREFIX},' \
		${WRKSRC}/getdelta.sh

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/getdelta.sh ${STAGEDIR}${PREFIX}/bin/getdelta.sh

.include <bsd.port.mk>
