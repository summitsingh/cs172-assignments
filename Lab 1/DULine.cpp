//----------------------------------------------------------------------------
//
//  DU Line class
//    Implementation
//
//  This class represents a line in two-dimensional space.
//
//----------------------------------------------------------------------------
//
//  Author:         Hoi Man Chang
//  Course:         MCS172
//  Date:           02/06/98
//
//  Modified:       JL Popyack: 04/28/98, 5/13/98, 4/22/99, 4/9/2
//
//----------------------------------------------------------------------------

	#include <iostream>
	#include <string>

	using namespace std ;
	#include "DULine.h"
	

//----------------------------------------------------------------------------
//----- Constructors ---------------------------------------------------------
//----------------------------------------------------------------------------

	DULine::DULine () { } 

	DULine::DULine (int x1, int y1, int x2, int y2)
	{ 
	      p1_ = DUPoint(x1,y1) ;
	      p2_ = DUPoint(x2,y2) ;
	}

	DULine::DULine (const DUPoint &p1, const DUPoint &p2)

	{ 
	      p1_ = p1 ;
	      p2_ = p2 ;
	}

//----------------------------------------------------------------------------
//----- Inspectors -----------------------------------------------------------
//----------------------------------------------------------------------------

	DUPoint DULine::getPoint1 () const

	{
		return p1_ ;
	}

	DUPoint DULine::getPoint2 () const

	{
		return p2_ ;
	}

//----------------------------------------------------------------------------
//----- Mutators -------------------------------------------------------------
//----------------------------------------------------------------------------

	void DULine::setLine (int x1, int y1, int x2, int y2)

	{
		setPoint1(x1,y1) ;
		setPoint2(x2,y2) ;
	}

	void DULine::setLine (const DUPoint &p1, const DUPoint &p2)

	{
		setPoint1(p1) ;
		setPoint2(p2) ;
	}

	void DULine::setPoint1 (int x, int y)

	{
		p1_ = DUPoint(x,y) ;
	}

	void DULine::setPoint2 (int x, int y)

	{
		p2_ = DUPoint(x,y) ;
	}

	void DULine::setPoint1 (const DUPoint &p)

	{
		p1_ = p ;
	}

	void DULine::setPoint2 (const DUPoint &p)

	{
		p2_ = p ;
	}


//----------------------------------------------------------------------------
//----- Facilitators ---------------------------------------------------------
//----------------------------------------------------------------------------

	string DULine :: toString ()

	{
		string s = "[ " + getPoint1().toString() + "..." + getPoint2().toString() + " ]" ;
		return s ;
	}
