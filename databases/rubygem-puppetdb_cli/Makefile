PORTNAME=	puppetdb_cli
PORTVERSION=	2.0.1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	puppet@FreeBSD.org
COMMENT=	PuppetDB CLI Tooling
WWW=		https://github.com/puppetlabs/puppetdb-cli

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-cri>=2.15<3:devel/rubygem-cri \
		rubygem-pl-puppetdb-ruby>=2.0.3<2.1:databases/rubygem-pl-puppetdb-ruby

USES=		gem

NO_ARCH=	yes

PLIST_FILES=	bin/puppet-db \
		bin/puppet-query

post-patch:
	${REINPLACE_CMD} -e 's|/etc/puppetlabs|/usr/local/etc|' \
		${WRKSRC}/man/puppetdb_conf.pod

.include <bsd.port.mk>
