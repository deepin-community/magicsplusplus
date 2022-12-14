
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileBoxPlotDecoderAttributes.h
    \brief Definition of BoxPlotDecoder Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef BoxPlotDecoderWrapper_H
#define BoxPlotDecoderWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "BoxPlotDecoder.h"










namespace magics {

class MagRequest;



class BoxPlotDecoderWrapper

{
public:
//  --  constructor
    BoxPlotDecoderWrapper();
    BoxPlotDecoderWrapper(BoxPlotDecoder*);
//  --  destructor
    virtual ~BoxPlotDecoderWrapper();
    virtual void set(const MagRequest&);

    BoxPlotDecoder* me()   { return boxplotdecoder_; }

   	virtual BoxPlotDecoder* object() { return boxplotdecoder_; }


	virtual void object(BoxPlotDecoder* o) {
		// Remember to delete the previous object
		boxplotdecoder_ = o;
		

	}



protected:
    BoxPlotDecoder* boxplotdecoder_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const BoxPlotDecoderWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif