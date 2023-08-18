#include <stdio.h>

struct blood {
    int age;
    char name[100];
    int bloodtype;
};

struct patient {
    int age;
    char name[100];
    char disease[100];
    int bloodtype;
};

int main() {
    struct blood donor;
    struct patient p;

    printf("Hello\nWELCOME TO *SUN BLOOD DONATION CENTRE *\n");
    char reply;

    printf("DO YOU WANT TO DONATE THE BLOOD REPLY D OR d\n");
    printf("OR IF YOU NEED BLOOD REPLY WITH N OR n\n");
    scanf(" %c", &reply);

    if (reply == 'd' || reply == 'D') {
        printf("PLEASE TELL YOUR AGE :");
        scanf("%d", &donor.age);

        if (donor.age >= 18) {
            printf("YOU ARE ELIGIBLE FOR DONATION\n");
            printf("PLEASE TELL YOUR NAME :");
            scanf("%s", donor.name);
            printf("PLEASE TELL YOUR BLOODTYPE :\n1.A negetive\n2.A positive\n3.B negetive\n4.O positive\n5.O negetive\n6.AB negetive\n7.AB positive\n");
            scanf("%d", &donor.bloodtype);
            printf("Please go to counter number %d\n", donor.bloodtype);

            FILE* p;
            p = fopen("donor.txt", "a");
            fprintf(p, "%d %s %d\n", donor.age, donor.name, donor.bloodtype);
            fclose(p);
        } else {
            printf("YOU ARE NOT ELIGIBLE FOR DONATION. AGE SHOULD BE 18 OR ABOVE.\n");
        }

        printf("THANK YOU FOR DONATING BLOOD AND SAVING A LIFE\n");
    } else if (reply == 'n' || reply == 'N') {
        printf("PLEASE TELL YOUR AGE :");
        scanf("%d", &p.age);
        printf("PLEASE TELL YOUR NAME :");
        scanf("%s", p.name);
        printf("Tell your disease/case:");
        scanf("%s", p.disease);
        printf("PLEASE TELL YOUR BLOODTYPE :\n1.A negetive\n2.A positive\n3.B negetive\n4.O positive\n5.O negetive\n6.AB negetive\n7.AB positive\n");
        scanf("%d", &p.bloodtype);

        printf("Please go to counter number %d for treatment.\n", p.bloodtype);
        printf("HOPE YOU GET WELL SOON\n");

        FILE* fp;
        fp = fopen("need.txt", "a");
        fprintf(fp, "%d ||%s || %s || %d\n", p.age, p.name, p.disease, p.bloodtype);
        fclose(fp);
    }

    return 0;
}
