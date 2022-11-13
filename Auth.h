using namespace std;
# include<string>

class Auth {
    private:  
    std::string username;
    std::string password;
    int token() {
        return 0; 
    }

    int dsStore(int username) {
        int key;
        key=1;
        // If username entered   not matching any name in data structure then prompt
        return key;
    }



    public:
    enum TT_Input {
        // Backspace ASCII is 8
        BACKSPACE = 8,
        RETURN = 32
    };

    std::string takePasswdFromUser() {
        std::string ipt = "";
        char ipt_ch;
        while (true) {
            ipt_ch = getch();
    
            if (ipt_ch < TT_Input::RETURN
                && ipt_ch != TT_Input::BACKSPACE) {
                cout << endl;
                return ipt;
            }
    
            // Check whether the user
            // pressed backspace
            if (ipt_ch == TT_Input::BACKSPACE) {
            
                // Check if ipt is empty or not
                if (ipt.length() == 0)
                    continue;
                else {
                
                    // Removes last character
                    ipt.pop_back();
    
                    continue;
                }
            }
            ipt.push_back(ipt_ch);
    }
    }
    std::string ask() {
        cout<<"Enter your Username: ";
        cin>>username;
        cout<<"\nEnter your Password: ";
        password = takePasswdFromUser();
        cout<<"\nChecking credentials..."<<endl;
    }

    void signup() {
        ask();

    }
    void login(){
        ask();
    }
};
