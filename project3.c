#include <stdio.h>

int main(void) {
    char answer;
    double totalvotes = 0;
    double Chocolate = 0;
    double Vanilla = 0;
    double RockyRoad = 0;
    double Mintchocolatechip = 0;
    char choice = 'y';
    double chocoPerc, vanPerc, rockPerc, minPerc;// I had to look this up because in my previous code bc I had it in separate lines and it didn't work. It told me to do this.

    
    while (choice == 'y') {
        printf("What is the best ice cream? A. Chocolate. B. Vanilla. C. Rocky Road. D. Mint chocolate chip.\n");
        scanf(" %c", &answer); 
        totalvotes++; 

        if (answer == 'b') {
            Vanilla++; 
        }
        if (answer == 'a') {
            Chocolate++;
        }
        if (answer == 'c') {
            RockyRoad++;
        }
        if (answer == 'd') {
            Mintchocolatechip++;
        }

        
        chocoPerc = (Chocolate / totalvotes) * 100;
        vanPerc = (Vanilla / totalvotes) * 100;
        rockPerc = (RockyRoad / totalvotes) * 100;
        minPerc = (Mintchocolatechip / totalvotes) * 100;

        printf("Chocolate: %g%\n", chocoPerc);
        printf("Vanilla: %g%\n", vanPerc);
        printf("Rocky Road: %g%\n", rockPerc);
        printf("Mint Chocolate Chip: %g%\n", minPerc);

        
        printf("Would you like to go again? (y/n): ");
        scanf(" %c", &choice); 
    }

    return 0;
}

git add *
git commit -m"done"
git push
