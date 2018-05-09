//
// Created by mark  gurin on 30/03/2018.
//

/**
 */

#include <iostream>
#include "Member.h"

using namespace std;

int Member::num_Users = 0;


Member::Member(string mem_name) {
    num_Users++;
    name = mem_name;
    uid = id++;
}

Member::Member() {
    num_Users++;
    uid = id++;
    this->name = "anonymous" + std::to_string(uid);
}


Member::~Member() {
    num_Users--;
    for(Member* member : following)this->unfollow(*member);
    for(Member* member : followers)member->unfollow(*this);
//    delete this->following; // cant resolve if this is necessary
//    delete this->followers;
}

void Member::follow(Member &mem) {
    if(is_in_database(following, mem) == -1){
        following.push_back(&mem);
        mem.followers.push_back(&(*this));
        cout<< (*this).getname() + " now following after " + mem.getname()<< endl;
    }
    else{
       cout<< "Already following after: "+ mem.getname()<<endl;
    }
}

void Member::unfollow(Member &mem) {
    int mem_index = is_in_database((*this).following, mem);
    if(mem_index > -1){
        following.erase(following.begin()+mem_index);
        int this_index = mem.is_in_database(mem.followers, (*this));
        mem.followers.erase(mem.followers.begin() + this_index);
    }
    else{
        cout << "there is no such Member to unfollow"<< endl;
    }
}



int Member::is_in_database(std::vector<Member*> myVec, Member &person) {
    for(int i = 0 ; i< myVec.size() ; i++){
        if(myVec[i]->getID() == person.getID()) return i; //(*this).getname()
    }
    return -1;
}




