OOPs CONCEPT




OOPs --->>object oriented programming

Object ->  entity        --->state/property
	    (jo btati h)	|--->behaviour

	    for example:


	    	hero-->1.name   2.health   3.level                (properties)
	    		   1.attack     2.defend    3.emotes          (behaviour)


-------------------class----------- -   
user defined datatype(jo user khud define krta h) 
	for eg:
	int a;  string s;  char ch;      (these are already defined datatype)
	
	here we can use anything as a datatype 
	for eg:
		hero ritik:
		super s1;  ans anything      (in order to create any datatype we hav to mention it in our CLASS)


------------OBJECT----------
it is an instance of class through which we can access the class 
		for eg:



			class hero{							(  this is our CLASS)

				int health;
			}

			int main()
			{
				hero ramesh;          (here we created object [i.e ramesh] to perform operation in our class)
			}



	getter and setter

		it is used to access the values tha t are in private (access modify) in other functions 

		GETTER->it is used to read the value that is provided to it.
		SETTER->it is used to set the value .with the help of this we can also put various conditions



>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

dynamic ALLOCATION:                                  |      static ALLOCATION
													 |
													 |
eg:           int *i=new int;						 |     eg:           int i;
													 |
													 |    to create static memory with our own class    
to create dynamic memory with our own class          |	 eg:           hero raju;
eg:           hero *raju=new hero;                       |
 													 |     to print we will use raju.gethealth();  
 													 |
to print we will use (*raju).gethealth();            |
we can also use raju->gethealth();

<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


CONSTRUCTOR==

when we create any object it calls to a constructor !!!

what is constructor??->

there is always a default contructor:
1.no return type;       2.no input parameter:       3.invoke when object is created

when we create our own constructor the default constructor does not exist anymore.


PARAMETERIZED CONSTRUCTOR==

when there is 2 values with the same name we use **********this***** keyword

i.e. this stores the addres of current addresss
it acts as pointer ;
it shows the address of the parameter passed;



this->health=health;  
this->health (it is the health inside the private member)
health = this is the passed parameter


when we create our own constructor the default constructor does not exist anymore.


COPYY CONSTRUCTOR

copies object

hero s(70,'a');
s.print();

hero r(s);
r.print();

R will copy the parameters of (s) and print the same value;

when we create our own constructor the default constructor does not exist anymore.


DEEEP AND SHALLOW COPY 
it is used becoz the copy constructor copies every detail of one object to other
even if we do not want it;

thats why this constructor is required

default constructor makes SHALLOW copies
whereas if we want to do DEEP copy we will make our own copy constructor 




COPY ASSIGNMENT OPERATOR

hero a(10,c);
hero b(20,d);

if we write
	a=b;ib will copy to a;

	a.health=b.health;
	a.level=b.level;

**********************d e s t r u c t o r**************************

to dealloacate memory or to free the memory


1.name same
2.no return datatype
3.no parameters
4.default destructor
5.   '~' is used to differntiate destructor
6. object which r dynamic for those destructor is automatically created
7.called only once 


for static written as:
	~hero(){
		cout<<"destructor"<<endl;
	}

	for dynamic:
		delete b;



STATIC KEYWORD**************************

IT reates a data member for which  belongs to classsss

to access this we sont have any need to make its object
	we can access it wihtout its object;

example in oops file 

syntax:
	datatype classname :: fieldname = value;

	:: is called scope resolution


static functions******************

1.no need to create object
2.this keyword not aviavlabe
3.no pointer is useed
4.can only access static members
