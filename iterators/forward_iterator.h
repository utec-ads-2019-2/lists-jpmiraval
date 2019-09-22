#ifndef FORWARD_ITERATOR_H
#define FORWARD_ITERATOR_H

#include "../iterator.h"

template <typename T> 
class ForwardIterator : public Iterator<T> {
    public:
        ForwardIterator() : Iterator<T>() {};
        explicit ForwardIterator(Node<T> *node) : Iterator<T>(node) {};

        // Aquí estás creando un nuevo iterador
        ForwardIterator<T> operator=(ForwardIterator<T> other) {
            return ForwardIterator(other.current);
        }

        bool operator!=(ForwardIterator<T> other) {
            return this->current!=other.current;
        }

        // Falta controlar el caso vacío
        ForwardIterator<T> operator++() {
            this->current = this->current->next;
            return *this;
        }

        // Falta controlar el caso vacío
        T operator*() {
            return this->current->data;
        }
};

#endif
