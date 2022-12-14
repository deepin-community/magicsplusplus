
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 * 
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0. 
 * In applying this licence, ECMWF does not waive the privileges and immunities 
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileEpsPlumeAttributes.h
    \brief Definition of EpsPlume Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/
   

#ifndef EpsPlumeAttributes_H
#define EpsPlumeAttributes_H

#include "magics.h"
#include "Colour.h"
namespace magics {

class XmlNode;
class EpsPlumeAttributes 
{
public:
//  --  constructor
    EpsPlumeAttributes();
    
//  --  destructor
    virtual ~EpsPlumeAttributes();
    
    virtual void set(const std::map<std::string, std::string>&);
    virtual void set(const XmlNode&);
    virtual void copy(const EpsPlumeAttributes&);
    virtual bool accept(const std::string&);

    void setTag(const std::string& tag) { tag_ = tag; }

public:
	//  --  method
	virtual void print(std::ostream&) const;
	virtual void toxml(std::ostream& out) const;
	//  --  members:
	string tag_;
	string method_;
	bool legend_;
	bool line_;
	int line_thickness_;
	bool forecast_;
	int forecast_line_thickness_;
	bool control_;
	int control_line_thickness_;
	bool median_;
	int median_line_thickness_;
	bool shading_;
	doublearray shading_levels_;
	stringarray shading_colours_;
	unique_ptr<Colour> line_colour_;
	LineStyle line_style_;
	unique_ptr<Colour> forecast_line_colour_;
	LineStyle forecast_line_style_;
	unique_ptr<Colour> control_line_colour_;
	LineStyle control_line_style_;
	unique_ptr<Colour> median_line_colour_;
	LineStyle median_line_style_;
	 

private:
	friend ostream& operator<<(ostream& s,const EpsPlumeAttributes& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif

