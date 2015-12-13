### GIT TUTORIAL 

__I. PREPARING__

1. sign up [__here__](https://www.github.com)

2. download and install [__git__](https://git-scm.com/) (available in Windows and Linux), and do some global setting

    * i dont make git-install-tutorial so you do some googling yourself

    * type on cmd (after you installed git) :
        
            $ git config --global user.name "your name here"
            
            $ git config --global user.email sample@example.com

3. fork this repo (the fork button should be on the top-left of the page)

4. automatically the new forked repo will be made on your own github

5. clone this new repo to your local :

    a. you should copy the forked repo git address, its beside DOWNLOAD ZIP button 
    
    b. on your computer, open your desired path. ex : D:\latihan\code
    
    c. right click on the folder, then choose 'Git Bash Here' options //assume you've already installed git 
    
    d. git bash will appear, then clone the repo :
    
        $ git clone <paste your forked repo address here>
        
    e. then your new and available local repo will appear inside your desired path, ex : D:\latihan\code\battle
    
    
__II. TWO PHASE COMMIT__

1. finish [__the first job__](first-job.jpg) and save it on your local repo, ex : D:\latihan\code\battle

2. there are two phase commit in git. shortly it means you have to place your changes on repo to the staging phase

    a. open Git Bash, see tutorial I.5.c
    
    b. type on bash : 
    
        $ git add 'your file'
    
    or simply you can type : 
    
        $ git add --all (it will add all of your local changes to the staging phase)

    c. type on bash :
    
        $ git commit -m 'your commit message here'
    
    DONT make any stupid commit message. make it clear about what changes you've done in local repo, ex: problem first-job solved, or working on the first-job
    
    d. push it to your remote, simply type (on bash) : 
    
        $ git push origin master 
        
    e. as you can see, if push process is successful, then your commit will appear on the remote. (check the battle repo on your github account in browser)
    

__III. PULL REQUEST__

1. the truth is, pull request is used if someone have already do some real-contribute to the project. now, i'll use it to collect your code

2. on the browser, open your forked repo

3. then you can see 'New pull request', its in the green button. click it

4. name your pull request, ex : my first-job or anything

5. type a message if necessary on the message field

6. click Create pull request button
