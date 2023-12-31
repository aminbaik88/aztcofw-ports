PORTNAME=	opensearch-dashboards
DISTVERSION=	1.3.10
DISTVERSIONSUFFIX=	-linux-x64
CATEGORIES=	textproc www
MASTER_SITES=	https://artifacts.opensearch.org/releases/bundle/${PORTNAME}/${DISTVERSION}/
PKGNAMESUFFIX=	13

MAINTAINER=	opensearch@FreeBSD.org
COMMENT?=	Visualization dashboards for OpenSearch
WWW=		https://opensearch.org

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BROKEN=		does not start with node14: wants node10 and fail with: TypeError: Cannot set property 'writecb' of undefined
DEPRECATED=	Requires upstream EOL node14
EXPIRATION_DATE=	2023-05-26

BUILD_DEPENDS=	npm-node14>0:www/npm-node14

CONFLICTS=	opensearch-dashboards

USES=		nodejs:14,build,run python:build
USE_RC_SUBR=	${PORTNAME}

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

OPTIONS_DEFINE=	CHROME

CHROME_DESC=	Add dependency on www/chromium (required for PDF reports)
CHROME_RUN_DEPENDS=chrome:www/chromium

NODE_VER=	14.21.1

_DEVDIR=	${WRKDIR}/.devdir

post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|' -e 's|%%LOCALBASE%%|${LOCALBASE}|' -e 's|%%WRKSRC%%|${WRKSRC}|' \
		${WRKSRC}/bin/opensearch-dashboards-keystore \
		${WRKSRC}/bin/opensearch-dashboards-plugin \
		${WRKSRC}/node_modules/re2/binding.gyp
	@${REINPLACE_CMD} -e 's|10.24.1|${NODE_VER}|g' ${WRKSRC}/package.json
	${RM} \
		${WRKSRC}/bin/*.orig \
		${WRKSRC}/bin/*.bak \
		${WRKSRC}/node_modules/re2/binding.gyp.orig \
		${WRKSRC}/node_modules/re2/binding.gyp.bak \
		${WRKSRC}/package.json.bak
	${RM} -r ${WRKSRC}/plugins/reportsDashboards/.chromium

do-configure:
	(cd ${WRKSRC}/node_modules/re2 && \
		${SETENV} HOME=${WRKDIR} PYTHONDONTWRITEBYTECODE=1 \
		${LOCALBASE}/lib/node_modules/npm/bin/node-gyp-bin/node-gyp configure \
		--python=${PYTHON_CMD} \
		--nodedir ${LOCALBASE} \
		--devdir=${_DEVDIR})

do-build:
	(cd ${WRKSRC}/node_modules/re2 && \
		${SETENV} HOME=${WRKDIR} PYTHONDONTWRITEBYTECODE=1 \
		${LOCALBASE}/lib/node_modules/npm/bin/node-gyp-bin/node-gyp build \
		--devdir=${_DEVDIR})
	${RM} -r ${WRKSRC}/node_modules/re2/build/Release/.deps \
		${WRKSRC}/node_modules/re2/build/Release/obj.target

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR} ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${WRKSRC}/config/opensearch_dashboards.yml ${STAGEDIR}${ETCDIR}/opensearch_dashboards.yml.sample
	(cd ${WRKSRC} && \
		${COPYTREE_SHARE} "data node_modules package.json plugins src" ${STAGEDIR}${WWWDIR} && \
		${COPYTREE_BIN} bin ${STAGEDIR}${WWWDIR})
	${STRIP_CMD} ${STAGEDIR}${WWWDIR}/node_modules/re2/build/Release/re2.node

post-install:
	${ECHO} "@sample ${ETCDIR}/opensearch_dashboards.yml.sample" >> ${TMPPLIST}
	${FIND} -s ${STAGEDIR}${WWWDIR} -not -type d | ${SORT} | \
		${SED} -e 's#^${STAGEDIR}${PREFIX}/##' >> ${TMPPLIST}
	${ECHO} "@dir(www,www) ${WWWDIR}/data" >> ${TMPPLIST}
	${ECHO} "@dir ${WWWDIR}/plugins/reportsDashboards/node_modules/set-interval-async/test/resources/legacy" >> ${TMPPLIST}
	${ECHO} "@dir ${WWWDIR}/plugins/reportsDashboards/node_modules/set-interval-async/test/resources/fixed" >> ${TMPPLIST}
	${ECHO} "@dir ${WWWDIR}/plugins/reportsDashboards/node_modules/set-interval-async/test/resources/dynamic" >> ${TMPPLIST}
	${ECHO} "@dir ${WWWDIR}/plugins/reportsDashboards/node_modules/set-interval-async/examples/fixed" >> ${TMPPLIST}
	${ECHO} "@dir ${WWWDIR}/plugins/reportsDashboards/node_modules/set-interval-async/examples/dynamic" >> ${TMPPLIST}

.include <bsd.port.mk>
