# $PostgreSQL: pgsql/src/interfaces/libpq/nls.mk,v 1.20 2005/01/14 08:57:06 petere Exp $
CATALOG_NAME	:= libpq
AVAIL_LANGUAGES	:= af cs de es fr hr it ko nb pl pt_BR ru sk sl sv tr zh_CN zh_TW
GETTEXT_FILES	:= fe-auth.c fe-connect.c fe-exec.c fe-lobj.c fe-misc.c fe-protocol2.c fe-protocol3.c fe-secure.c
GETTEXT_TRIGGERS:= libpq_gettext pqInternalNotice:2
