
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 * 
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0. 
 * In applying this licence, ECMWF does not waive the privileges and immunities 
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileDateAxisMethodAttributes.h
    \brief Definition of DateAxisMethod Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/
   

#ifndef DateAxisMethodAttributes_H
#define DateAxisMethodAttributes_H

#include "magics.h"
#include "Colour.h"
namespace magics {

class XmlNode;
class DateAxisMethodAttributes 
{
public:
//  --  constructor
    DateAxisMethodAttributes();
    
//  --  destructor
    virtual ~DateAxisMethodAttributes();
    
    virtual void set(const std::map<std::string, std::string>&);
    virtual void set(const XmlNode&);
    virtual void copy(const DateAxisMethodAttributes&);
    virtual bool accept(const std::string&);

    void setTag(const std::string& tag) { tag_ = tag; }

public:
	//  --  method
	virtual void print(std::ostream&) const;
	virtual void toxml(std::ostream& out) const;
	//  --  members:
	string tag_;
	string method_;
	bool years_;
	string year_font_;
	string year_font_style_;
	double year_height_;
	bool months_;
	string month_composition_;
	string month_font_;
	string month_font_style_;
	double month_height_;
	string days_;
	string day_composition_;
	int day_position_;
	string day_font_;
	string day_font_style_;
	double day_height_;
	bool hours_;
	string hour_font_;
	string hour_font_style_;
	double hour_height_;
	unique_ptr<Colour> year_colour_;
	unique_ptr<Colour> month_colour_;
	unique_ptr<Colour> day_colour_;
	unique_ptr<Colour> sunday_colour_;
	unique_ptr<Colour> hour_colour_;
	 

private:
	friend ostream& operator<<(ostream& s,const DateAxisMethodAttributes& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif

