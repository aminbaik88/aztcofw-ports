PORTNAME=	desktop
PORTVERSION=	0.1
PORTREVISION=	7
CATEGORIES=	x11
PKGNAMEPREFIX=	deforaos-

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	Deforaos distribution metaport
WWW=		https://www.defora.org/

RUN_DEPENDS=	${LOCALBASE}/bin/keyboard:x11/deforaos-keyboard \
		${LOCALBASE}/bin/panel:x11/deforaos-panel \
		${LOCALBASE}/bin/browser:x11-fm/deforaos-browser \
		${LOCALBASE}/bin/locker:x11/deforaos-locker \
		${LOCALBASE}/bin/pdfviewer:print/deforaos-pdfviewer \
		${LOCALBASE}/bin/mailer:mail/deforaos-mailer \
		${LOCALBASE}/bin/todo:deskutils/deforaos-todo \
		${LOCALBASE}/bin/player:multimedia/deforaos-player \
		${LOCALBASE}/bin/editor:editors/deforaos-editor \
		${LOCALBASE}/bin/phone:comms/deforaos-phone

USES=		metaport

pre-everything::
	@${ECHO_MSG} "This is a meta-port, meaning that it just depends on its subparts of the port."
	@${ECHO_MSG} "It won't build and install all the parts until you have typed make install"
	@${ECHO_MSG} "This port does not ensure things are upgraded; use pkgng/portmaster if you want to"
	@${ECHO_MSG} "upgrade Defora."
	@${ECHO_MSG} ""

.include <bsd.port.mk>
