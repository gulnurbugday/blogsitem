#include <stdio.h>
#include <string.h>

#define MAX_APPOINTMENTS 100

typedef struct {
    char name[50];
    char date[20];
    char time[10];
} Appointment;

Appointment appointments[MAX_APPOINTMENTS];
int appointmentCount = 0;

void addAppointment() {
    if (appointmentCount < MAX_APPOINTMENTS) {
        printf("Randevu Sahibi Adı: ");
        scanf(" %[^\n]s", appointments[appointmentCount].name);
        printf("Randevu Tarihi (GG/AA/YYYY): ");
        scanf("%s", appointments[appointmentCount].date);
        printf("Randevu Saati (SS:DD): ");
        scanf("%s", appointments[appointmentCount].time);

        appointmentCount++;
        printf("Randevu başarıyla eklendi!\n");
    } else {
        printf("Randevu kapasitesi dolu!\n");
    }
}

void viewAppointments() {
    if (appointmentCount == 0) {
        printf("Mevcut randevu yok.\n");
    } else {
        printf("Mevcut Randevular:\n");
        for (int i = 0; i < appointmentCount; i++) {
            printf("%d. %s - Tarih: %s - Saat: %s\n", i + 1, appointments[i].name, appointments[i].date, appointments[i].time);
        }
    }
}

void cancelAppointment() {
    int appointmentNumber;
    viewAppointments();
    if (appointmentCount > 0) {
        printf("Silmek istediğiniz randevunun numarasını girin: ");
        scanf("%d", &appointmentNumber);
        if (appointmentNumber > 0 && appointmentNumber <= appointmentCount) {
            for (int i = appointmentNumber - 1; i < appointmentCount - 1; i++) {
                appointments[i] = appointments[i + 1];
            }
            appointmentCount--;
            printf("Randevu başarıyla silindi!\n");
        } else {
            printf("Geçersiz randevu numarası.\n");
        }
    }
}

int main() {
    int choice;
    do {
        printf("\n--- Akıllı Randevu Takip Sistemi ---\n");
        printf("1. Yeni Randevu Oluştur\n");
        printf("2. Randevularımı Görüntüle\n");
        printf("3. Randevu İptal Et\n");
        printf("4. Çıkış\n");
        printf("Seçiminiz: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addAppointment();
                break;
            case 2:
                viewAppointments();
                break;
            case 3:
                cancelAppointment();
                break;
            case 4:
                printf("Çıkış yapılıyor...\n");
                break;
            default:
                printf("Geçersiz seçim! Tekrar deneyin.\n");
        }
    } while (choice != 4);

    return 0;
}
