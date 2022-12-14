
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 * 
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0. 
 * In applying this licence, ECMWF does not waive the privileges and immunities 
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileHistogramAttributes.h
    \brief Definition of Histogram Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/
   

#ifndef HistogramAttributes_H
#define HistogramAttributes_H

#include "magics.h"
#include "LevelSelection.h"
#include "Colour.h"
namespace magics {

class XmlNode;
class HistogramAttributes 
{
public:
//  --  constructor
    HistogramAttributes();
    
//  --  destructor
    virtual ~HistogramAttributes();
    
    virtual void set(const std::map<std::string, std::string>&);
    virtual void set(const XmlNode&);
    virtual void copy(const HistogramAttributes&);
    virtual bool accept(const std::string&);

    void setTag(const std::string& tag) { tag_ = tag; }

public:
	//  --  method
	virtual void print(std::ostream&) const;
	virtual void toxml(std::ostream& out) const;
	//  --  members:
	string tag_;
	double min_;
	double max_;
	int count_;
	int tolerance_;
	double reference_;
	double interval_;
	doublearray list_;
	double width_;
	unique_ptr<LevelSelection> levels_;
	unique_ptr<Colour> colour_;
	 

private:
	friend ostream& operator<<(ostream& s,const HistogramAttributes& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif

