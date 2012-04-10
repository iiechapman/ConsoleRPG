/* 
 * File:   indefArticle.h
 * Author: evanchapman
 *
 * Created on April 10, 2012, 1:52 PM
 * 
 * Determines if a or an should be used before the given word
 * ie:
 * A horse versus An egg
 * 
 * returns true if word begins with vowel, otherwise false (begins with consonant)
 * 
 */

#ifndef INDEFARTICLE_H
#define	INDEFARTICLE_H

#include <string>

bool article(std::string word);




#endif	/* INDEFARTICLE_H */

