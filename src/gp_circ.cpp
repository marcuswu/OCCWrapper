#include <gp_Circ.hxx>
#include <occwrapper/gp_circ.h>

gpCirc gpCirc_Init(gpAx2 center, double radius) {
    gp_Ax2 * c = (gp_Ax2 *)center;
    gp_Circ * ret = new gp_Circ(*c, radius);
    return (void*) ret;
}

double gpCirc_Radius(gpCirc circle) {
    gp_Circ *circ = (gp_Circ *)circle;
    return circ->Radius();
}

void gpCirc_Free(gpCirc circle) {
    gp_Circ *c = (gp_Circ *)circle;
    delete c;
}