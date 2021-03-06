/*
 * Copyright (C) 2015 R. Clint Whaley.
 */
#include "fko_info.h"

int FKO_PipelenADDC(fko_archinfo_t *ap, int typ)
{
   assert(typ >= 0 && typ < FKO_NTYPES);
   return(ap->pipelen_add[typ]);
}

int FKO_PipelenADD(int typ)
{
   return(FKO_PipelenADDC(FKO_ARCHINF, typ));
}
