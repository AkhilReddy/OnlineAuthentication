# OnlineAuthentication
It's my Project to improve Privacy to accounts on Open Source Platforms like Moodle tc..

Main crux of the Project is on collecting some general Private information importantly like Wife's name , first salary , Pet's name etc...
and storing it in secured database.Later each time,Two or Three Questions are take from Database in random and are used to Check Authenticity
of the User in Place of **PASSWORD**.

It involves detailed description on the Program Code to implement the verification process.
 The program includes member functions within the class *User* as follows:
 
* GetName()
* GetId()
* GetDob()
* GetOccupation()
* GetFatherCount()
* GetFirstSalary()
* GetGradCGPA()
* GetHouseNo()

1. GetName():-This function will take the input names i.e names of different users which will be used for future authentication by comparing this with the name entered earlier during execution.
2. GetId():-Does almost the same job as the previous function i.e. initially it takes ID’s of different users in corresponding to their names which will be used for comparing with data entered while authenticating.
3. GetDob():-This function  accepts the date of birth of different users corresponding to their names.
4. GetOccupation():-This function accepts the occupation of the users which is used for verification purpose.
5. GetFatherCount():-It accepts the total number of letters in the father’s name of the individuals for further authentication.
6. GetFirstSalary():-This function accepts the amount received by the user as his/her first salary.
7. GetGradCGPA():-This function accepts the CGPA of the different users which will be used for future computations.
8. GetHouseNo():-This function accepts the number of the house in which user resides  which is to be used for future computations.

By looking at the initial functions we may think that the questions are easy but as we proceed from top to down in the functions mentioned earlier the level of difficulty goes on increasing. Hence, the case in which a user other than the specified user accesses the online document would be avoided by implementing the above technique. Therefore, it is an effective way of avoiding forgery. 

Followed by above functions (input) we will have the validating functions “Check” which are used for checking the validity of information furnished by the user to gain access i.e. comparing the data which we obtained previously using “Get” functions. The “Check” functions determine whether the answers to the queries are correct or wrong. If and only if all the answers provided by user are correct, the user gains access to the online document sent to him/her. On the other hand as soon as an answer given by the user is found out to be incorrect his/her access is denied.

**The program uses Object Oriented concepts of C++ to implement the above described technique.**

