#ifndef TEMPLATE_CPP
#define TEMPLATE_CPP


#include <iostream>
#include <set>


template <typename Type>
std::ostream& operator<<(std::ostream& out, const std::set<Type>& lst) {
    typename std::set<Type>::iterator it = lst.begin();

    if (lst.size() == 0) {
        out << " nothing";
        return out;
    }

    out << "[ ";
    for ( int i = lst.size() ; i > 1 ; it++, i-- ) {
        out << "\'" << *(*it) << "\', ";
    }
    out << "\'" << *(*it) << "\' ]";
    return out;
}

#endif // TEMPLATE_CPP