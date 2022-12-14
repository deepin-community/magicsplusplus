
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 * 
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0. 
 * In applying this licence, ECMWF does not waive the privileges and immunities 
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileInputMatrixAttributes.h
    \brief Definition of InputMatrix Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/
   

#ifndef InputMatrixAttributes_H
#define InputMatrixAttributes_H

#include "magics.h"
#include "Matrix.h"
#include "InputMatrixInterpretor.h"
namespace magics {

class XmlNode;
class InputMatrixAttributes 
{
public:
//  --  constructor
    InputMatrixAttributes();
    
//  --  destructor
    virtual ~InputMatrixAttributes();
    
    virtual void set(const std::map<std::string, std::string>&);
    virtual void set(const XmlNode&);
    virtual void copy(const InputMatrixAttributes&);
    virtual bool accept(const std::string&);

    void setTag(const std::string& tag) { tag_ = tag; }

public:
	//  --  method
	virtual void print(std::ostream&) const;
	virtual void toxml(std::ostream& out) const;
	//  --  members:
	string tag_;
	bool simple_field_;
	string units_;
	string metadata_;
	string mapping_;
	double suppress_below_;
	double suppress_above_;
	Matrix field_;
	Matrix u_component_;
	Matrix v_component_;
	unique_ptr<InputMatrixInterpretor> organization_;
	Matrix wind_speed_;
	Matrix wind_direction_;
	 

private:
	friend ostream& operator<<(ostream& s,const InputMatrixAttributes& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif

