#include<bits/stdc++.h>
using namespace std;


/*
class hero{

public:
	int health;
	char level;

};

int main()
{
	hero ramesh;

	cout<<"size is->"<< sizeof(ramesh) <<endl;   //.......to know the size of OBJECT hero........

	cout<<"health is->"<<ramesh.health<<endl;    //it is not given any value thats why its giving garbage value
	cout<<"level of hero is->"<<ramesh.level<<endl;  //"?" it is also not provided
}

OUTPUT----->>>
size is->8
health is->6422356
level of hero is->?

*/



//;*****************************GETTER/SETTER*********************
/*
class hero{

private:   			//this can only be accessed inside the class definition i.e class hero
	int health;

public:				//this can be defined anywhere as long as we create its object
	char level;		



void print()
	{
		cout<<level<< endl;
	}


	int gethealth()			//this is used as health is private to access at other functions
	{
		return health;
	}

	char getlevel(){
		return level;
	}

	void sethealth(int h)		//this is used as health is private to access at other functions
	{							//it is also use to put conditions

		health=h;
	}

	void setlevel(char ch)
	{
		level=ch;
	}
};


int main()
{
	hero ramesh;

	cout<<"Ramesh health is->"<<ramesh.gethealth()<<endl;  //here it will give garbage , as no value is given

	ramesh.sethealth(70);            //......sethealth() is used to set the health
	ramesh.level='A';

	 cout<<"Ramesh health is->"<<ramesh.gethealth()<<endl; //here health is given thats why it is 70.
	 cout<<"Ramesh level  is->"<<ramesh.level<<endl;
}
output:
Ramesh health is->6422356
Ramesh health is->70
Ramesh level  is->A


*/



//********************C O N S T R U C T O R************************ 
/*
class hero{

private:
	int health;

public:				
	char level;		

hero(){							//constructor

	cout<<"constructor called"<<endl;
}

void print()
	{
		cout<<level<< endl;
	}


	int gethealth()			
	{
		return health;
	}

	char getlevel(){
		return level;
	}

	void sethealth(int h)		
	{							

		health=h;
	}

	void setlevel(char ch)
	{
		level=ch;
	}
};



int main()
{
	//static
	cout<<"NO constructor"<<endl;
	hero ramesh;		  //here when we create a class a class our construtor is called 
	cout<<"hello ramesh"<<endl;


	//dynamic
	hero *raju=new hero();
}
output:
NO constructor
constructor called
hello ramesh
constructor called
*/




//********************parameterized C O N S T R U C T O R************************ 

/*
here we can see both address And this keyword shows the same address

class hero{

private:   			//this can only be accessed inside the class definition i.e class hero
	int health;

public:				//this can be defined anywhere as long as we create its object
	char level;


hero(){							//constructor

	cout<<"constructor called"<<endl;
}


hero(int health)					//parameterized constructor
{
	cout<<"this is->"<<this<<endl;
	this->health=health;
}

void print()
	{
		cout<<"health is"<<health<<endl;
		cout<<"level is"<<level<<endl;
	}


	int gethealth()		
	{
		return health;
	}

	char getlevel(){
		return level;
	}

	void sethealth(int h)	
	{
		health=h;
	}

	void setlevel(char ch)
	{
		level=ch;
	}
};

int main()
{
	//static
	hero ramesh(20);   //we hav to give value as it is parameterized		 
	cout<<"Address of ramesh is->"<<&ramesh<<endl;
	ramesh.gethealth();

	//dynamic
	
}
output:
this is->0x61ff08
Address of ramesh is->0x61ff08

*/



//********************copyy  C O N S T R U C T O R************************ 



//to use copy constructor parameterized constructor is important

/*
class hero{

private:   			//this can only be accessed inside the class definition i.e class hero
	int health;

public:				//this can be defined anywhere as long as we create its object
	char level;

hero(){							

	cout<<" copy constructor called"<<endl;
}		

hero(int health)
{
	cout<<"this is->"<<this<<endl;
	this->health=health;
}

hero(int health,char ch)			
{
	this->health=health;
	this->level=ch;
}


hero(hero &temp)					//copy constructor    
{	
	cout<<"Copy constructor called"<<endl<<endl;    //  & is important otherwise it will trapped in infinite loop
	this->health=temp.health;
	this->level=temp.level;
}

void print()
	{

		cout<<"health is->"<<health<<endl;
		cout<<"level is->"<<level<<endl;
	}


	int gethealth()			
	{
		return health;
	}

	char getlevel(){
		return level;
	}

	void sethealth(int h)	
	{
		health=h;
	}

	void setlevel(char ch)
	{
		level=ch;
	}
};

int main()
{
	//static
	hero r(90,'c');
	r.print();

	hero s(r);
	s.print();   		 
	
}
output:
health is->90
level is->c
Copy constructor called

health is->90
level is->c
*/




//******************** shallow  copyy  C O N S T R U C T O R************************ 

/*

//to use copy constructor parameterized constructor is important


class hero{

private:   			//this can only be accessed inside the class definition i.e class hero
	int health;

public:				//this can be defined anywhere as long as we create its object
	char level;
	char *name;

hero(){							

	cout<<" constructor call"<<endl;
	 name=new char[100];

}		

hero(int health)
{
	cout<<"this is->"<<this<<endl;
	this->health=health;
}

hero(int health,char ch)			
{
	this->health=health;
	this->level=ch;
}


hero(hero &temp)					    
{	

	char *ch=new char[strlen(temp.name)+1];  //this is used foe deep copy
	strcpy(ch,temp.name);					//we created new array to show hero2
	this->name = ch;						//update hero1

	//cout<<"Copy constructor called"<<endl<<endl;    
	this->health=temp.health;
	this->level=temp.level;
}

void print()
	{
		cout<<endl;
		cout<<"Name is->"<<name<<endl;
		cout<<"health is->"<<health<<endl;
		cout<<"level is->"<<level<<endl<<endl;;
	}


	int gethealth()			
	{
		return health;
	}

	char getlevel(){
		return level;
	}

	void sethealth(int h)	
	{
		health=h;
	}

	void setlevel(char ch)
	{
		level=ch;
	}

	void setname(char name[])
	{
		strcpy(this->name, name);
	}
};

int main()
{
	hero hero1;
	hero1.sethealth(80);
	hero1.setlevel('A');
	char name[8]="ramesh";
	hero1.setname(name);


	hero1.print();


	hero hero2(hero1);
	hero2.print();

	cout<<"changing 1st char of hero one"<<endl;
	hero1.name[0]='k';
	hero1.print();

	cout<<"hero2 remains the same"<<endl;
	hero2.print();

	//using default copy constructor
	//hero hero2(hero1);  //or hero2=hero1;
	//hero2.print();

}
OUTPUT:
Name is->ramesh
health is->80
level is->A


Name is->ramesh
health is->80
level is->A

changing 1st char of hero one

Name is->kamesh
health is->80
level is->A

hero2 remains the same

Name is->ramesh
health is->80
level is->A
*/

	


//**************STATIC KEYWORD**************
class hero{

private:   			
	int health;

public:				
	char level;
	char *name;
	static int tymused; 			//it is static no need to create its object


hero(){							

	cout<<" constructor call"<<endl;
	 name=new char[100];

}		

hero(int health)
{
	cout<<"this is->"<<this<<endl;
	this->health=health;
}

hero(int health,char ch)			
{
	this->health=health;
	this->level=ch;
}


hero(hero &temp)					    
{	

	char *ch=new char[strlen(temp.name)+1];  //this is used foe deep copy
	strcpy(ch,temp.name);					//we created new array to show hero2
	this->name = ch;						//update hero1

	//cout<<"Copy constructor called"<<endl<<endl;    
	this->health=temp.health;
	this->level=temp.level;
}

void print()
	{
		cout<<endl;
		cout<<"Name is->"<<name<<endl;
		cout<<"health is->"<<health<<endl;
		cout<<"level is->"<<level<<endl<<endl;;
	}


	int gethealth()			
	{
		return health;
	}

	char getlevel(){
		return level;
	}

	void sethealth(int h)	
	{
		health=h;
	}

	void setlevel(char ch)
	{
		level=ch;
	}

	void setname(char name[])
	{
		strcpy(this->name, name);
	}

	static int random(){				//can only access stactic values //static function
		return tymused;
	}
};

 	int hero::tymused = 6;

int main()
{

	cout<< "time used to complete is->"<<hero::tymused <<endl;   //it belongs to classs not object
								 //this is static memory
	
	cout<< hero::random() <<endl;
}
//output:
//time used to complete is->6
