#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<cstdlib>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include <time.h>
#include <bits/stdc++.h>


#define HASHTAB_SIZE 120
#define HASHTAB_SIZE2 240

using namespace std;
  

template <typename K, typename V>
  

class HashNode {
public:
    V value;
    K key;
  

    HashNode(K key, V value)
    {
        this->value = value;
        this->key = key;
    }
};
  

template <typename K, typename V>
  

class HashTable {

    HashNode<K, V>** arr;
    int capacity;

    int size;

    HashNode<K, V>* dummy;
  
public:
    HashTable()
    {

        capacity = 100;
        size = 0;
        arr = new HashNode<K, V>*[capacity];
  

        for (int i = 0; i < capacity; i++)
            arr[i] = NULL;
  


        dummy = new HashNode<K, V>(-1, -1);
    }


    int hashCode(K key)
    {
        return key % capacity;
    }
  

    void insertNode(K key, V value)
    {
        HashNode<K, V>* temp = new HashNode<K, V>(key, value);
  

        int hashIndex = hashCode(key);
  		

        while (arr[hashIndex] != NULL
               && arr[hashIndex]->key != key
               && arr[hashIndex]->key != -1) {
            hashIndex++;
            hashIndex %= capacity;
        }
        
        int selector = 0;
  		while ((arr[hashIndex] != NULL)
  				&& (arr[hashIndex]->key != -1)){
  					if (arr[hashIndex]->key == key)
  					selector = 1;
  				}


        if (selector == 0){
        	
       
        if (arr[hashIndex] == NULL
            || arr[hashIndex]->key == -1)
            size++;
        arr[hashIndex] = temp;

    }
    else{
    	for (int i = 0; i < 100; i++){
    		hashIndex = (hashCode(key) + 1) % capacity;
    		if (arr[hashIndex]->key == key){
    			cout<<"Key is avaible" << endl;
    			break;
			}
    		if (arr[hashIndex] == NULL){
    		arr[hashIndex] = temp;
    			break;
    		}
    	}
    }
    }
  

    V deleteNode(int key)
    {
    	 
        int hashIndex = hashCode(key);
  
       
        while (arr[hashIndex] != NULL) {
            
            if (arr[hashIndex]->key == key) {
                HashNode<K, V>* temp = arr[hashIndex];
  
             
                arr[hashIndex] = dummy;
  
              
                size--;
                return temp->value;
            }
            hashIndex++;
            hashIndex %= capacity;
        }
  
       
        return NULL;
    }
  
    
    V get(int key)
    {
        
        int hashIndex = hashCode(key);
        int counter = 0;
  
       
        while (arr[hashIndex] != NULL) { 
  
            if (counter++ > capacity) 
                return NULL;
  
          
            if (arr[hashIndex]->key == key)
                return arr[hashIndex]->value;
            hashIndex++;
            hashIndex %= capacity;
        }
  
        
    return NULL;
    }
    
   
    int sizeofTable()
    {
        return size;
    }
  
   
    bool isEmpty()
    {
    	cout << "There is nothing in table!!" << endl;
        return size == 0;
    }
  
   
    void display()
    {
        for (int i = 0; i < capacity; i++) {
            if (arr[i] != NULL && arr[i]->key != -1)
                cout << "Key =  " << arr[i]->key
                     << "  Value = "
                     << arr[i]->value << endl;
        }
    }
};
/*
	void delete_htable(int size)
	{
		int i=0;
		for (i = 0; i < size; i++)
		{
			free(HashTable<int, int>);
		}
	printf("Хэш таблица была удалена!\n");
	}
*/
/*
void free_table(HashTable* table) {
    // Frees the table
    for (int i=0; i<table->size; i++) {
        Ht_item* item = table->items[i];
        if (item != NULL)
            free_item(item);
    }
 
    free(table->items);
    free(table);
}
*/
int main()
{
	setlocale(LC_ALL,"rus");
    HashTable<int, int>* h = new HashTable<int, int>;
    h->insertNode(1, 120);
    h->insertNode(2, 2);
    h->insertNode(3, 3);
    h->insertNode(4, 8);
    h->insertNode(5, 9);
    h->insertNode(6, 7);
    h->insertNode(7, 2);
    h->insertNode(8, 1);
    h->insertNode(9, 20);
    h->insertNode(10, 3);
    h->display();
    
    int K, V;
    int c;
    while(1)
	{
      cout << "         " << endl;
      cout<<"1. Insert value into table "<<endl;
      cout<<"2. Find value behind key"<<endl;
      cout<<"3. Delete all value behind kee" << endl;
      cout<<"4. Display the whole table" << endl;
      cout<<"5. Display the size of table" << endl;
      cout<<"6. Exit"<<endl;
      cout << "           " << endl;
      cout<<"Choose command: ";
      cout << "           " << endl;
      cin>>c;
      switch(c) {
         case 1:
            cout<<"Еnter the value you want to insert into the table : ";
            cin>>V;
            cout<<"Enter the key to which the value will be assigned : ";
            cin>>K;
             h->insertNode(K, V);
         break;
         case 2:
            cout<<"Enter the key to which you want to find: ";
            cin>>K;
            if(h->get(K) == -1) {
               cout<<"No item was found for the given key ! "<<K<<endl;
               continue;
            } else {
               cout<<"Element behind the key № "<<K<<" : ";
               cout<<h->get(K)<<endl;
            }
         break;
         case 3:
            cout<<"Enter the key you want to delete: ";
            cin>>K;
            h->deleteNode(K);
         break;
         case 4:
         	h->display();
         	break;
        case 5:
         	cout << "Size of table: " << h->sizeofTable() << endl;
         	break;
         case 6:
            exit(1);
         default:
            cout<<"\nChoise the right command:\n";
      }
   }
   return 0;
}

    
    //cout << "Размер таблицы:" << h->sizeofTable() << endl;
    //cout << h->deleteNode(2) << endl;
    //h->display();
    //cout << h->sizeofTable() << endl;
    //cout << h->isEmpty() << endl;
    //cout << h->get(1);
  
