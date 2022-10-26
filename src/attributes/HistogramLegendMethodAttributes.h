
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 * 
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0. 
 * In applying this licence, ECMWF does not waive the privileges and immunities 
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileHistogramLegendMethodAttributes.h
    \brief Definition of HistogramLegendMethod Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/
   

#ifndef HistogramLegendMethodAttributes_H
#define HistogramLegendMethodAttributes_H

#include "magics.h"
#include "Colour.h"
namespace magics {

class XmlNode;
class HistogramLegendMethodAttributes 
{
public:
//  --  constructor
    HistogramLegendMethodAttributes();
    
//  --  destructor
    virtual ~HistogramLegendMethodAttributes();
    
    virtual void set(const std::map<std::string, std::string>&);
    virtual void set(const XmlNode&);
    virtual void copy(const HistogramLegendMethodAttributes&);
    virtual bool accept(const std::string&);

    void setTag(const std::string& tag) { tag_ = tag; }

public:
	//  --  method
	virtual void print(std::ostream&) const;
	virtual void toxml(std::ostream& out) const;
	//  --  members:
	string tag_;
	int label_frequency_;
	bool histo_border_;
	bool histo_mean_;
	int histo_mean_marker_;
	double histo_mean_size_;
	bool histo_max_;
	int histo_grid_thickness_;
	unique_ptr<Colour> histo_border_colour_;
	unique_ptr<Colour> histo_mean_colour_;
	unique_ptr<Colour> histo_grid_colour_;
	LineStyle histo_grid_style_;
	 

private:
	friend ostream& operator<<(ostream& s,const HistogramLegendMethodAttributes& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif

