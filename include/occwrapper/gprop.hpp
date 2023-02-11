#include <GProp_GProps.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    GPropGProps GPropGProps_Init();
    void GPropGProps_Free(GPropGProps props);
    double GPropGProps_Mass(GPropGProps props);
    gpPnt GPropGProps_CentreOfMass(GPropGProps props);
#ifdef __cplusplus
}
#endif