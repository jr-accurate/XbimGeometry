// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_DataMapOfSurfaceSampleBox_HeaderFile
#define _IntTools_DataMapOfSurfaceSampleBox_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox_HeaderFile
#include <Handle_IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class IntTools_SurfaceRangeSample;
class Bnd_Box;
class IntTools_SurfaceRangeSampleMapHasher;
class IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox;
class IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox;



class IntTools_DataMapOfSurfaceSampleBox  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   IntTools_DataMapOfSurfaceSampleBox(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     IntTools_DataMapOfSurfaceSampleBox& Assign(const IntTools_DataMapOfSurfaceSampleBox& Other) ;
    IntTools_DataMapOfSurfaceSampleBox& operator =(const IntTools_DataMapOfSurfaceSampleBox& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~IntTools_DataMapOfSurfaceSampleBox()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const IntTools_SurfaceRangeSample& K,const Bnd_Box& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const IntTools_SurfaceRangeSample& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const IntTools_SurfaceRangeSample& K) ;
  
  Standard_EXPORT    const Bnd_Box& Find(const IntTools_SurfaceRangeSample& K) const;
   const Bnd_Box& operator()(const IntTools_SurfaceRangeSample& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Bnd_Box& ChangeFind(const IntTools_SurfaceRangeSample& K) ;
    Bnd_Box& operator()(const IntTools_SurfaceRangeSample& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const IntTools_SurfaceRangeSample& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const IntTools_SurfaceRangeSample& K) ;





protected:





private:

  
  Standard_EXPORT   IntTools_DataMapOfSurfaceSampleBox(const IntTools_DataMapOfSurfaceSampleBox& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif