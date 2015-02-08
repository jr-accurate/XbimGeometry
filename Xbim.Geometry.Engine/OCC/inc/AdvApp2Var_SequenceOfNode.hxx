// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AdvApp2Var_SequenceOfNode_HeaderFile
#define _AdvApp2Var_SequenceOfNode_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_AdvApp2Var_SequenceNodeOfSequenceOfNode_HeaderFile
#include <Handle_AdvApp2Var_SequenceNodeOfSequenceOfNode.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class AdvApp2Var_Node;
class AdvApp2Var_SequenceNodeOfSequenceOfNode;



class AdvApp2Var_SequenceOfNode  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      AdvApp2Var_SequenceOfNode();
  
  Standard_EXPORT     void Clear() ;
~AdvApp2Var_SequenceOfNode()
{
  Clear();
}
  
  Standard_EXPORT    const AdvApp2Var_SequenceOfNode& Assign(const AdvApp2Var_SequenceOfNode& Other) ;
   const AdvApp2Var_SequenceOfNode& operator =(const AdvApp2Var_SequenceOfNode& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const AdvApp2Var_Node& T) ;
  
        void Append(AdvApp2Var_SequenceOfNode& S) ;
  
  Standard_EXPORT     void Prepend(const AdvApp2Var_Node& T) ;
  
        void Prepend(AdvApp2Var_SequenceOfNode& S) ;
  
        void InsertBefore(const Standard_Integer Index,const AdvApp2Var_Node& T) ;
  
        void InsertBefore(const Standard_Integer Index,AdvApp2Var_SequenceOfNode& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const AdvApp2Var_Node& T) ;
  
        void InsertAfter(const Standard_Integer Index,AdvApp2Var_SequenceOfNode& S) ;
  
  Standard_EXPORT    const AdvApp2Var_Node& First() const;
  
  Standard_EXPORT    const AdvApp2Var_Node& Last() const;
  
        void Split(const Standard_Integer Index,AdvApp2Var_SequenceOfNode& Sub) ;
  
  Standard_EXPORT    const AdvApp2Var_Node& Value(const Standard_Integer Index) const;
   const AdvApp2Var_Node& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const AdvApp2Var_Node& I) ;
  
  Standard_EXPORT     AdvApp2Var_Node& ChangeValue(const Standard_Integer Index) ;
    AdvApp2Var_Node& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   AdvApp2Var_SequenceOfNode(const AdvApp2Var_SequenceOfNode& Other);




};

#define SeqItem AdvApp2Var_Node
#define SeqItem_hxx <AdvApp2Var_Node.hxx>
#define TCollection_SequenceNode AdvApp2Var_SequenceNodeOfSequenceOfNode
#define TCollection_SequenceNode_hxx <AdvApp2Var_SequenceNodeOfSequenceOfNode.hxx>
#define Handle_TCollection_SequenceNode Handle_AdvApp2Var_SequenceNodeOfSequenceOfNode
#define TCollection_SequenceNode_Type_() AdvApp2Var_SequenceNodeOfSequenceOfNode_Type_()
#define TCollection_Sequence AdvApp2Var_SequenceOfNode
#define TCollection_Sequence_hxx <AdvApp2Var_SequenceOfNode.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif