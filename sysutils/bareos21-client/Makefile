PORTNAME=	bareos
PKGNAMESUFFIX=	21-client

COMMENT=	Backup archiving recovery open sourced (client)

CONFLICTS=	bareos20-client bareos19-client bareos18-client

WITH_CLIENT_ONLY=yes
USE_RC_SUBR=	bareos-fd

PLIST=		${PKGDIR}/pkg-plist.client
MASTERDIR=	${.CURDIR}/../../sysutils/bareos21-server

OPTIONS_GROUP=	PLUGINS
OPTIONS_GROUP_PLUGINS=	CEPHFS GFAPI RADOS
OPTIONS_DEFINE=	NLS PYTHON SCSICRYPTO

CEPHFS_DESC=	CEPHFS fd plugin support
GFAPI_DESC=	GFAPI fd plugin support
RADOS_DESC=	RADOS fd plugin support

.include "${MASTERDIR}/Makefile"
