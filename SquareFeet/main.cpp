// George Strauch
// accepts inputs of ft^2 and price
// then gives the best value from best to worst deal
// 03/13/2018

/*
 * asks for input, calculates the score of the the deal,
 * then sorts the scores in the form of an array
 * prints the deals from best to worst
 * */

#include <iostream>
using namespace std;

int main() {

    // the sqft of the models
    double dblFtModel1 = 0;
    double dblFtModel2 = 0;
    double dblFtModel3 = 0;

    // price of the models
    // initialized as 1 to prevent possible /0 error later
    double dblPrice1 = 1;
    double dblPrice2 = 1;
    double dblPrice3 = 1;

    // the deals of each of the deals respectively
    double dblScore1 = 0;
    double dblScore2 = 0;
    double dblScore3 = 0;


//*
     // code block gets user input
    cout << "What is the square footage of the first model? " << endl;
    cin >> dblFtModel1;
    cout << "And the price" << endl;
    cin >> dblPrice1;

    cout << "What is the square footage of the second model? " << endl;
    cin >> dblFtModel2;
    cout << "And the price" << endl;
    cin >> dblPrice2;

    cout << "What is the square footage of the third model? " << endl;
    cin >> dblFtModel3;
    cout << "And the price" << endl;
    cin >> dblPrice3;

    // gets the score for each model
    dblScore1 = dblFtModel1 / dblPrice1;
    dblScore2 = dblFtModel2 / dblPrice2;
    dblScore3 = dblFtModel3 / dblPrice3;
//*/


    // I know that we have not covered arrays yet
    // but a selection sort seems easier
    double arrayPrintOrder[3] = {dblScore1, dblScore2, dblScore3};

    //used in sorting
    double dblTmp = 0;

    // sorts the array so the best deal first
    for(int i = 0; i < 2; ++i){

        for (int x = i+1; x < 3; x++) {
            // if the next index is greater, switch them
            if (arrayPrintOrder[x] > arrayPrintOrder[i]) {

                dblTmp = arrayPrintOrder[i];
                arrayPrintOrder[i] = arrayPrintOrder[x];
                arrayPrintOrder[x] = dblTmp;
            }

        }

    }

    cout << "the best deals are from greatest to least are" << endl;

    // prints the order of the best deals
    // first print
    if(arrayPrintOrder[0] == dblScore1){
        cout << "Deal 1" << endl;
    }
    else if(arrayPrintOrder[0] == dblScore2) {
        cout << "Deal 2" << endl;
    }
    else {                         //default case
        cout << "Deal 3" << endl;
    }

    // second print
    if(arrayPrintOrder[1] == dblScore1){
        cout << "Deal 1" << endl;
    }
    else if(arrayPrintOrder[1] == dblScore2) {
        cout << "Deal 2" << endl;
    }
    else {                         //default case
        cout << "Deal 3" << endl;
    }

    //third print
    if(arrayPrintOrder[2] == dblScore1){
        cout << "Deal 1" << endl;
    }
    else if(arrayPrintOrder[2] == dblScore2) {
        cout << "Deal 2" << endl;
    }
    else {                         //default case
        cout << "Deal 3" << endl;
    }

    return 0;

}