PORTNAME=	Log-Dispatch
PORTVERSION=	2.71
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Suite of OO modules for logging messages to multiple outputs
WWW=		https://metacpan.org/release/Log-Dispatch

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Devel-GlobalDestruction>=0:devel/p5-Devel-GlobalDestruction \
		p5-Dist-CheckConflicts>=0.02:devel/p5-Dist-CheckConflicts \
		p5-Module-Runtime>=0:devel/p5-Module-Runtime \
		p5-Params-ValidationCompiler>=0:devel/p5-Params-ValidationCompiler \
		p5-Specio>=0.32:devel/p5-Specio \
		p5-Try-Tiny>=0:lang/p5-Try-Tiny \
		p5-namespace-autoclean>=0:devel/p5-namespace-autoclean
TEST_DEPENDS=	p5-IPC-Run3>=0:devel/p5-IPC-Run3 \
		p5-Test-Fatal>=0:devel/p5-Test-Fatal \
		p5-Test-Requires>=0:devel/p5-Test-Requires

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

OPTIONS_DEFINE=		APACHELOG MIMELITE MAILSEND MAILSENDER MAILSENDMAIL
OPTIONS_DEFAULT=	MAILSENDMAIL
APACHELOG_DESC=		Apache::Log support
MIMELITE_DESC=		MIME::Lite support
MAILSEND_DESC=		Mail::Send support
MAILSENDER_DESC=	Mail::Sender support
MAILSENDMAIL_DESC=	Mail::Sendmail support

APACHELOG_RUN_DEPENDS=	${APACHE_PKGNAMEPREFIX}mod_perl2>=0:www/mod_perl2
APACHELOG_USES=		apache:run
MIMELITE_RUN_DEPENDS=	p5-MIME-Lite>=0:mail/p5-MIME-Lite
MAILSEND_RUN_DEPENDS=	p5-Mail-Tools>=0:mail/p5-Mail-Tools
MAILSENDER_RUN_DEPENDS=	p5-Mail-Sender>=0:mail/p5-Mail-Sender
MAILSENDMAIL_RUN_DEPENDS=	p5-Mail-Sendmail>=0:mail/p5-Mail-Sendmail

.include <bsd.port.mk>
