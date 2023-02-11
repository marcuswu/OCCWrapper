#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_Transform.hxx>

#include "occ_types.hpp"

#ifdef __cplusplus
extern "C" {
#endif
    BRepBuilder BRepBuilder_Init();
    void BRepBuilder_MakeCompound(BRepBuilder builder, TopoDSCompound res);
    void BRepBuilder_Add(BRepBuilder builder, TopoDSShape res, TopoDSShape shape);
    void BRepBuilder_Free(BRepBuilder builder);

    BRepBuilderAPIMakeEdge BRepBuilderAPIMakeEdge_InitWithGeomCurve(GeomCurve curve);
    TopoDSEdge BRepBuilderAPIMakeEdge_ToTopoDSEdge(BRepBuilderAPIMakeEdge edge);
    void BRepBuilderAPIMakeEdge_Free(BRepBuilderAPIMakeEdge edge);

    BRepBuilderAPIMakeWire BRepBuilderAPIMakeWire_Init();
    BRepBuilderAPIMakeWire BRepBuilderAPIMakeWire_InitWithTopoDSEdge(TopoDSEdge edge);
    void BRepBuilderAPIMakeWire_AddEdge(BRepBuilderAPIMakeWire wire, TopoDSEdge edge);
    TopoDSWire BRepBuilderAPIMakeWire_ToTopoDSWire(BRepBuilderAPIMakeWire wire);
    void BRepBuilderAPIMakeWire_Free(BRepBuilderAPIMakeWire wire);

    BRepBuilderAPIMakeFace BRepBuilderAPIMakeFace_InitWithWire(TopoDSWire wire);
    TopoDSFace BRepBuilderAPIMakeFace_ToTopoDSFace(BRepBuilderAPIMakeFace face);
    void BRepBuilderAPIMakeFace_Free(BRepBuilderAPIMakeFace face);

    TopoDSShape BRepBuilderAPIMakeShape_Shape(BRepBuilderAPIMakeShape makeShape);
#ifdef __cplusplus
}
#endif