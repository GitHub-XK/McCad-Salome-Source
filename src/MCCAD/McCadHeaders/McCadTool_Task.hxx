// File generated by CPPExt (Transient)
//
//
//                     Copyright (C) 1991 - 2000 by
//                      Matra Datavision SA.  All rights reserved.
//
//                     Copyright (C) 2001 - 2004 by
//                     Open CASCADE SA.  All rights reserved.
//
// This file is part of the Open CASCADE Technology software.
//
// This software may be distributed and/or modified under the terms and
// conditions of the Open CASCADE Public License as defined by Open CASCADE SA
// and appearing in the file LICENSE included in the packaging of this file.
//
// This software is distributed on an "AS IS" basis, without warranty of any
// kind, and Open CASCADE SA hereby disclaims all such warranties,
// including without limitation, any warranties of merchantability, fitness
// for a particular purpose or non-infringement. Please see the License for
// the specific terms and conditions governing rights and limitations under the
// License.

#ifndef _McCadTool_Task_HeaderFile
#define _McCadTool_Task_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_McCadTool_Task_HeaderFile
#include <Handle_McCadTool_Task.hxx>
#endif

#ifndef _Handle_McCadCom_CasDocument_HeaderFile
#include <Handle_McCadCom_CasDocument.hxx>
#endif
#ifndef _Handle_McCadCom_CasView_HeaderFile
#include <Handle_McCadCom_CasView.hxx>
#endif
#ifndef _McCadTool_State_HeaderFile
#include <McCadTool_State.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _McCadTool_TaskID_HeaderFile
#include <McCadTool_TaskID.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#include <McCadCom_CasDocument.hxx>
//class McCadCom_CasDocument;
class McCadCom_CasView;
class McCadWin_MouseEvent;

#include <QMouseEvent>

//! \brief Base Class of tasks

//! base Task class <br>
//!   fully implemented this gives a cmd with a finite state machine (FSM) <br>
//!   this is a lazy implementation; see text books for complete cmd with <br>
//!   FSM. <br>
class McCadTool_Task : public MMgt_TShared {

public:
 // Methods PUBLIC
 //

//! Deletes t<me>. <br>
Standard_EXPORT virtual  void Destroy() ;
~McCadTool_Task()
{
  Destroy();
}



Standard_EXPORT   void Initialize(const Handle(McCadCom_CasDocument)& theDoc = NULL,const Handle(McCadCom_CasView)& theView = NULL,const Standard_Boolean theNeedSelect = Standard_False,const Standard_Boolean theNeedDlg = Standard_False,const Standard_Boolean theNeedRect = Standard_False,const McCadTool_State theState = McCadTool_Start,const Standard_Boolean theUndoState = Standard_False,const Standard_Boolean theRedoState = Standard_False) ;


Standard_EXPORT virtual  Standard_Boolean IsNull() ;


Standard_EXPORT virtual  void Execute() ;


Standard_EXPORT virtual  void UnExecute() ;


Standard_EXPORT virtual  void Suspend() ;


Standard_EXPORT virtual  void Resume() ;


Standard_EXPORT virtual  void SetState(const McCadTool_State theState) ;


Standard_EXPORT virtual  void Start() ;


Standard_EXPORT virtual  void Running() ;


Standard_EXPORT virtual  void Waiting() ;


Standard_EXPORT virtual  void Done() ;


Standard_EXPORT   McCadTool_State State() const;


Standard_EXPORT virtual  void MousePressEvent(const QMouseEvent& e) ;


Standard_EXPORT virtual  void MouseReleaseEvent(const QMouseEvent& e) ;


Standard_EXPORT   void MouseMoveEvent(const QMouseEvent& e) ;


Standard_EXPORT virtual  void MouseLeaveEvent() ;


Standard_EXPORT virtual  void MouseEnterEvent() ;


Standard_EXPORT virtual  void SetCanUndo(const Standard_Boolean theState) ;


Standard_EXPORT virtual  void SetCanRedo(const Standard_Boolean theState) ;


Standard_EXPORT virtual  Standard_Boolean CanUndo() const;


Standard_EXPORT virtual  Standard_Boolean CanRedo() const;


Standard_EXPORT virtual  void SetID(const McCadTool_TaskID theID) ;


Standard_EXPORT virtual  McCadTool_TaskID GetID() const;


Standard_EXPORT virtual  Standard_Boolean NeedRect() const;


Standard_EXPORT virtual  void SetNeedRect(const Standard_Boolean theState) ;


Standard_EXPORT virtual  Standard_Boolean NeedDlg() const;


Standard_EXPORT virtual  void SetNeedDlg(const Standard_Boolean theState) ;


Standard_EXPORT virtual  Standard_Boolean NeedSelect() const;


Standard_EXPORT virtual  void SetNeedSelect(const Standard_Boolean theState) ;




 // Type management
 //
 Standard_EXPORT const Handle(Standard_Type)& DynamicType() const;
 //Standard_EXPORT Standard_Boolean	       IsKind(const Handle(Standard_Type)&) const;

protected:

 // Methods PROTECTED
 //


 // Fields PROTECTED
 //
Handle_McCadCom_CasDocument myDoc;
Handle_McCadCom_CasView myView;
McCadTool_State myState;
Standard_Boolean myUndoState;
Standard_Boolean myRedoState;
McCadTool_TaskID myID;
Standard_Boolean myNeedDlg;
Standard_Boolean myNeedRect;
Standard_Boolean myNeedSelect;


private:

 // Methods PRIVATE
 //


 // Fields PRIVATE
 //


};





// other Inline functions and methods (like "C++: function call" methods)
//


#endif