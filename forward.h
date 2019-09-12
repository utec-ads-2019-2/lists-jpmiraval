#ifndef FORWARD_H
#define FORWARD_H

#include "list.h"
#include "iterators/forward_iterator.h"

template <typename T>
class ForwardList : public List<T> {
    public:
        ForwardList() : List<T>() {}

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
            Node<T> *temp = new Node<T>;
            temp->data = value;
            this->nodes++;

            temp->next = this->head;
            this->head = temp;
        }

        void push_back(T value) {
            // TODO
            Node<T> *temp = new Node<T>;
            temp->data = value;
            this->nodes++;
            this->tail->next = temp;
            temp->next = nullptr;
            this->tail = temp;

        }

        void pop_front() {
            // TODO
            if(empty()){
                    throw runtime_error("Empty List!");
            }else{
                    auto temp = this->head->next;
                    this->head = temp;
                    this->nodes--;
            }
        }

        void pop_back() {
            // TODO
                if(empty()){
                        throw runtime_error("Empty List!");
                }else{
                        auto temp = this->head;
                        while(temp->next != this->tail){
                                temp = temp->next;
                        }
                        this->tail = temp;
                        this->tail->next =nullptr;
                        this->nodes--;
                }
        }

        T operator[](int index) {
            // TODO
            auto temp = this->head;

            for(int i = 0; i<index; i++){
                    temp = temp->next;
            }

            return temp->data;
        }

        bool empty() {
            // TODO
            return this->nodes==0;
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
            if (size() <= 1) {
                return;
            }else{
                int *array= new int [size()];
                Node<T>*it = this->head;
                for (int i = 0; i <size() ; ++i) {
                    array[i] = it->data;
                    it = it->next;
                }
                it = this->head;
                for (int j = size()-1; j >=0 ; j--) {
                    it->data = array[j];
                    it = it->next;
                }
            }

        }

        std::string name() {
            return "Forward List";
        }

        ForwardIterator<T> begin() {
            // TODO

            return ForwardIterator <T> (this->head);
        }

	    ForwardIterator<T> end() {
            // TODO

            return ForwardIterator <T> (this->tail->next);
        }

        void merge(ForwardList<T> list) {
            // TODO
            auto temp = this->head;
            for(int i = 0; i < list.size();i++){
                push_back(temp->data);
                temp = temp->next;
            }
        }
};

#endif