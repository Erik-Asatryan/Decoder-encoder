#include <iostream>
typedef std::string str;

#ifndef __CODER__
#define __CODER__

# Բոլոր ֆունկցիաները մի header֊ում հայտարարելը այդքան էլ լավ գաղափար չէ։
# Ամեն մի .h ֆայլին պետք է համապատասխանի մեկ .cpp ֆայլ։
# Ինչպես նաև ցանկալի է, որ ամեն գրադարանի համապատասխան ֆայլերը inc, src, obj֊ներում առանձնացված լինեն գրադարանի անունով directory֊ներում
str encoder(str);
str decoder(str);
void unit_test(str);

#endif
