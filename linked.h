#ifndef LINKED_H
#define LINKED_H

#include "list.h"
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
            Node *temp = new Node <T>;
            temp->data = value;
                if(empty()){
                        this->tail = temp;
                }
            this->nodes++;
            temp->next = this->head;
            this->head->prev = temp;
            this->head = temp;
        }

        void push_back(T value) {
            // TODO
                Node *temp = new Node <T>;
                temp->data = value;
                if(empty()){
                        this->head = temp;
                }
                this->tail->next = temp;
                temp->prev = this->tail;
                this->tail = temp;
                temp->next = nullptr;
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
            this->tail->prev->next = nullptr;
            this->tail = this->tail->prev;
        }

        T operator[](int index) {
            // TODO
                if (index > size()){
                        throw runtime_error("Out of range");
                }else{
                        auto temp = this->Head;
                        for(int i = 0; i < index;i++){
                                temp = temp->next;
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
            while(!empty()){
                    pop_front();
            }
        }

        void sort() {
            // TODO
                auto temp = this->head;
                auto temp2 = this->head;
                for(int i = 0; i < size(); i++){
                        for(int k = 0; k < size(); k++){
                                temp2 = temp->next;
                                if(temp2->data < temp->data){
                                        auto temporal = temp2->data;
                                        temp2->data = temp->data;
                                        temp->data = temporal;
                                }
                        }
                        temp = temp->next;
                        temp2 = this->head;
                }
        }
    
        void reverse() {
            // TODO
            auto temp = this->head;
            auto temp2 = this->tail
                    while(temp->next != temp2 || temp->next != temp2->prev){
                            auto dataTemp = temp->data;
                            temp->data = temp2->data;
                            temp2->data = dataTemp;

                            temp = temp->next;
                            temp2 = temp2->prev;
                    }
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