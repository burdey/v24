//
// Created by Satori on 2022/6/3.
//

#include "StoreChain.h"

StoreChain::StoreChain(string n){
    name = n;
    int number_of_books = 6;

    bookStores = new BookStore* [number_of_books];
    for(int i=0; i<6; i++){
        if(i<6){
            BarnesNoble* store= new BarnesNoble();
            bookStores[i] = store;
        }
        else{
            Dymocks* store = new Dymocks();
            bookStores[i] = store;
        }
    }
}

BookStore** StoreChain::get_bookStores(){
    return bookStores;
}