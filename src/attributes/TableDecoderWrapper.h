
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileTableDecoderAttributes.h
    \brief Definition of TableDecoder Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef TableDecoderWrapper_H
#define TableDecoderWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "TableDecoder.h"








#include "BinningObjectWrapper.h"


namespace magics {

class MagRequest;



class TableDecoderWrapper

{
public:
//  --  constructor
    TableDecoderWrapper();
    TableDecoderWrapper(TableDecoder*);
//  --  destructor
    virtual ~TableDecoderWrapper();
    virtual void set(const MagRequest&);

    TableDecoder* me()   { return tabledecoder_; }

   	virtual TableDecoder* object() { return tabledecoder_; }


	virtual void object(TableDecoder* o) {
		// Remember to delete the previous object
		tabledecoder_ = o;
		

	}



protected:
    TableDecoder* tabledecoder_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const TableDecoderWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif