#ifndef CIRCULAR_H
#define CIRCULAR_H

#include "list.h"

template <typename T>
class CircularLinkedList : public List<T> {
    public:
        CircularLinkedList() : List<T>() {}

        T front() {
            // TODO
                if ( empty() ) {
                        throw runtime_error("Empty list!");
                }else{
                        return this->head->data;
                }
        }

        T back() {
            // TODO
                if ( empty() ) {
                        throw runtime_error("Empty list!");
                }else{
                        return this->tail->data;
                }
        }

        void push_front(T value) {
            // TODO
            auto temp = new Node <T>;
            temp->data = value;
            if(empty()){
                    this->head = temp;
                    this->tail = temp;
                    this->head->next = temp;
                    this->head->prev = temp;
                    this->tail->next = temp;
                    this->tail->prev = temp;
            }else{
                    temp->next = this->head;
                    this->head->prev = temp;
                    this->head = temp;
                    this->tail->next = this->head;
            }
            this->nodes++;
        }

        void push_back(T value) {
            // TODO
                auto temp = new Node <T>;
                temp->data = value;
                if(empty()){
                        this->head = temp;
                        this->tail = temp;
                        this->head->next = temp;
                        this->head->prev = temp;
                        this->tail->next = temp;
                        this->tail->prev = temp;
                }else{
                        this->tail->next = temp;
                        temp->prev = this->tail;
                        temp->next = this->head;
                        this->head->prev = temp;
                        this->tail = temp;
                }
                this->nodes++;
        }

        void pop_front() {
            // TODO
                this->nodes--;
                if(size()==0){
                        this->head= nullptr;
                }
                this->tail->next = this->head->next;
                this->head->next->prev = nullptr;
                this->head = this->head->next;
        }

        void pop_back() {
            // TODO
            this->nodes--;
                if(size()==0){
                        this->head= nullptr;
                }
                this->tail->prev->next = this->head;
                this->head->prev = this->tail->prev;
                this->tail = this->tail->prev;
        }

        T operator[](int index) {
            // TODO
            if(this->head!= nullptr && index<this->nodes){
                auto contador=0;
                auto temp=this->head;
                if(index<=(this->size()/2)){
                    while(contador!=index){
                        temp=temp->next;
                        contador++;
                    }
                }
                else{
                    temp=this->tail;
                    while((index+contador)<this->size()-1){
                        temp=temp->prev;
                        contador++;
                    }
                }

                return temp->data;
            }

        }

        bool empty() {
            // TODO
            return this->nodes == 0;
        }

        int size() {
            // TODO
            return this->nodes;
        }

        void clear() {
            // TODO
            this->nodes = 0;
        }

        void sort() {
            // TODO
            for(int j=0; j<size()-1; j++){
                auto node = this->head;
                for(int i=0; i<size()-j-1; i++){
                    if(node->data > node->next->data){
                        T dataTemp = node->data;
                        node->data = node->next->data;
                        node->next->data = dataTemp;
                    }
                    node = node->next;
                }
            }

        }
    
        void reverse() {
            // TODO
                T array[size()];
                auto it = this->head;
                for (int i = 0; i <size() ; ++i) {
                        array[i] = it->data;
                        it = it->next;
                }
                auto temp = this->tail;

                for (int i = 0; i <size() ; ++i) {
                        temp->data = array[i];
                        temp = temp->prev;
                }
        }

        std::string name() {
            return "Circular Linked List";
        }

        BidirectionalIterator <T> begin() {
            // TODO
            return BidirectionalIterator<T>(this->head);
        }

	    BidirectionalIterator<T> end() {
            // TODO
            return BidirectionalIterator<T>(this->head);
        }

        void merge(CircularLinkedList<T> list) {
            // TODO
                for(int i=0;i<list.size();i++){
                        this->push_back(list[i]);}
        }

};

#endif