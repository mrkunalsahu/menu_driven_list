//Iterator can be used to traverse through and for opearations like adding element, deleting element, and viewing . F
#include<iostream>
#include<list>
using namespace std;
int main()
{
	int choice;

	list <float> lis;
	float t;
	list<float>::iterator it;
	cout<<"\n####################### LIST MENU ############################";
	cout<<"\n1. Enter to the REAR\n2. Enter to the Front\n3. Enter the DESIRED POSITION\n4. Deleting the element from the desired location\n5. Prfloat the list\nEnter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1: 
		cout<<"\nKeep Entering the elements and Enter 0 and then press ENTER to quit : ";
		while( cin>>t&&t)
		{
        lis.push_back(t);
		}
		break;


		case 2:
		cout<<"\nKeep Entering the element and Enter 0 and then press ENTER to quit : ";
		while(cin>>t&&t)
		{
			lis.push_front(t);
		}
		break;
	

	case 3 ://For adding element and using insert() function the name of list must be used it can not be achieved by usind iterator
	float k;
	cout<<"\nEnter the element from the list you want to insert element before : ";
    cin>>k;
    for(it=lis.begin();it!=lis.end();++it)
    {
    	if(*it==k)
    	{
    		cout<<endl<<k<<" found in the list now keep entering the non zero element to insert them before "<<k<<"(enter 0 and press ENTER to quit ) :  ";


    		while(cin>>t&&t)
    			{
    				lis.insert(it,t);//the element in the list can be inserted by using name of list itself not by the iterator
    			}
    	}
    }
 break;

 case 4 : 
 float elem;
 cout<<"Enter the element you want to delete from the list  : ";
 cin>>elem;
 for(it=lis.begin();it!=lis.end();++it)
 {
 	if(*it==elem)
 	{
 		it=lis.erase(it);
 		--t;
 	}
 }
break;

 case 5 :
 cout<<"\nLIST : ";
 for(it=lis.begin();it!=lis.end();++it)
 {
 	cout<<*it<<" ";

 }
break;

defaulis :
cout<<"\nWrong choice detected!!! Aborting!!! ";

}

return 0;
}