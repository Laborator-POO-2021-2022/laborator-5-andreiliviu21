#include "Student.hpp"

int main()
{
    Student *s=new Student[4];

    int nota1[4] = { 10, 3, 6, 7 };
    int nota2[4] = { 7, 2, 6, 8 };
    int nota3[3] = { 10, 10, 4 };
    int nota4[4] = { 10, 5, 8, 7 };
    int nota5[4] = { 6, 8, 5, 6};

    s[0] = Student(nota1, 4, "Dna Cosmina", "323AB",4, "Marius");
    s[1] = Student(nota2, 4, "Dna Andrada", "312AB",4, "Vasile");
    s[2] = Student(nota3, 3, "Dnul Ghiu", "323AB",4, "Ruxi");
    s[3] = Student(nota4, 4, "Dna Maria", "324AB",4, "Ana");

    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 4; j++) {
            if( s[i].get_medie() >= s[j].get_medie() ) {
                s[i].interschimbare3(s[j]);

            } 
        }
    }
    for (int j = 0; j < 4 ; j++) {
        std::cout << s[j];
    }

    
    //name change diriginte
    
    
    s[2].Diriginte::name_change("Dirig Nou");
    
    std::cout << "Introduceti pozitia: ";
    int poz;
    std::cin >> poz;
    Student *arr=new Student[5];

    for (int i = 0; i < poz; i++) {
        arr[i] = s[i];
    }

    for (int i = poz+1; i < 5; i++) {
        arr[i] = s[i-1];
    }

    arr[poz] = Student(nota4, 4, "Vidican x_x", "354AB",4, "Alexandra");


    for (int j = 0; j < 5 ; j++) {
        std::cout << arr[j];
    }
    delete[] s;
    delete[] arr;
    return 0;
}