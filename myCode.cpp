//#include <iostream>
//using namespace std;
//int main(){
//
////for case 1
//int choice;
//char again;
//int sizeOfArray;
//int array[sizeOfArray];
//
//
////for case 2
//int inputCase2;
//
////for case 3
//int inputCase3;
//
//do{    
//    cout<< "\n1.  Enter input in the array: ";
//    cout<< "\n2.  Enter the number at last index of array: ";
//    cout<< "\n3.  Enter the number at 1st index of the array: ";
//    cout<< "\n4.  Enter number at a specific index: ";
//    cout<< "\n5.  Enter before a specific index: ";
//    cout<< "\n6.  Enter after a specific index: ";
//    cout<< "\n7.  Delete from the 1st index: ";
//    cout<< "\n8.  Delete from the last index: ";
//    cout<< "\n9.  Delete from a specific inddex: ";
//    cout<< "\n10. Delete before a specific index: ";
//    cout<< "\n11. Delete after a specific index: ";
//    cout<< "\n12. Display the values of the array: ";
//    cout<< "\n0.  Exit";
//
//
//    cout<< "\n";
//    cout<< "\nEnter your choice: ";
//    cin>> choice;
//    
//    switch (choice)
//        {
//        case 1:{
//            
//            cout<< "\n Enter the size of array: ";
//            cin >> sizeOfArray;
//
//            array[sizeOfArray];
//
//            cout<< "\n Enter input in array: ";
//            for(int i =0; i < sizeOfArray; i++){
//                cin>> array[i];
//            }
//            for(int i = 0; i < sizeOfArray; i++){
//                cout << array[i] << " ";
//            }
//            cout<< "\nDo you want to do another operation(Enter Y or N): ";
//            cin >> again;
//            break;
//        }
//        case 2:{
//
//            cout<< "\nEnter the number to enter at last index of array: ";
//            cin>> inputCase2;
//            
//            array[sizeOfArray-1] = inputCase2;
//            
//            for(int i =0; i < sizeOfArray; i++){
//                cout<< array[i] << " ";
//            }
//            cout<< "\nDo you want to do another operation(Enter Y or N): ";
//            cin >> again;
//        }
//        
//        case 3: {
//            cout<< "\nEnter the number to enter at 1st index of array: ";
//            cin>> inputCase3;
//            
//            array[0] = inputCase3;
//            
//            for(int i =0; i < sizeOfArray; i++){
//                cout<< array[i] << " ";
//            }
//            
//            cout<< "\nDo you want to do another operation(Enter Y or N): ";
//            cin >> again;
//        }
//        
//        default:
//            break;
//        }
//
//}while((choice != 0) && (again == 'Y' || again == 'y'));
//
//        if(choice == 0){
//            cout<< "exit";
//        }
//    return 0;
//}







































#include <iostream>
using namespace std;
int main(){

//for case 1
int choice;
char again;
int sizeOfArray;
int array[sizeOfArray];


//for case 2
int inputCase2;

//for case 3
int inputCase3;

//for case 4
int indexByUser;
int inputByUser;
int myArray[10] = {3, 5, 7, 9, 12, 15};

//for case 5
int indexByUserr;
int inputByUserr;

//for case 9
int index;

//for case 10
int pos;

//for case 11
int position;

do{    
    cout<< "\n1.  Enter input in the array: ";
    cout<< "\n2.  Enter the number at last index of array: ";
    cout<< "\n3.  Enter the number at 1st index of the array: ";
    cout<< "\n4.  Enter number at a specific index: ";
    cout<< "\n5.  Enter before a specific index: ";
    cout<< "\n6.  Enter after a specific index: ";
    cout<< "\n7.  Delete from the 1st index: ";
    cout<< "\n8.  Delete from the last index: ";
    cout<< "\n9.  Delete from a specific inddex: ";
    cout<< "\n10. Delete before a specific index: ";
    cout<< "\n11. Delete after a specific index: ";
    cout<< "\n12. Display the values of the array: ";
    cout<< "\n0.  Exit";


    cout<< "\n";
    cout<< "\nEnter your choice: ";
    cin>> choice;
    
    switch (choice)
        {
        case 1:{
            
            cout<< "\nEnter the size of array: ";
            cin >> sizeOfArray;

            array[sizeOfArray];

            cout<< "\nEnter input in array: ";
            for(int i =0; i < sizeOfArray; i++){
                cin>> array[i];
            }
            for(int i = 0; i < sizeOfArray; i++){
                cout << array[i] << " ";
            }
            cout<< "\nDo you want to do another operation(Enter Y or N): ";
            cin >> again;
            break;
        }
        case 2:{

            cout<< "\nEnter the number to enter at last index of array: ";
            cin>> inputCase2;
            
            array[sizeOfArray-1] = inputCase2;
            
            for(int i =0; i < sizeOfArray; i++){
                cout<< array[i] << " ";
            }
            cout<< "\nDo you want to do another operation(Enter Y or N): ";
            cin >> again;
            break;
        }
        
        case 3: {
            cout<< "\nEnter the number to enter at 1st index of array: ";
            cin>> inputCase3;
            
            array[0] = inputCase3;
            
            for(int i =0; i < sizeOfArray; i++){
                cout<< array[i] << " ";
            }
            
            cout<< "\nDo you want to do another operation(Enter Y or N): ";
            cin >> again;
            break;
        }
        
        
        case 4:{
        	

        	
            if(myArray[9] != 0){
                cout<< "The array is full!!!";
            }
            
                
                /*{3, 5, 7, #9#, 12, 15}
                sizeOfArray = 6
                indexByUser = 3
                
                for(int i = sizeOfArray-1; i >= indexByUser; i--){
                    array[i] = array[i-1];
                    
                    i = 6   i>=3(6>= 3) i--(5)
                    array[6] = array[5];
                    
                }
                */
                
                else{
                cout<< "Enter the specific index to enter the number: ";
                cin>> indexByUser;
                
                cout<< "Enter the number: ";
                cin>> inputByUser;
                
                //space empty karne ka loop
                for(int i = 10; i >= indexByUser; i--){
                    myArray[i] = myArray[i-1];
                }
                
                //array[4] = inputByUser(76)
                
                myArray[indexByUser] = inputByUser;
                
                //loop for printing the array
                for(int i = 0; i < 10; i++){
                    cout<< myArray[i] << " ";
                }
                
            cout<< "\nDo you want to do another operation(Enter Y or N): ";
            cin >> again;
            break;
            
            }
        }
        
		case 5:{
			
			if(myArray[9] != 0){
                cout<< "The array is full!!!";
            }
            
            else{
                cout<< "Enter the index to enter before a specific index: ";
                cin>> indexByUserr;
                
                cout<< "Enter the number: ";
                cin>> inputByUserr;
                
                
                /* {3, 5, 7, 9, 12, 15, 0, 0, 0, 0}
                   {3, 5, 7,  , 9, 12, 15, 0, 0, 0}
                sizeOfArray = 10
                indexByUser = 4
                
                inputByUser = 58
                
                for(int i = sizeOfArray-1; i > indexByUser; i--){
                    array[i] = array[i-1];
					}
                    
                    i = 6   i>2(6> 4) i--(5)	i= 5	i>2(5>4)   		i=4	i>3(4>2)			 i=3 i>2(3>2)
                    array[6] = array[5];		array[5] = array[4]		array[4] = array[3]		 array[3] = array[2]		
					array[6] = 15				array[5] = 12			array[4] = 9
					
					 0, 1, 2, 3, 4, 5,  6,  7, 8, 9
					{3, 5, 7, 9, 12, 15, 0, 0, 0, 0}
					{3, 5, 7,  , 9, 12, 15, 0, 0, 0}
				*/
                
                for(int i =0; i < 10; i++){
                	cout<< "\n" << myArray[i] << " ";
				}
                
                //space empty karne ka loop
    
                for(int i = 9; i > indexByUserr-1; i--){
                    myArray[i] = myArray[i-1];
                    //array[4] = array[3] 
                }
                
                
                myArray[indexByUserr-1] = inputByUserr;
                
                cout<< "\n";
                cout<< "\n";
                //loop for printing the array
                for(int i = 0; i < 10; i++){
                    cout<< myArray[i] << " ";
                }
			
			cout<< "\nDo you want to do another operation(Enter Y or N): ";
            cin >> again;
			break;
		}
	}
	
	
	case 6:{
		
		if(myArray[9] != 0){
                cout<< "The array is full!!!";
            }
            
        else{
                cout<< "Enter the index to enter before a specific index: ";
                cin>> indexByUserr;
                
                cout<< "Enter the number: ";
                cin>> inputByUserr;
                
                
                /* {3, 5, 7, 9, 12, 15, 0, 0, 0, 0}
                   {3, 5, 7,  , 9, 12, 15, 0, 0, 0}
                sizeOfArray = 10
                indexByUser = 4
                
                inputByUser = 58
                
                for(int i = sizeOfArray-1; i > indexByUser; i--){
                    array[i] = array[i-1];
					}
                    
                    i = 6   i>2(6> 4) i--(5)	i= 5	i>2(5>4)   		i=4	i>3(4>2)			 i=3 i>2(3>2)
                    array[6] = array[5];		array[5] = array[4]		array[4] = array[3]		 array[3] = array[2]		
					array[6] = 15				array[5] = 12			array[4] = 9
					
					 0, 1, 2, 3, 4, 5,  6,  7, 8, 9
					{3, 5, 7, 9, 12, 15, 0, 0, 0, 0}
					{3, 5, 7,  , 9, 12, 15, 0, 0, 0}
				*/
                
                for(int i =0; i < 10; i++){
                	cout<< "\n" << myArray[i] << " ";
				}
                
                //space empty karne ka loop
    
                for(int i = 9; i > indexByUserr-1; i--){
                    myArray[i] = myArray[i-1];
                    //array[4] = array[3] 
                }
                
                
                myArray[indexByUserr+1] = inputByUserr;
                
                cout<< "\n";
                cout<< "\n";
                //loop for printing the array
                for(int i = 0; i < 10; i++){
                    cout<< myArray[i] << " ";
                }    
		
		cout<< "\nDo you want to do another operation(Enter Y or N): ";
        cin >> again;
		break;
	}
}
        case 7: {
        	
        	//{1, 2, 3, 4, 5}
        	
        	cout<< "\nDelete from start: ";
        	
        	for(int i = 1; i < sizeOfArray; i++){
        		array[i-1] = array[i];
			}
			
			//loop for printing the array
			for(int i = 0; i < sizeOfArray-1; i++){
				cout<< array[i] << " ";
			}
        	
        	cout<< "\nDo you want to do another operation(Enter Y or N): ";
        	cin >> again;
			break;
		}
        
        
        case 8:{
        	
        	//  0, 1, 2, 3, 4, 5
        	// {1, 2, 3, 4, 5, 6}
        	// sizeOfArray = 6
        	// sizeOfArray-1 = 5
        	// i = 5
        	// array[5] = array[4]
        	
        	cout<< "\nDelete from last index: ";
        	
        	for(int i = sizeOfArray-1; i > 0; i--){
        		array[i] = array[i-1];
			}
			
			//loop for printing the array
			for(int i = 1; i < sizeOfArray; i++){
				cout<< array[i] << " ";
			}
        	
        	cout<< "\nDo you want to do another operation(Enter Y or N): ";
        	cin >> again;
			break;
		}
		
		case 9:{
	//		   0, 1, 2, 3, 4
			/*{1, 2, 3, 4, 5}
			index = 1
			for(int i = index; i < sizeOfArray; i++){
			array[index] = array[index+1]
			}			
			*/ 
			
			cout<< "\nEnter the index to delete the number :";
			cin>> index;
			
			for(int i = index; i < sizeOfArray; i++){
				array[i] = array[i+1];
			}
			
			//loop for printing the array
			
			for(int i = 0; i < sizeOfArray-1; i++){
				cout<< array[i] << " ";
			}
			
			cout<< "\nDo you want to do another operation(Enter Y or N): ";
        	cin >> again;
			break;
		}
        
        
        case 10:{
        	
			
			cout<< "\nEnter the index to delete number before it: ";
			cin>> pos;

    
    for(int i = pos-1; i < sizeOfArray-1; i++){
        
        array[i] = array[i+1];
    }
    
    for(int i = 0; i < sizeOfArray-1; i++){
        cout<< array[i] << " ";
    }
        	
        	cout<< "\nDo you want to do another operation(Enter Y or N): ";
        	cin >> again;
			break;
		}
        
        case 11:{
        	
        	cout<< "\nEnter the index to delete number after it: ";
			cin>> position;
        	
        	for(int i = position+1; i < sizeOfArray; i++){
        
        array[i] = array[i+1];
    }
    
    for(int i = 0; i < sizeOfArray-1; i++){
        cout<< array[i] << " ";
    }
        	
        	cout<< "\nDo you want to do another operation(Enter Y or N): ";
        	cin >> again;
			break;
		}
        
        default:
            break;
        }

}while((choice != 0) && (again == 'Y' || again == 'y'));

        if(choice == 0){
            cout<< "exit";
        }
    return 0;
}