PORTNAME=	ng_mikrotik_eoip
PORTVERSION=	1.0
CATEGORIES=	net kld
MASTER_SITES=	http://projects.ukrweb.net/files/ \
		http://imax.in.ua/files/

MAINTAINER=	gelraen.ua@gmail.com
COMMENT=	Netgraph node for Mikrotik EoIP tunneling
WWW=		http://imax.in.ua/ng_mikrotik_eoip/

LICENSE=	BSD2CLAUSE

BROKEN=		compilation fails due to a C error: id = *((unsigned int *)id; error: cast to 'unsigned int *' from smaller integer type 'uint16_t'

USES=		kmod uidfix

OPTIONS_DEFINE=	PTABLE
PTABLE_DESC=	Use O(1) lookup for tunnel hooks
# This option enables usage of static pointer table to find needed decimal-named hook,
# which increases memory usage for each node by 65536*sizeof(hook_p). You probably want
# this option if you have many tunnels with single remote IP.

PTABLE_MAKE_ARGS=	NO_LINEAR_HOOK_LOOKUP=1

.include <bsd.port.mk>
