#include <iostream>
using namespace std;

#include "Member.h"


Member avi, beni, chana;

//void test1() {
//	Member dana;
//	chana.follow(dana);
//	dana.follow(avi);
//	cout << "  " << chana.numFollowers() << " " <<  chana.numFollowing() << endl; // 0 1
//	cout << "  " << avi.numFollowers() << " " <<  avi.numFollowing() << endl; // 1 0
//	cout << "  " << Member::count() << endl; // 4
//}

/**
 * the functions are : follow(member) , numFollowers() , numFollowing() , unfollow(memeber)
 * @author Mark Gurin
 */

int main() {
//    Member tany;
//    cout << tany.to_string()<< tany.numFollowers() << tany.numFollowing()<< endl;



    Member drake ("drake");
    cout << drake.getID() << endl;
    Member jah ("jah");
    cout << jah.getID() << endl;

    Member mario ("mario");
    cout << mario.getID() << endl;


    cout << "+++++++"<< endl;
    Member john;
    cout<< "john id "<< john.getID() << endl;


    cout << "drake follow jah" << endl;
    drake.follow(jah);
    cout << drake.numFollowing() << drake.numFollowers()<< endl;
    cout << jah.numFollowing() << jah.numFollowers()<< endl;

//    cout << drake.getname()<<endl;
    cout << "drake follow jah (again) testing dup ... " << endl;
    drake.follow(jah);
    cout << drake.numFollowing() << drake.numFollowers()<< endl;
    cout << jah.numFollowing() << jah.numFollowers()<< endl;

   cout << "drake follow john" << endl;
    drake.follow(john);
    cout << drake.numFollowing() << drake.numFollowers()<< endl;
    cout << john.numFollowing() << john.numFollowers()<< endl;

    cout << "drake unfollow jah"<< endl;
    drake.unfollow(jah);
    cout << drake.numFollowing() << drake.numFollowers()<< endl;
    cout << jah.numFollowing() << jah.numFollowers()<< endl;

  //____________________________________________________________________
//	cout << avi.numFollowers() << " " << avi.numFollowing() << endl; // 0 0
//	avi.follow(beni);
//	cout << avi.numFollowers() << " " << avi.numFollowing() << endl; // 0 1
//	cout << beni.numFollowers() << " " << beni.numFollowing() << endl; // 1 0
//	cout << Member::count() << endl; // 3
//	cout << endl;
//
//	avi.follow(beni); // duplicate follow has no effect
//	cout << avi.numFollowers() << " " << avi.numFollowing() << endl; // 0 1
//	avi.unfollow(beni);
//	cout << avi.numFollowers() << " " << avi.numFollowing() << endl; // 0 0
//	cout << endl;
//
//	cout << chana.numFollowers() << " " <<  chana.numFollowing() << endl; // 0 0
//	test1();
//	cout << chana.numFollowers() << " " <<  chana.numFollowing() << endl; // 0 0
//	cout << avi.numFollowers() << " " <<  avi.numFollowing() << endl; // 0 0
//	cout << Member::count() << endl; // 3
}