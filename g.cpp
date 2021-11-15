void Bank::signIn() { // log in ครั้งเเรก
  int count = 3;
  cout << "\n\t Enter your username : ";
  cin >> userNameSignIn;
  cout << "\t Enter your password : ";
  cin >> passWordSignIn;
  if ((userName == userNameSignIn) && (passWord == passWordSignIn)) {
    cout << "\n\t Login successful ! ";
    mainMenu();
  } else if (userName == userNameSignIn) {
    if (passWord != passWordSignIn) {
      do {
        cout << "\n\t Your password incorrect ! ";
        cout << "\n\t You can enter wrongly " << count << " more times ";
        cout << "\n\t Enter your username : ";
        cin >> userNameSignIn;
        cout << "\t Enter your password : ";
        cin >> passWordSignIn;
        count--;
      } while (passWord != passWordSignIn && count != 0);
      if (passWord == passWordSignIn) {
        mainMenu();
      }
      cout << "\n\t Back to menu pls press 'b' : ";
      cin >> qt_menu;
      if (qt_menu == 'b') {
        menu();
      }
    }
  } else if (userName != userNameSignIn) {
    if (passWord == passWordSignIn) {
      do {
        cout << "\n\t Your username incorrect ! ";
        cout << "\n\t You can enter wrongly " << count << " more times ";
        cout << "\n\t Enter your username : ";
        cin >> userNameSignIn;
        cout << "\t Enter your password : ";
        cin >> passWordSignIn;
        count--;
      } while (userName != userNameSignIn && count != 0);
      if (userName == userNameSignIn) {
        mainMenu();
      }
      cout << "\n\t Back to menu pls press 'b' : ";
      cin >> qt_menu;
      if (qt_menu == 'b') {
        menu();
      }
    }
  } else {
    cout << "\n\t You need to create account first!! ";
    cout << "\n\t Back to menu pls press 'b' : ";
    cin >> qt_menu;
    if (qt_menu == 'b') {
      menu();
    }
  }
}

/**********************************************************************************************************************************************/

void Bank::depo() { // ฝากเงิน
  cout << "\n\t Enter your account number : ";
  cin >> customerAccNumber2;
  if (customerAccNumber2 == customerAccNumber) {
    cout << "\n\t Enter deposit amount TH/Bath : ";
    cin >> deposit;
    totalDeposit += deposit;
    flag = true;
    cout << endl;
    initial += deposit;
    fstream customerFile;
    customerFile.open(cusAccNumber + "\\Statement report.txt", ios::app);
    if (customerFile.is_open()) {
      customerFile << " " << currentDateTime() << " // Deposit = " << deposit << endl;
      customerFile.close();
    }
    customerFile.open(cusAccNumber + "\\Daily report.txt", ios::app);
    if (customerFile.is_open()) {
      customerFile << " " << currentDateTime() << " // Deposit = " << deposit << endl;
      customerFile.close();
    }
    customerFile.open(cusAccNumber + "\\Deposit report.txt", ios::app);
    if (customerFile.is_open()) {
      customerFile << " " << currentDateTime() << " // Deposit = " << deposit << endl;
      customerFile.close();
    }
    cout << "\tSuccess to deposit balance!\n";
  } else {
    cout << "\tYou account number is wrong! ";
    cout << "\tFailed to deposit!\n";
  }
  cout << "\tYou can exit to menu pls press 'q' : ";
  cin >> qt_menu;
  cout << endl;
  if (qt_menu == 'q') {
    mainMenu();
  }
}

/********************************************************************************************************************************************************************/

void Bank::withd() { // ถอนเงิน
  cout << "\n\t Enter your account number : ";
  cin >> customerAccNumber2;
  if (customerAccNumber2 == customerAccNumber) {
    cout << "\n\t Enter withdraw amount TH/Bath : ";
    cin >> withdraw;
    if (initial >= withdraw && initial != 0) {
      initial -= withdraw;
      totalWithdraw += withdraw;
      fstream customerFile;
      customerFile.open(cusAccNumber + "\\Statement report.txt", ios::app);
      if (customerFile.is_open()) {
        customerFile << " " << currentDateTime() << " // Withdraw = " << withdraw << endl;
      customerFile.close();
      }
      customerFile.open(cusAccNumber + "\\Daily report.txt", ios::app);
      if (customerFile.is_open()) {
        customerFile << " " << currentDateTime() << " // Withdraw = " << withdraw << endl;
        customerFile.close();
      }
      customerFile.open(cusAccNumber + "\\Withdraw report.txt", ios::app);
      if (customerFile.is_open()) {
        customerFile << " " << currentDateTime() << " // Withdraw = " << withdraw << endl;
        customerFile.close();
      }
      cout << "\tSuccess to withdraw!\n";
    } else {
      cout << "\tYou balance is not enough! ";
    }
  } else {
    cout << "\tYou account number is wrong! ";
    cout << "\tFailed to Withdraw!\n";
  }
  cout << endl;
  cout << "\tYou can exit to menu pls press 'q' : ";
  cin >> qt_menu;
  cout << endl;
  if (qt_menu == 'q') {
    mainMenu();
  }
}
