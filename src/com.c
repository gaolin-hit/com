#ifdef __cplusplus
extern  "C" { 
#endif

#include    "oal.h"
#include    "oam.h"
#include    "ext.h"

#ifdef PRE_UST
int swk_main(int argc, const char *argv[])
#else
int main(int argc, const char *argv[])
#endif
{
    oal_main_init();
    oam_main_init();
    
    oam_log_err("hello=10");
    oam_log_wrn("hello=10");
    oam_log_hpy("hello=10");
    oam_log_dbg("hello=10");

    return 0;
}


#ifdef __cplusplus
}
#endif
