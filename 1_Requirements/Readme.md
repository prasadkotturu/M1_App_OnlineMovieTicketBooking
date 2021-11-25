
# Requirements

Simple Movie Ticket Booking System is based on the concept of booking movie tickets. There’s login system available for this system, the user can freely use its feature. This mini project contains limited features, but the essential one.

## Research

Customer will get a ticket with Invoice with Encrypt QR code, Basic details of Movie, Address of theater, Timing, Theater Number, Ticket cost etc. A ticket will be generated then and there only using Unique Ticket ID. few more async tasks were invoked to send SMS, EMAIL and WHATSAPP the Tickets.


## Cost and Features and Timeline

Talking about the features of this Simple system, the user can book movie tickets. For this, the user has to login into the system with username and password and after successfull login. he will select a movie name, enter customer details such as name and phone number. Then the user has to enter seat number. After this, the booking is done. The user can also view  the transactions that he made and there is admin user to insert the movies to the systemview reservations by entering the admin password.The system does not create an external file to store the user’s data permanently. This system is in C Programming Language and different variables, strings have been used for the development of it.

## Features of the Project:
- This system is based on the concept to generate the movie records and to add and update it.
- User can add movie title with their ticket price and release date details safely.
- Time is less consumed.
- This system makes easy to store records of each and every employee.
- This project uses different variables and strings for development.
- Easy to operate and understand.


# 4W and 1H

## What

Application that designed to be implemented to book seats in movies. It will helps user to generate invoices for tickets and also helps in doing calculations for ticket price and it will show all the old details of transactions.

## why
As we know when we go to movies there will be a huge line to book tickets and ther will be a lot of time gets wasted so to book tickets in online is best and fast way to book movie tickets.

## Where

This application can be implement to book movie tickets in online.

## How

The system is firstly asks to enter username and password and after entering that it will asks like to enter show details and to book tickets and it will show the options like old transaction .we use files to store the data and show the data .The operations will done on files are read and write to fetch and store the data. 

## SWOT ANALYSIS
![App Screenshot](https://www.rhythmsystems.com/hs-fs/hubfs/iStock-1134293632.jpg?width=488&name=iStock-1134293632.jpg) 

SWOT analysis (or SWOT matrix) is a strategic planning and strategic management technique used to help a person or organization identify strengths, weaknesses, opportunities, and threats related to business competition or project planning. It is sometimes called situational assessment or situational analysis.


| Strenghts | Weaknesses | Opportunities            | Threats| 
| :--------         | :------- | :------------------------- | :------------|
| Reputation in market | unable to deal with seat adjustments | Well established position with a well-defined market niche |Application blockers              |
|comfortable way to get tickets    |unable to save the file permenently |all are comfortable to book tickets in online      |payment           |

# Detail requirements

## High Level Requirements:


| Id | Description | Status            |  
| :--------         | :------- | :------------------------- | 
| H1 | Username and password for login | Implemented|
|H2  |To Insert Movie |Implenented   |
|H3|To View All Movie|Implemented|
|H4|To Find Movie|Implemented|
|H5|To Book Tickets|Implemented|
|H6|To View All Transactions|Implemented|
|H7|Ticket cancelation|Future|

## Low level Requirements:

| Id | Description | Status            |  
| :--------         | :------- | :------------------------- | 
| H1L1 | is Username and password for login is sucess enter into the system to book tickets | Implemented|
|H1L2| is Username and password for login is unsucessful we dont get access ro enter| Implemented|
|H2L1  |when we click the option To Insert Movie we need insert the code ,name data of the movie this will done by admin  |Implenented   |
|H2L2|Restricted access to user to insert movie |Implemented|
|H3L1|To View All Movie the option will showcase the list of movies are there in the file|Implemented|
|H4L1|To Find Movie the option will tell us to find the movie and it will go to the file and search the file and return the movie|Implemented|
|H5L1|To Book Tickets. This option will take the data from u and book the tickets for u and price of each ticket is calculated  |Implemented|
|H5L2|The payment method will be accessed by the third party example paytm or paypall |Future|
|H6|To View All Transactions. It Open the file and shows the old transactions |Implemented|
