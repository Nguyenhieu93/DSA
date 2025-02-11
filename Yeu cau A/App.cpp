#include <bits/stdc++.h>
#include "QuanLy.cpp"
using namespace std;

class App {
public:
    int menu() {
        cout << endl;
        cout << right << setw(25) << "My garage\n";

        cout << setfill('-');		
	    cout << setw(40) << "-" << endl;
        cout << setfill(' ');

        cout << "1. Thiet lap danh sach cac xe\n";
        cout << "2. Hien thi garage\n";
        cout << "3. Them chiec xe moi vao trong danh sach\n";
        cout << "4. Sua thong tin cua chiec xe\n";
        cout << "5. Sap xep lai cac xe theo gia tang dan\n";
        cout << "6. Tim kiem chiec xe\n";
        cout << "7. Tim kiem chiec xe theo ten\n";
        cout << "8. Tim kiem chiec xe theo hang\n";
        cout << "9. Tim kiem chiec xe theo mau\n";
        cout << "10. Tim kiem chiec xe theo gia\n";
        cout << "11. Xoa chiec xe ra khoi garage\n"; 
        cout << "12. Thoat\n";

        cout << setfill('-');		
	    cout << setw(40) << "-" << endl;
        cout << setfill(' ');
        
        cout << "Chon chuc nang: ";
        
        while(1){
            int t;
            cin>>t;
            if (t >= 1 && t <= 12) return t;
            cout << "Khong dung dinh dang!!";
            cout << " Xin moi nhap lai: ";
        }
    }
    void run() {
        QuanLy a;
        int tt;
        do{
            tt = menu();
            switch (tt)
            {
                case 1:
                    a.input();
                    break;
                case 2:
                    a.output();
                    break;
                case 3:
                    a.add();
                    break;
                case 4:
                    a.modify();
                    break;
                case 5: 
                    a.sortCar();
                    break;
                case 6:
                    a.find();
                    break;
                case 7:
                    a.findName();
                    break;
                case 8:
                    a.findAutomaker();
                    break;
                case 9:
                    a.findColor();
                    break;
                case 10:
                    a.findPrice();
                    break;
                case 11:
                    a.erase1();
                    break;
                case 12: 
                    cout << "Cam on ban da su dung dich vu!!";
                default:
                    break;
            }
        }while(tt != 12);
    }
};


main() {
    App a;
    a.run();
}