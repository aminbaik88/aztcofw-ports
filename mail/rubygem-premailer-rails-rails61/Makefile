PORTNAME=	premailer-rails
PORTVERSION=	1.10.3
CATEGORIES=	mail rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails61

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Improve the rendering of HTML emails
WWW=		https://github.com/fphilipe/premailer-rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-actionmailer61>=3:mail/rubygem-actionmailer61 \
		rubygem-premailer>=1.7.9<2:mail/rubygem-premailer

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
