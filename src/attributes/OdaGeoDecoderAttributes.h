
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 * 
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0. 
 * In applying this licence, ECMWF does not waive the privileges and immunities 
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileOdaGeoDecoderAttributes.h
    \brief Definition of OdaGeoDecoder Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/
   

#ifndef OdaGeoDecoderAttributes_H
#define OdaGeoDecoderAttributes_H

#include "magics.h"
#include "BinningObject.h"
namespace magics {

class XmlNode;
class OdaGeoDecoderAttributes 
{
public:
//  --  constructor
    OdaGeoDecoderAttributes();
    
//  --  destructor
    virtual ~OdaGeoDecoderAttributes();
    
    virtual void set(const std::map<std::string, std::string>&);
    virtual void set(const XmlNode&);
    virtual void copy(const OdaGeoDecoderAttributes&);
    virtual bool accept(const std::string&);

    void setTag(const std::string& tag) { tag_ = tag; }

public:
	//  --  method
	virtual void print(std::ostream&) const;
	virtual void toxml(std::ostream& out) const;
	//  --  members:
	string tag_;
	string path_;
	string latitude_;
	string longitude_;
	string value_;
	string y_;
	string x_;
	int nb_rows_;
	string title_;
	string unit_;
	unique_ptr<BinningObject> odb_binning_;
	 

private:
	friend ostream& operator<<(ostream& s,const OdaGeoDecoderAttributes& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif

