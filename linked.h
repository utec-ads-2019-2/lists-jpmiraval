#ifndef LINKED_H
#define LINKED_H

#include "list.h"
#include "algorithm"
#include "iterators/bidirectional_iterator.h"

template <typename T>
class LinkedList : public List<T> {
    public:
        LinkedList() : List<T>() {}

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

        }

        void push_back(T value) {
            // TODO
            auto nodo_nuevo=new Node<T>();
            nodo_nuevo->data=value;
            if(this->head== nullptr){
                this->head=nodo_nuevo;}
            else{
                nodo_nuevo->prev=this->tail;
                this->tail->next=nodo_nuevo;}
            this->tail=nodo_nuevo;
            this->nodes++;
        }

        void pop_front() {
            // TODO
            this->head->next->prev = nullptr;
            this->head = this->head->next;
            this->nodes--;

        }

        void pop_back() {
            // TODO
            auto temp = this->tail;
            this->tail = this->tail->prev;
            temp->prev = nullptr;
            delete temp;

            if(this->size()<=1){
                this->head = nullptr;
                this->tail = nullptr;
            }
            this->nodes--;
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
            while(this->nodes != 0) pop_back();
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
            if(this->nodes>1){
                Node<T>* temp1= nullptr;
                Node<T>* temp2= this->head;
                Node<T>* temp3= temp2->next;
                while(temp2!= nullptr){
                    temp2->next=temp1;
                    temp2->prev=temp3;
                    temp1=temp2;
                    temp2=temp3;
                    if(temp3!= nullptr)
                        temp3=temp3->next;}
                Node<T>* temporal= this->head;
                this->head=this->tail;
                this->tail=temporal;}
        }

        std::string name() {
            return "Linked List";
        }

        BidirectionalIterator<T> begin() {
            // TODO
            return BidirectionalIterator<T>(this->head);
        }

	    BidirectionalIterator<T> end() {
            // TODO
            return BidirectionalIterator<T> (this->tail->next);
        }

        void merge(LinkedList<T> list) {
            // TODO
            auto temp = list.head;
            for(int i = 0; i < list.size(); i++){
                    push_back(temp->data);
                    temp = temp->next;
            }
        }
};

#endif