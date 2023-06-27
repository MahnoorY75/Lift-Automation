//#include<iostream>
//using namespace std;
//
//class lift_floors {
//public:
//	int  floor;
//	char floor_status; //A for active N for not active
//	lift_floors* next;
//	lift_floors* prev;
//	lift_floors(int data) {
//		this->floor = data;
//		this->next = NULL;
//		this->prev = NULL;
//		this->floor_status = 'A';
//	}
//};
////void populate_list(int floor, lift_floors*& head, lift_floors*& tail, lift_floors*& current)
////{
////	lift_floors* node = new lift_floors(floor);
////	if (head == NULL)
////	{
////		head = node;
////		tail = node;
////		current = head;
////	}
////	else
////	{
////		lift_floors* temp = head;
////		while (temp->next != NULL)
////		{
////			temp = temp->next;
////		}
////		temp->next = node;
////		node->prev = temp;
////		tail = node;
////	}
////}
//void Print_list(lift_floors* head)
//{
//	cout << "----------------------------------" << endl;
//	while (head)
//	{
//		cout<<"Floor: " << head->floor << endl;
//		cout << "Status: "<<head->floor_status;
//		if (head->floor_status == 'A')cout << " (Available)";
//		else cout << " (Not-Available)";
//		cout << endl;
//		cout << "----------------------------------" << endl;
//		head = head->next;
//	}
//}
//void Current_lift(lift_floors* current)
//{
//	cout << "----------------------------------" << endl;
//	cout << "Current Floor:" << endl;
//	cout << "Floor: " << current->floor << endl;
//	cout << "Status: " << current->floor_status;
//	if (current->floor_status == 'A')cout << " (Available)";
//	else cout << " (Not-Available)";
//	cout << endl;
//	cout << "----------------------------------" << endl;
//}
//int liftup(lift_floors*& current, lift_floors* head, lift_floors* tail, int requested_floor)
//{
//	//recurrsive funcation to take lift up
//
//	cout << "Floor:  " << current->floor << endl;
//	current = current->next;
//	if (current->floor == requested_floor)
//	{
//		cout << "Floor:  " << current->floor << endl;
//		return (current->floor);
//	}
//liftup(current, head, tail, requested_floor);
//
//
//}
//int liftdown(lift_floors*& current, lift_floors* head, lift_floors* tail, int requested_floor)
//{
//	//recurrsive funcation to bring the lift down
//	cout << "Floor:  " << current->floor << endl;
//	current = current->prev;
//	if (current->floor == requested_floor)
//	{
//		cout << "Floor:  " << current->floor << endl;
//		return (current->floor);
//	}
//	liftdown(current, head, tail, requested_floor);
//}
//
//int lift_operating_system(int requested_floor, lift_floors*& current, lift_floors*& head, lift_floors*& tail, char lift_status)
//{
//	if (lift_status == 'H')
//	{
//		cout << "-------------------------------------" << endl;
//		cout << "Sorry! Lift is halted :(" << endl;
//		cout << "-------------------------------------" << endl;
//	}
//	//all lift related logic will be written in this bloack along with validation. In this funcation, decide
//	//if the lift goes up or down
//	else
//	{
//		bool flag = false;
//		lift_floors* temp = head;
//		do
//		{
//			if (temp->floor == requested_floor)
//			{
//				if (temp->floor_status == 'N')
//				{
//					flag = true;
//				}
//
//			}
//			temp = temp->next;
//		} while (temp != tail);
//		if (flag)
//		{
//			cout << "-------------------------------------" << endl;
//			cout << "Sorry! the lift for Floor: " << requested_floor << " is InActive" << endl;
//			cout << "-------------------------------------" << endl;
//		}
//		else if (requested_floor > current->floor)
//		{
//			//Up
//			cout << "Going Up" << endl;
//			cout << "-------------------------------------" << endl;
//			cout << "You are at Floor: " << liftup(current, head, tail, requested_floor) << endl;
//			cout << "-------------------------------------" << endl;
//		
//		}
//		else if (requested_floor == current->floor)
//		{
//			cout << "-------------------------------------" << endl;
//			cout << "You are at Floor: " << requested_floor << endl;
//			cout << "-------------------------------------" << endl;
//		}
//		else
//		{
//			cout << "Going Down" << endl;
//			//Down
//			cout << "-------------------------------------" << endl;
//			cout << "You are at Floor: " << liftdown(current, head, tail, requested_floor) << endl;
//			cout << "-------------------------------------" << endl;
//		
//		}
//	}
//	return 0;
//}
//
//char halt_lift(char status)
//{
//	status = 'H';
//	//halts the lift, no up and down operation can be performed. Stored H for halting
//	return status;
//}
//char un_halt_lift(char status)
//{
//	status = 'W';
//	//Unhatls the lift. Store W which represents that the lift is working
//	return status;
//}
//void add_floor(lift_floors*& head, lift_floors*& tail)
//{
//	//add a lift floor;
//	lift_floors* new_floor = new lift_floors(0);
//	if (head == NULL)
//	{
//		new_floor->floor = -1;
//		head = new_floor;
//		tail = new_floor;
//	}
//	else
//	{
//		int floor = tail->floor;
//		floor++;
//		new_floor->floor = floor;
//		tail->next = new_floor;
//		new_floor->prev = tail;
//		tail = new_floor;
//
//	}
//	return;
//}
//void skip_floor(lift_floors*& head, lift_floors*& tail, int floorNo)
//{
//	//add logic to make lift skip a certian floor
//	lift_floors* temp = head;
//	do
//	{
//		if (temp->floor == floorNo)
//		{
//			if (temp->floor_status == 'N')
//			{
//				cout << "-------------------------------------" << endl;
//				cout << "Floor already Skipped" << endl;
//				cout << "-------------------------------------" << endl;
//			}
//			else
//			{
//				temp->floor_status = 'N';
//				cout << "-------------------------------------" << endl;
//				cout << "The Floor: " << floorNo << " is skipped now" << endl;
//				cout << "-------------------------------------" << endl;
//			}
//				
//		}
//		temp = temp->next;
//	} while (temp!=tail);
//
//}
//void make_floor_operational(lift_floors*& head, lift_floors*& tail, int floorNo)
//{
//	//add logic to make lift operational on a certain floor
//	lift_floors* temp = head;
//	do
//	{
//		if (temp->floor == floorNo)
//		{
//			if (temp->floor_status == 'A')
//			{
//				cout << "-------------------------------------" << endl;
//				cout << "Floor already Operational" << endl;
//				cout << "-------------------------------------" << endl;
//			}
//			else
//			{
//				temp->floor_status = 'A';
//				cout << "-------------------------------------" << endl;
//				cout << "The Floor: " << floorNo << " is operational now" << endl;
//				cout << "-------------------------------------" << endl;
//			}
//		}
//		temp = temp->next;
//	} while (temp != tail);
//
//}
//int main()
//{
//	lift_floors* head=NULL;
//	lift_floors* tail=NULL;
//	lift_floors* current=NULL;
//	int total_floors = 6; // total number of floors
//	int current_floor = -1; // starts with basement
//	int requested_service; //choice of user
//	int requested_floor; //floor the lift goes on
//	char status = 'W'; //W for working , H for halted
//
//	//initialize everything and poplate the link list based on above data.
//	//use add floor to add all the floors in the list
//	for (int i = 1; i <= total_floors ; i++)
//	{
//		add_floor(head, tail);
//	}
//	current = head;
//
//	cout << "------------------------------------------------" << endl;
//	cout << "Welcome to the Lift Operating System" << endl;
//	cout << "------------------------------------------------" << endl;
//	bool flag = true;
//	while (flag)
//	{
//		cout << "Please select a function of your choice";
//		cout << endl << "1. Go to a specific floor";
//		cout << endl << "2. Halt Lift";
//		cout << endl << "3. Unhalt Lift";
//		cout << endl << "4. Add floor";
//		cout << endl << "5. Skip floor";
//		cout << endl << "6. Make floor operational";
//		cout << endl << "7. Check the Current Floor";
//		cout << endl << "8. Check all floor status";
//		cout << endl << "9. Exit"<<endl;
//		cin >> requested_service;
//		switch (requested_service)
//		{
//		case 1:
//		{
//			
//				cout << endl << "Enter Floor of choice: (-1 to " << total_floors - 2 << ")" << endl;
//				cin >> requested_floor;
//				if (requested_floor<-1 || requested_floor>total_floors - 2)
//				{
//					cout << "Invalid Floor Choice" << endl;
//				}
//				else
//				{
//					lift_operating_system(requested_floor, current, head, tail,status);
//				}
//			
//			break;
//		}
//		case 2:
//		{
//			status = halt_lift(status);
//			cout << "-------------------------------------" << endl;
//			cout << "Lift is Halted" << endl;
//			cout << "-------------------------------------" << endl;
//			break;
//		}
//		case 3:
//		{
//			status = un_halt_lift(status);
//			cout << "-------------------------------------" << endl;
//			cout << "Lift is unhalted" <<endl;
//			cout << "-------------------------------------" << endl;
//			break;
//		}
//		case 4:
//		{
//			add_floor(head, tail);
//			cout << "-------------------------------------" << endl;
//			cout << "Floor: "<<(total_floors-2)+1<<" is Added" << endl;
//			cout << "-------------------------------------" << endl;
//			total_floors = total_floors + 1;
//			break;
//		}
//		case 5:
//		{
//			if (status == 'H')
//			{
//				cout << "-------------------------------------" << endl;
//				cout << "Sorry! Lift is halted :(" << endl;
//				cout << "-------------------------------------" << endl;
//			}
//			else
//			{
//				int no;
//				cout << "Enter the Floor to skip:" << endl;
//				cin >> no;
//				skip_floor(head, tail, no);
//			
//			}
//			break;
//		}
//		case 6:
//		{
//			if (status == 'H')
//			{
//				cout << "-------------------------------------" << endl;
//				cout << "Sorry! Lift is halted :(" << endl;
//				cout << "-------------------------------------" << endl;
//			}
//			else
//			{
//				int no;
//				cout << "Enter the Floor to make Operational:" << endl;
//				cin >> no;
//				make_floor_operational(head, tail, no);
//			
//			}
//	
//			break;
//		}
//		case 7:
//		{
//			cout << "-------------------------------------" << endl;
//			cout << "You are currently at Floor: " <<current->floor <<endl;
//			cout << "-------------------------------------" << endl;
//			break;
//		}
//		case 8:
//		{
//			Print_list(head);
//		}
//		case 9:
//		{
//			flag = false;
//			break;
//		}
//		}
//		
//	}
//	//Print_list(head);
//
//}