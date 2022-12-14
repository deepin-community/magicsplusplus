
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileGeoPointsDecoderAttributes.h
    \brief Definition of GeoPointsDecoder Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef GeoPointsDecoderWrapper_H
#define GeoPointsDecoderWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "GeoPointsDecoder.h"










namespace magics {

class MagRequest;



class GeoPointsDecoderWrapper

{
public:
//  --  constructor
    GeoPointsDecoderWrapper();
    GeoPointsDecoderWrapper(GeoPointsDecoder*);
//  --  destructor
    virtual ~GeoPointsDecoderWrapper();
    virtual void set(const MagRequest&);

    GeoPointsDecoder* me()   { return geopointsdecoder_; }

   	virtual GeoPointsDecoder* object() { return geopointsdecoder_; }


	virtual void object(GeoPointsDecoder* o) {
		// Remember to delete the previous object
		geopointsdecoder_ = o;
		

	}



protected:
    GeoPointsDecoder* geopointsdecoder_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const GeoPointsDecoderWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif