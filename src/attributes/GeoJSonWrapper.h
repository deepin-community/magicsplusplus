
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileGeoJSonAttributes.h
    \brief Definition of GeoJSon Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef GeoJSonWrapper_H
#define GeoJSonWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "GeoJSon.h"










namespace magics {

class MagRequest;



class GeoJSonWrapper

{
public:
//  --  constructor
    GeoJSonWrapper();
    GeoJSonWrapper(GeoJSon*);
//  --  destructor
    virtual ~GeoJSonWrapper();
    virtual void set(const MagRequest&);

    GeoJSon* me()   { return geojson_; }

   	virtual GeoJSon* object() { return geojson_; }


	virtual void object(GeoJSon* o) {
		// Remember to delete the previous object
		geojson_ = o;
		

	}



protected:
    GeoJSon* geojson_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const GeoJSonWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif