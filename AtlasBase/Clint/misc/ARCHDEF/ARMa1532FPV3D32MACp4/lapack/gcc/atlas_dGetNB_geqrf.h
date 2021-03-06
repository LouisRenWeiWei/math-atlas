#ifndef ATL_dGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,132,264,308,396,572,1144
 * N : 25,132,264,308,396,572,1144
 * NB : 2,12,16,44,44,44,88
 */
#define ATL_dGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 78) (nb_) = 2; \
   else if ((n_) < 198) (nb_) = 12; \
   else if ((n_) < 286) (nb_) = 16; \
   else if ((n_) < 858) (nb_) = 44; \
   else (nb_) = 88; \
}


#endif    /* end ifndef ATL_dGetNB_geqrf */
