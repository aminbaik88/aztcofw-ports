PORTNAME=	activeresource
PORTVERSION=	6.0.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Coherent wrapper object-relational mapping for REST web services
WWW=		https://github.com/rails/activeresource

LICENSE=	MIT

RUN_DEPENDS=	rubygem-activemodel60>=6.0:databases/rubygem-activemodel60 \
		rubygem-activemodel-serializers-xml>=1.0<2:databases/rubygem-activemodel-serializers-xml \
		rubygem-activesupport60>=6.0:devel/rubygem-activesupport60

USES=		cpe gem

NO_ARCH=	yes

CPE_VENDOR=	rubyonrails
CPE_PRODUCT=	active_resource

.include <bsd.port.mk>
