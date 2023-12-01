#include <stdio.h>

int main() {
  int totalBelanja;
  int transaksiPerBulan;
 

  printf("Masukan total belanja: \n");

  scanf("%d", &totalBelanja);
  printf("Masukan jumlah transaksi: \n");

  scanf("%d", &transaksiPerBulan);

  if (totalBelanja < 200000) {
    printf("Maaf, Anda tidak mendapatkan diskon");
  }else{
    int diskon;
    if (totalBelanja >= 200000 && totalBelanja < 500000) {
      diskon = 10;
    } else if (totalBelanja >= 550000 && totalBelanja < 1000000) {
      diskon = 20;
    } else if (totalBelanja >= 1000000) {
      diskon = 30;
    }
    if (transaksiPerBulan == 4) {
      diskon += 20;
    }
    int hargaDiskon = totalBelanja * diskon / 100;
    double hargaSetelahDiskon = totalBelanja - hargaDiskon;
    printf("Total belanja: %.2lf\n", hargaSetelahDiskon);
    
  }


  return 0;
}


