#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <string.h>
#include <fstream>
#include <iomanip>

using namespace std;

struct TREE                            
{
	double x;                               
	TREE* leftson, * rightson;                          
};

void add_tree(double x, TREE*& newtree);
void show(TREE*& Tree);
void del_tree(TREE*& Tree);
void write_tree(TREE* p, ostream& out);
float  *read_from_file(float *massivus, int n);

void show(TREE*& Tree)
{
	if (Tree != NULL)               
	{	
		show(Tree->leftson);    
		cout << Tree->x;
		show(Tree->rightson);
	}
	cout << endl;
}

void del_tree(TREE*& Tree) {
	if (Tree != NULL)
	{
		del_tree(Tree->leftson);
		del_tree(Tree->rightson);
		delete Tree;
		Tree = NULL;
	}
}

void add_tree(double x, TREE*& newtree) 
{

	if (NULL == newtree)            
	{
		
		newtree = new TREE;             
		newtree->x = x;                  
		newtree->leftson = newtree->rightson = NULL;  
	}

	if (x < newtree->x)   
	{
		if (newtree->leftson != NULL)
		{
			add_tree(x, newtree->leftson);
			
		}
		else          
		{
			
			newtree->leftson = new TREE;             
			newtree->leftson->leftson = newtree->leftson->rightson = NULL; 
			newtree->leftson->x = x;                  
		}
	}

	if (x > newtree->x)             
	{
		if (newtree->rightson != NULL) add_tree(x, newtree->rightson); 
		else              
		{
			newtree->rightson = new TREE;               
			newtree->rightson->leftson = newtree->rightson->rightson = NULL;   
			newtree->rightson->x = x;                    
		}
	}
}

float  *read_from_file(float *massivus, int n) {  
	int i = 0;
	float x = 0;
	float* p; 
	p = massivus;
	if (!(p = (float*)malloc(n * sizeof(float)))) {  
	printf("There is no memory for this masive!");
		return (p);
	}
	else {
	FILE* fp;
	fp = fopen("tree.txt", "r");  
	if (fp == NULL) {
		printf("file not found");
	}
	else {
		for (i = 0; i < n; i++) {
			fscanf(fp, "%f8.2",  &x);   
			*((float*)p + i) = x;    
			}
		}
fclose(fp);
	return (p);
}
}

int main()
{
	cout << "massive from txt:" << endl;
	cout << "   " << endl;
	string line;
	ifstream in("D:\\My Projects\\Forc++\\Treeprogr\\tree.txt"); 
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << std::endl;
        }
    }
    in.close();

	
	cout << "   " << endl;
	cout << "static masssive:" << endl;
	double mas[7];
	mas[0] = 5.2;
	mas[1] = 6.6;
	mas[2] = 11.3;
	mas[3] = 2.2;
	mas[4] = 1.7;
	mas[5] = 8.1;
	mas[6] = 6.3;

	TREE* Trees = NULL;
	
	int i = 0;
	for (i = 0; i < 7; i++)
	{
		//cout << "one element added" << endl;
		add_tree(mas[i], Trees);
	}
	show(Trees);
	cout << '\n  ';
	del_tree(Trees);

/*
	float *masiv = new float[5]{1.2, 4.5, 6.7, 4.2, 5.0};	
	TREE* Trees = NULL;
	
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		//cout << "one element added" << endl;
		add_tree(masiv[i], Trees);
	}
	show(Trees);
	cout << '\n';
	del_tree(Trees);
	
	cout << "          " << endl;

	*/
	//float *massivus;
	//massivus = (float*)malloc(5 * sizeof(float));
	//massivus = read_from_file(massivus,5);

}


