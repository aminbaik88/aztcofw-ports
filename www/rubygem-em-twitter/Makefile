PORTNAME=	em-twitter
PORTVERSION=	0.3.5
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Twitter Streaming API client for EventMachine
WWW=		https://github.com/tweetstream/em-twitter

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-buftok>=0.2<1:devel/rubygem-buftok \
		rubygem-eventmachine>=1.0<2:devel/rubygem-eventmachine \
		rubygem-http_parser.rb>=0.6<1:net/rubygem-http_parser.rb \
		rubygem-simple_oauth>=0.2<1:net/rubygem-simple_oauth

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
