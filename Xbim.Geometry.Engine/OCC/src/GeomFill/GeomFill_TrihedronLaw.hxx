// Created on: 1997-12-02
// Created by: Philippe MANGIN
// Copyright (c) 1997-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _GeomFill_TrihedronLaw_HeaderFile
#define _GeomFill_TrihedronLaw_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <Standard_Transient.hxx>
#include <GeomFill_PipeError.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <GeomAbs_Shape.hxx>
#include <TColStd_Array1OfReal.hxx>
class Adaptor3d_HCurve;
class Standard_OutOfRange;
class Standard_NotImplemented;
class gp_Vec;


class GeomFill_TrihedronLaw;
DEFINE_STANDARD_HANDLE(GeomFill_TrihedronLaw, Standard_Transient)

//! To define Trihedron along one Curve
class GeomFill_TrihedronLaw : public Standard_Transient
{

public:

  
  Standard_EXPORT virtual void SetCurve (const Handle(Adaptor3d_HCurve)& C);
  
  Standard_EXPORT virtual Handle(GeomFill_TrihedronLaw) Copy() const = 0;
  
  //! Give a status to the Law
  //! Returns PipeOk (default implementation)
  Standard_EXPORT virtual GeomFill_PipeError ErrorStatus() const;
  
  //! compute Triedrhon on curve at parameter <Param>
  Standard_EXPORT virtual Standard_Boolean D0 (const Standard_Real Param, gp_Vec& Tangent, gp_Vec& Normal, gp_Vec& BiNormal) = 0;
  
  //! compute Triedrhon and  derivative Trihedron  on curve
  //! at parameter <Param>
  //! Warning : It used only for C1 or C2 aproximation
  Standard_EXPORT virtual Standard_Boolean D1 (const Standard_Real Param, gp_Vec& Tangent, gp_Vec& DTangent, gp_Vec& Normal, gp_Vec& DNormal, gp_Vec& BiNormal, gp_Vec& DBiNormal);
  
  //! compute  Trihedron on curve
  //! first and seconde  derivatives.
  //! Warning : It used only for C2 aproximation
  Standard_EXPORT virtual Standard_Boolean D2 (const Standard_Real Param, gp_Vec& Tangent, gp_Vec& DTangent, gp_Vec& D2Tangent, gp_Vec& Normal, gp_Vec& DNormal, gp_Vec& D2Normal, gp_Vec& BiNormal, gp_Vec& DBiNormal, gp_Vec& D2BiNormal);
  
  //! Returns  the number  of  intervals for  continuity
  //! <S>.
  //! May be one if Continuity(me) >= <S>
  Standard_EXPORT virtual Standard_Integer NbIntervals (const GeomAbs_Shape S) const = 0;
  
  //! Stores in <T> the  parameters bounding the intervals
  //! of continuity <S>.
  //!
  //! The array must provide  enough room to  accomodate
  //! for the parameters. i.e. T.Length() > NbIntervals()
  Standard_EXPORT virtual void Intervals (TColStd_Array1OfReal& T, const GeomAbs_Shape S) const = 0;
  
  //! Sets the bounds of the parametric interval on
  //! the function
  //! This determines the derivatives in these values if the
  //! function is not Cn.
  Standard_EXPORT virtual void SetInterval (const Standard_Real First, const Standard_Real Last);
  
  //! Gets the bounds of the parametric interval on
  //! the function
  Standard_EXPORT void GetInterval (Standard_Real& First, Standard_Real& Last);
  
  //! Get average value of M(t) and V(t) it is usfull to
  //! make fast approximation of rational  surfaces.
  Standard_EXPORT virtual void GetAverageLaw (gp_Vec& ATangent, gp_Vec& ANormal, gp_Vec& ABiNormal) = 0;
  
  //! Say if the law is Constant
  Standard_EXPORT virtual Standard_Boolean IsConstant() const;
  
  //! Say if the law is defined, only by the 3d Geometry of
  //! the setted Curve
  //! Return False by Default.
  Standard_EXPORT virtual Standard_Boolean IsOnlyBy3dCurve() const;




  DEFINE_STANDARD_RTTIEXT(GeomFill_TrihedronLaw,Standard_Transient)

protected:


  Handle(Adaptor3d_HCurve) myCurve;
  Handle(Adaptor3d_HCurve) myTrimmed;


private:




};







#endif // _GeomFill_TrihedronLaw_HeaderFile
