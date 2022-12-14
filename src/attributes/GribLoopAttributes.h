
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 * 
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0. 
 * In applying this licence, ECMWF does not waive the privileges and immunities 
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileGribLoopAttributes.h
    \brief Definition of GribLoop Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/
   

#ifndef GribLoopAttributes_H
#define GribLoopAttributes_H

#include "magics.h"
#include "GribAddressMode.h"
#include "GribLoopStep.h"
#include "WindMode.h"
namespace magics {

class XmlNode;
class GribLoopAttributes 
{
public:
//  --  constructor
    GribLoopAttributes();
    
//  --  destructor
    virtual ~GribLoopAttributes();
    
    virtual void set(const std::map<std::string, std::string>&);
    virtual void set(const XmlNode&);
    virtual void copy(const GribLoopAttributes&);
    virtual bool accept(const std::string&);

    void setTag(const std::string& tag) { tag_ = tag; }

public:
	//  --  method
	virtual void print(std::ostream&) const;
	virtual void toxml(std::ostream& out) const;
	//  --  members:
	string tag_;
	intarray dimension_;
	longintarray dim_1_;
	longintarray dim_2_;
	longintarray dim_colour_;
	longintarray dim_;
	string path_;
	string id_;
	bool scaling_;
	bool derived_scaling_;
	double scaling_factor_;
	double scaling_offset_;
	double regular_resolution_;
	string interpolation_method_;
	int missing_fill_count_;
	unique_ptr<GribAddressMode> address_mode_;
	unique_ptr<GribLoopStep> step_;
	unique_ptr<WindMode> wind_mode_;
	 

private:
	friend ostream& operator<<(ostream& s,const GribLoopAttributes& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif

