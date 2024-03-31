#include <iostream>
using namespace std;
enum account_type
{
    saving = 1,
    current,
    DMAT
};
class InsufficientFunds
{
private:
    int accid;
    double cur_balance;
    double withdraw_amount;

public:
    InsufficientFunds(int accid, double cur_balance, double withdraw_amount)
    {
        this->accid = accid;
        this->cur_balance = cur_balance;
        this->withdraw_amount = withdraw_amount;
    }
    void display()
    {
        cout << "....INSUFFICIENT BALANCE...." << endl;
        cout << "ACCOUNT ID:" << accid << endl;
        cout << "ACCOUNT CURRENT BALANCE:" << cur_balance << endl;
        cout << "ACCOUNT WITHDRAWL BALANCE:" << withdraw_amount << endl;
    }
};
class Account
{
private:
    int custId;
    account_type type;
    double balance;

public:
    Account()
    {
        this->custId = 0;
        this->type = saving;
        this->balance = 0;
    }
    Account(int custId, account_type type, double balance)
    {
        this->custId = custId;
        this->type = type;
        this->balance = balance;
    }
    void setCustId(int custId)
    {
        this->custId = custId;
    }
    void setType(account_type type)
    {
        this->type = type;
    }
    void setBalance(double balance)
    {
        this->balance = balance;
    }
    int getCustId()
    {
        return custId;
    }
    account_type getAccountType()
    {
        return type;
    }
    double getBalance()
    {
        return balance;
    }
    void display()
    {
        cout << "CUSTOMER ID -" << custId << endl;
        cout << "ACCOUNT TYPE -";
        if (type == 1)
            cout << "SAVING" << endl;
        else if (type == 2)
            cout << "CURENT" << endl;
        else if (type == 3)
            cout << "DMAT" << endl;
        cout << "BALANCE -" << balance << endl;
    }
    void accept()
    {
        int var = 0;
        cout << "ENTER CUSTOMER ID -";
        cin >> custId;
        do
        {
            cout << "ENTER 1 -SAVING" << endl;
            cout << "ENTER 2 -CURRENT" << endl;
            cout << "ENTER 3 -DMAT" << endl;
            cout << "ENTER ACCOUNT TYPE -";
            cin >> var;
        } while (!(var < 4 && var > 0));
        type = (account_type)var;
        this->setType(type);
        cout << "ENTER INITIAL BALANCE -";
        cin >> balance;
    }
    void depositMoney(double value)
    {
        balance = balance + value;
        cout << "BALANCE NOW -" << balance << endl;
    }
    void withdrawlMoney(double value)
    {
        if (value > balance)
            throw InsufficientFunds(custId, balance, value);
        balance = balance - value;
        cout << "BALANCE NOW -" << balance << endl;
    }
}
;


int main()
{
    int choice;
    Account array[5];
    int index = 0;
    // array[1].accept();
    // array[1].display();
    do
    {
        cout << "0.EXIT" << endl;
        cout << "1.CREATE ACCOUNT" << endl;
        cout << "2.DISPLAY ACCOUNT" << endl;
        cout << "3.DEPOSIT MONEY" << endl;
        cout << "4.WITHDRAW MONWY" << endl;
        cout << "5.CHECK ACCOUNT BALANCE" << endl;
        cout << "ENTER YOUR CHOICE -";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "THANK YOU............." << endl;
            break;
        case 1:
            try
            {
                array[index].accept();
                index++;
            }
            catch (InsufficientFunds &e)
            {
            }

            break;
        case 2:
        {
            int var;
            cout << "ENTER YOUR ACCOUNT ID -";
            cin >> var;
            for (int i = 0; i < index; i++)
            {
                if (var == array[i].getCustId())
                {
                    array[i].display();
                }
            }
        }
        break;
        case 3:
        {
            int var;
            cout << "ENTER YOUR ACCOUNT ID -";
            cin >> var;
            for (int i = 0; i < index; i++)
            {
                if (var == array[i].getCustId())
                {
                    int value;
                    cout << "ENTER THE AMOUNT FOR DEPOSIT -";
                    cin >> value;
                    array[i].depositMoney(value);
                }
            }
        }
        break;
        case 4:
        {
            int var;
            cout << "ENTER YOUR ACCOUNT ID -";
            cin >> var;
            try
            {
                for (int i = 0; i < index; i++)
                {
                    if (var == array[i].getCustId())
                    {
                        int value;
                        cout << "ENTER THE AMOUNT FOR WITHDRAWL -";
                        cin >> value;
                        array[i].withdrawlMoney(value);
                    }
                }
            }
            catch(InsufficientFunds &error)
            {
                error.display();
            }
        }
        break;
        case 5:
        {
            int var;
            cout << "ENTER YOUR ACCOUNT ID -";
            cin >> var;
            for (int i = 0; i < index; i++)
            {
                if (var == array[i].getCustId())
                {
                    cout << "BALANCE -" << array[i].getBalance() << endl;
                }
            }
        }
        break;

        default:
            break;
        }
    } while (choice != 0);

    return 0;
}