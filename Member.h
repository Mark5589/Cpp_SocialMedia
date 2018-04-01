//
// Created by mark  gurin on 30/03/2018.
//
/**
 * the functions are : follow(member) , numFollowers() , numFollowing() , unfollow(memeber)
 * @author Mark Gurin
 */

#ifndef SOCIALMEDIA_MEMBER_H
#define SOCIALMEDIA_MEMBER_H

//#include <iostream>
#include <string>
#include <vector>

 static int id =1;

class Member {


    std::string name = " ";
    int uid;

    std::vector<Member> followers;
    std::vector<Member> following;

    int is_in_database(std::vector<Member>, Member&);

public:



    int numFollowers(){return followers.size();}
    int numFollowing(){return following.size();}
    int getID(){return this->uid;}
    void unfollow(Member&);
    void follow(Member&);


    std::string getname(){ return this->name; }
    std::string to_string(){return "the Member:"+ this->name;}

    Member(std::string mem_name);
    Member();

//    bool is_in_database(std::vector<Member> myVec, Member &person);
};


#endif //SOCIALMEDIA_MEMBER_H
