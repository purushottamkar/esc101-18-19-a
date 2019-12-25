# ESC 101A: Fundamentals of Computing (C Programming Course)
These are the course materials used for the 2018-19 autumn offering of the course ESC 101A (Fundamentals of Computing) at IIT Kanpur. This is an introductory C programming course taught to first year undergraduate students at IIT Kanpur.

## Usage
The material in this repository may be used freely for the purpose of research and self-study. However, if you are an instructor/professor/lecturer at an educational institution and wish to use this material to offer a course of your own, it would be greatly appreciated if you could drop a mail to the author at the email address <a href="mailto:purushot@cse.iitk.ac.in">purushot@cse.iitk.ac.in</a> mentioning the same.

## Credits
This course offering was made possible by the combined efforts of a large team.
- **Tutors**: the course offering had an awesome team of student tutors (_Prakhar Agarwal, Nikita Awasthi, Sanket Gandhi, Abhibhav Garg, Ankit Jalan, Kunal Kapila, Siddharth Mittal, Paramkusam Niranjan, Abhisek Panda, Parth Sharma, Shashank Shekhar, Massand Sagar Sunil, Ayush Tulsyan_). The tutors conducted weekly tutorials for students as well as set nice and innovative problems for labs, exams and quizzes.
- **Teaching Assistants**: The weekly lab sessions and examinations were made possible due to the contributions of more than 50 teaching assistants who helped students during labs and performed grading on exam submissions. Their names are listed in the concluding lecture slides. Lab and weekly quiz submissions were autograded using code that was developed jointly by _Umair Z Ahmed_ and the instructor.
- **Admins**: The course would also not have been possible without help from the course admins (_Umair Z Ahmed_ for Prutor and _Bhaskar Mukhoty_ for logistics), the CSE office staff members (_Mr Prashant Kumar Sahu, Mr Rajesh Kumar, Mr Ranjan Kumar, Mr Anubhav Kumar Arya,
Mr Amit Kumar Bharti_) and CC/NCL staff members (_Mr Gopesh Tiwari, Mr Soumitri Mishra, Mr Awanish Kumar_).
- **Previous instructors**: Material developed by previous instructors of the course (_Prof. Sumit Ganguly, Prof. Nitin Saxena, Prof. Amey Karkare, Prof. Indranil Saha, Prof. Nisheeth Srivastava, Prof. Rajat Mittal (Hindi lectures), Prof. Vinay Namboodiri_) was very helpful in developing fresh material for this offering. However, any faults/errors in the lecture slides, lecture codes, tutorial sheets or practice problems should be blamed on the instructor :) Please report any major errors, suggestions to the instructor at <a href="mailto:purushot@cse.iitk.ac.in">purushot@cse.iitk.ac.in</a>

## Compiler Used
For our offering, we used the CLang compiler for all laboratory, practice and exam problems. Please keep this in mind while checking the expected evaluation outputs in lab and practice problems as other compilers like GCC, Turbo C, Visual C etc. may offer rare and subtle differences in output. In particular, we used the *Prutor* interface [\[link\]](https://prutor.ai/) to conduct laboratory sessions and examinations.

## Navigating the Repository
Here are brief descriptions of the various subdirectories of this repository
- **lecture_slides**:  these contain PPTX (Microsoft PowerPoint) files, one for each of the lectures in the course. The files can be opened using MS PowerPoint, Open Office, or Google Slides. The numbering of these files starts from 2 since the first lecture is typically used to explain the logistics of the course.
- **lecture_codes**: for some of the lectures, we have code snippets that are used to illustrate a point or else present a working implementation of some concept. These code files are numbered according to the lecture number which they are supposed to accompany.
- **tutorial_sheets**: these contain DOCX (Microsoft Word) files containing material covered during the weekly tutorials in the course. These files can be opened using MS Word, Open Office, or Google Docs. Tutorial sessions typically revised lecture material covered during the week as well as offered exercises to encourage discussions. Please note that the these sheets are written from the tutor's point of view although they would be useful for students as well.
- **lab_problems**: the course had weekly labs with 4 lab sessions being held every week, each session having a different set of 3 problems. The total of 4 x 3 = 12 problems for each week are collected in a single HTML file (named *Wn.html* for the problems for week *n*). Please see below on how to read these files.
- **practice_problems**: the course also offered some (2-3) practice problems to help students prepare for laboratory exercises the next week. The practice problems for each week are collected in a single HTML file (named *Pn.html* for the problems for week *n*). Please see below on how to read these files.
- **exam_papers**: the course conducted two lab exams which mimicked the laboratory exercises, two "theory" exams which were attempted on pen and paper, and two quizzes. Please see below on how to read the files for the lab exams. The question papers for the theory exams and quizzes are given as PDF files. These contain a mixture of objective and subjective type questions.

## How to Read Lab/Practice/Exam Problem Sheets
The title of any HTML file is a code-word. This can be discarded (in case you are curious, it encodes what type of problems -- lab/practice/exam -- does the file contain, in which week were those problems offered, and what general topic were these problems testing). What follows is a series of problem descriptions. Two problems are separated by a double horizontal line spanning the entire width of the page. For each problem, the following information is given.
- **Headers**: first the title of the problem is stated in bold followed by a code of the form *p1v1d1*. Next the title is repeated followed by the marks for that problem within square brackets. The marks of the problem and the *p-v-d-* code can be ignored (in case you are curious, these encode the day of the week on which these problems were offered and the ordering of problems within that day).
- **Problem Statement**: for lab/exam problems, detailed problem statements are offered, including cautionary warnings as well as one or two solved examples explaining why the problem demands a certain output on a certain input. For practice problems, shorter statements are offered which nevertheless contain all details required to solve the problem.
- **Grading Scheme**: this is described only for lab/exam problems and would be missing for practice problems since practice problems were not graded. This portion can be discarded in general. We used autograders (that we developed ourselves) to automatically grade lab and exam submissions and the grading schemes describe how the autograder was told to assign partial marks.
- **Test Cases**: this is a list of test cases where we describe an example input to the problem and the expected output. Test cases were of two types:
	- *Visible*: for test cases that were visible, both the input as well as the output were shown to the students while the lab/exam was going on. 
	- *Hidden*: for test cases that were hidden, both the input as well as the output were hidden from students while the lab/exam was going on. Hidden test cases were always revealed to students after the lab/exam was graded.
	- The HTML files first list all the visible test cases and then all the hidden test cases. Typically, only the first one-third of the test cases were "visible" and the last two-third were hidden. For example, if for a problem, 6 test cases are given, this usually means that the first two were visible and last 4 were hidden.

## Disclaimer
Any code made available in this repository is for the purpose of instruction only and does not offer any guarantees of utility or performance for specific applications.

## Author
Purushottam Kar, IIT Kanpur [website](https://www.cse.iitk.ac.in/users/purushot/)

## License
This repository is licensed under the GNU GPL v3.0 license - please see the [LICENSE](LICENSE) file for details.
