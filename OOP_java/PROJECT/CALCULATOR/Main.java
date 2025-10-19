class Bank {
    double balance = 1000;

    void deposit(double amount) { balance += amount; System.out.println("Deposited: " + amount); }
    void withdraw(double amount) { balance -= amount; System.out.println("Withdrew: " + amount); }
    void checkBalance() { System.out.println("Balance: " + balance); }
}

class SavingsBank extends Bank {
    @Override
    void withdraw(double amount) {
        if(amount > balance) System.out.println("Insufficient funds!");
        else {
            balance -= amount;
            System.out.println("SavingsBank withdrew: " + amount);
        }
    }
}

class CurrentBank extends Bank {
    @Override
    void withdraw(double amount) {
        balance -= amount;
        System.out.println("CurrentBank withdrew: " + amount);
    }
}

public class Main {
    public static void main(String[] args) {
        Bank b1 = new SavingsBank();
        Bank b2 = new CurrentBank();

        b1.deposit(500);        // SavingsBank deposit
        b1.withdraw(2000);      // Runtime checks overridden withdraw → Insufficient funds
        b1.checkBalance();      // Balance check

        b2.deposit(1000);
        b2.withdraw(500);
        b2.checkBalance();
    }
}
