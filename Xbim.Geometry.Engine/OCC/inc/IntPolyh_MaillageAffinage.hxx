// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPolyh_MaillageAffinage_HeaderFile
#define _IntPolyh_MaillageAffinage_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Bnd_Box_HeaderFile
#include <Bnd_Box.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _IntPolyh_ArrayOfPoints_HeaderFile
#include <IntPolyh_ArrayOfPoints.hxx>
#endif
#ifndef _IntPolyh_ArrayOfEdges_HeaderFile
#include <IntPolyh_ArrayOfEdges.hxx>
#endif
#ifndef _IntPolyh_ArrayOfTriangles_HeaderFile
#include <IntPolyh_ArrayOfTriangles.hxx>
#endif
#ifndef _IntPolyh_ArrayOfCouples_HeaderFile
#include <IntPolyh_ArrayOfCouples.hxx>
#endif
#ifndef _IntPolyh_ArrayOfStartPoints_HeaderFile
#include <IntPolyh_ArrayOfStartPoints.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _IntPolyh_ArrayOfSectionLines_HeaderFile
#include <IntPolyh_ArrayOfSectionLines.hxx>
#endif
#ifndef _IntPolyh_ArrayOfTangentZones_HeaderFile
#include <IntPolyh_ArrayOfTangentZones.hxx>
#endif
class Adaptor3d_HSurface;
class TColStd_Array1OfReal;
class Bnd_Box;
class IntPolyh_Point;
class IntPolyh_StartPoint;
class IntPolyh_Triangle;
class IntPolyh_SectionLine;



class IntPolyh_MaillageAffinage  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   IntPolyh_MaillageAffinage(const Handle(Adaptor3d_HSurface)& S1,const Standard_Integer NbSU1,const Standard_Integer NbSV1,const Handle(Adaptor3d_HSurface)& S2,const Standard_Integer NbSU2,const Standard_Integer NbSV2,const Standard_Integer PRINT);
  
  Standard_EXPORT   IntPolyh_MaillageAffinage(const Handle(Adaptor3d_HSurface)& S1,const Handle(Adaptor3d_HSurface)& S2,const Standard_Integer PRINT);
  //! Compute points on one surface and fill an array of points; <br>
//!         standard (default) method <br>
  Standard_EXPORT     void FillArrayOfPnt(const Standard_Integer SurfID) ;
  //! isShiftFwd flag is added. The purpose is to define shift <br>
//!          of points along normal to the surface in this point. The <br>
//!          shift length represents maximal deflection of triangulation. <br>
//!          The direction (forward or reversed regarding to normal <br>
//!          direction) is defined by isShiftFwd flag. <br>//! Compute points on one surface and fill an array of points; <br>
//!         advanced method <br>
  Standard_EXPORT     void FillArrayOfPnt(const Standard_Integer SurfID,const Standard_Boolean isShiftFwd) ;
  //! Compute points on one surface and fill an array of points; <br>
//!         standard (default) method <br>
  Standard_EXPORT     void FillArrayOfPnt(const Standard_Integer SurfID,const TColStd_Array1OfReal& Upars,const TColStd_Array1OfReal& Vpars) ;
  //! isShiftFwd flag is added. The purpose is to define shift <br>
//!          of points along normal to the surface in this point. The <br>
//!          shift length represents maximal deflection of triangulation. <br>
//!          The direction (forward or reversed regarding to normal <br>
//!          direction) is defined by isShiftFwd flag. <br>//! Compute points on one surface and fill an array of points; <br>
//!         advanced method <br>
  Standard_EXPORT     void FillArrayOfPnt(const Standard_Integer SurfID,const Standard_Boolean isShiftFwd,const TColStd_Array1OfReal& Upars,const TColStd_Array1OfReal& Vpars) ;
  //!  Compute the common box  witch is the intersection <br>
//!          of the two bounding boxes,  and mark the points of <br>
//!          the two surfaces that are inside. <br>
  Standard_EXPORT     void CommonBox(const Bnd_Box& B1,const Bnd_Box& B2,Standard_Real& xMin,Standard_Real& yMin,Standard_Real& zMin,Standard_Real& xMax,Standard_Real& yMax,Standard_Real& zMax) ;
  //! Compute edges from the array of points <br>
  Standard_EXPORT     void FillArrayOfEdges(const Standard_Integer SurfID) ;
  //! Compute triangles from the array of points, and -- <br>
//!           mark the triangles  that use marked points by the <br>
//!           CommonBox function. <br>
  Standard_EXPORT     void FillArrayOfTriangles(const Standard_Integer SurfID) ;
  //! fill the  edge fields in  Triangle object  for the <br>
//!          two array of triangles. <br>
  Standard_EXPORT     void LinkEdges2Triangles() ;
  //! Refine systematicaly all marked triangles of both surfaces <br>
  Standard_EXPORT     void CommonPartRefinement() ;
  //! Refine systematicaly all marked triangles of ONE surface <br>
  Standard_EXPORT     void LocalSurfaceRefinement(const Standard_Integer SurfId) ;
  //!  Compute deflection  for   all  triangles  of  one <br>
//!          surface,and sort min and max of deflections <br>
  Standard_EXPORT     void ComputeDeflections(const Standard_Integer SurfID) ;
  //!  Refine  both  surfaces using  BoundSortBox  as -- <br>
//!           rejection.  The  criterions  used to refine a  -- <br>
//!           triangle are:  The deflection The  size of the -- <br>
//!           bounding boxes   (one surface may be   very small <br>
//!           compared to the other) <br>
  Standard_EXPORT     void TrianglesDeflectionsRefinementBSB() ;
  //! This fonction     Check if two triangles   are  in <br>
//!          contact or no,  return 1 if yes, return 0 <br>
//!          if no. <br>
  Standard_EXPORT     Standard_Integer TriContact(const IntPolyh_Point& P1,const IntPolyh_Point& P2,const IntPolyh_Point& P3,const IntPolyh_Point& Q1,const IntPolyh_Point& Q2,const IntPolyh_Point& Q3,Standard_Real& Angle) const;
  
  Standard_EXPORT     Standard_Integer TriangleEdgeContact(const Standard_Integer TriSurfID,const Standard_Integer EdgeIndice,const IntPolyh_Point& P1,const IntPolyh_Point& P2,const IntPolyh_Point& P3,const IntPolyh_Point& C1,const IntPolyh_Point& C2,const IntPolyh_Point& C3,const IntPolyh_Point& Pe1,const IntPolyh_Point& Pe2,const IntPolyh_Point& E,const IntPolyh_Point& N,IntPolyh_StartPoint& SP1,IntPolyh_StartPoint& SP2) const;
  
  Standard_EXPORT     Standard_Integer TriangleEdgeContact2(const Standard_Integer TriSurfID,const Standard_Integer EdgeIndice,const IntPolyh_Triangle& Tri1,const IntPolyh_Triangle& Tri2,const IntPolyh_Point& P1,const IntPolyh_Point& P2,const IntPolyh_Point& P3,const IntPolyh_Point& C1,const IntPolyh_Point& C2,const IntPolyh_Point& C3,const IntPolyh_Point& Pe1,const IntPolyh_Point& Pe2,const IntPolyh_Point& E,const IntPolyh_Point& N,IntPolyh_StartPoint& SP1,IntPolyh_StartPoint& SP2) const;
  
  Standard_EXPORT     Standard_Integer StartingPointsResearch(const Standard_Integer T1,const Standard_Integer T2,IntPolyh_StartPoint& SP1,IntPolyh_StartPoint& SP2) const;
  //! From  two  triangles compute intersection  points. <br>
//!            If I found   more  than two intersection  points <br>
//!          that's mean that those triangle are coplanar <br>
  Standard_EXPORT     Standard_Integer StartingPointsResearch2(const Standard_Integer T1,const Standard_Integer T2,IntPolyh_StartPoint& SP1,IntPolyh_StartPoint& SP2) const;
  
  Standard_EXPORT     Standard_Integer NextStartingPointsResearch(const Standard_Integer T1,const Standard_Integer T2,const IntPolyh_StartPoint& SPInit,IntPolyh_StartPoint& SPNext) const;
  //! from  two triangles  and an intersection   point I <br>
//!          seach the other point (if it exist). <br>
//!          This function is used by StartPointChain <br>
  Standard_EXPORT     Standard_Integer NextStartingPointsResearch2(const Standard_Integer T1,const Standard_Integer T2,const IntPolyh_StartPoint& SPInit,IntPolyh_StartPoint& SPNext) const;
  //! Analyse  each couple of  triangles from the two -- <br>
//!             array  of triangles,  to   see  if they are  in <br>
//!           contact,  and  compute the  incidence.  Then  put <br>
//!            couples  in contact  in  the  array  of  couples <br>
  Standard_EXPORT     Standard_Integer TriangleCompare() ;
  //!  The   same as   TriangleCompare, plus compute the <br>
//!          StartPoints without chaining them. <br>
  Standard_EXPORT     Standard_Integer TriangleComparePSP() ;
  //!  From the array  of couples compute  all the start <br>
//!          points and display them on the screen <br>
  Standard_EXPORT     void StartPointsCalcul() const;
  //! Loop on the array of couples. Compute StartPoints. <br>
//!          Try to chain  the StartPoints into SectionLines or <br>
//!          put  the  point  in  the    ArrayOfTangentZones if <br>
//!          chaining it, is not possible. <br>
  Standard_EXPORT     Standard_Integer StartPointsChain(IntPolyh_ArrayOfSectionLines& TSectionLines,IntPolyh_ArrayOfTangentZones& TTangentZones) ;
  //!  Mainly  used  by StartPointsChain(), this function <br>
//!           try to compute the next StartPoint. <br>
  Standard_EXPORT     Standard_Integer GetNextChainStartPoint(const IntPolyh_StartPoint& SPInit,IntPolyh_StartPoint& SPNext,IntPolyh_SectionLine& MySectionLine,IntPolyh_ArrayOfTangentZones& TTangentZones,const Standard_Boolean Prepend = Standard_False) ;
  
  Standard_EXPORT    const IntPolyh_ArrayOfPoints& GetArrayOfPoints(const Standard_Integer SurfID) const;
  
  Standard_EXPORT    const IntPolyh_ArrayOfEdges& GetArrayOfEdges(const Standard_Integer SurfID) const;
  
  Standard_EXPORT    const IntPolyh_ArrayOfTriangles& GetArrayOfTriangles(const Standard_Integer SurfID) const;
  
  Standard_EXPORT     Standard_Integer GetFinTE(const Standard_Integer SurfID) const;
  
  Standard_EXPORT     Standard_Integer GetFinTT(const Standard_Integer SurfID) const;
  
  Standard_EXPORT     Bnd_Box GetBox(const Standard_Integer SurfID) const;
  
  Standard_EXPORT     void GetBoxDraw(const Standard_Integer SurfID) const;
  
  Standard_EXPORT    const IntPolyh_ArrayOfStartPoints& GetArrayOfSP() const;
  //! This method returns array of couples of contact triangles. <br>
  Standard_EXPORT     IntPolyh_ArrayOfCouples& GetArrayOfCouples() ;
  
  Standard_EXPORT     void SetEnlargeZone(Standard_Boolean& EnlargeZone) ;
  
  Standard_EXPORT     Standard_Boolean GetEnlargeZone() const;





protected:





private:



Handle_Adaptor3d_HSurface MaSurface1;
Handle_Adaptor3d_HSurface MaSurface2;
Bnd_Box MyBox1;
Bnd_Box MyBox2;
Standard_Integer NbSamplesU1;
Standard_Integer NbSamplesU2;
Standard_Integer NbSamplesV1;
Standard_Integer NbSamplesV2;
Standard_Real FlecheMax1;
Standard_Real FlecheMax2;
Standard_Real FlecheMin1;
Standard_Real FlecheMin2;
Standard_Real FlecheMoy1;
Standard_Real FlecheMoy2;
IntPolyh_ArrayOfPoints TPoints1;
IntPolyh_ArrayOfPoints TPoints2;
IntPolyh_ArrayOfEdges TEdges1;
IntPolyh_ArrayOfEdges TEdges2;
IntPolyh_ArrayOfTriangles TTriangles1;
IntPolyh_ArrayOfTriangles TTriangles2;
IntPolyh_ArrayOfCouples TTrianglesContacts;
IntPolyh_ArrayOfStartPoints TStartPoints;
Standard_Boolean myEnlargeZone;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif