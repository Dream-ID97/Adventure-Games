#include <iostream>
#include <string>

using namespace std;

void hutan();
void gua();
void desa();
void rahasia();
void badEndingUltimate();

int main() {
    cout << "Selamat datang di Game Petualangan Teks!" << endl;
    cout << "Anda adalah seorang petualang yang mencari rahasia dunia kuno." << endl;

    cout << "\nDi depan Anda ada tiga jalur: " << endl;
    cout << "1. Masuk ke dalam hutan gelap." << endl;
    cout << "2. Masuk ke dalam gua yang suram." << endl;
    cout << "3. Pergi ke desa terdekat untuk mencari informasi." << endl;

    cout << "Pilih jalur Anda (1/2/3): ";
    int pilihan;
    cin >> pilihan;

    if (pilihan == 1) {
        hutan();
    } else if (pilihan == 2) {
        gua();
    } else if (pilihan == 3) {
        desa();
    } else {
        cout << "Pilihan tidak valid. Petualangan Anda berakhir sebelum dimulai." << endl;
    }

    return 0;
}

void hutan() {
    cout << "\nAnda memasuki hutan gelap yang penuh dengan suara misterius." << endl;
    cout << "Anda melihat cahaya di kejauhan dan mendengar suara air terjun." << endl;

    cout << "Apa yang akan Anda lakukan?" << endl;
    cout << "1. Menuju cahaya." << endl;
    cout << "2. Pergi ke arah suara air terjun." << endl;

    cout << "Pilih tindakan Anda (1/2): ";
    int pilihan;
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "\nAnda menuju cahaya dan menemukan sebuah kampung kecil yang ramah." << endl;
        cout << "Penduduk kampung memberi Anda makanan dan informasi berharga." << endl;
        cout << "Good Ending: Anda mendapatkan peta menuju rahasia dunia kuno!" << endl;
    } else if (pilihan == 2) {
        cout << "\nAnda pergi ke air terjun dan menemukan gua tersembunyi di belakangnya." << endl;
        cout << "Namun, gua tersebut penuh dengan jebakan!" << endl;
        cout << "Apa yang akan Anda lakukan?" << endl;
        cout << "1. Masuk lebih dalam ke gua." << endl;
        cout << "2. Keluar dari gua." << endl;

        cout << "Pilih tindakan Anda (1/2): ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "\nAnda terjebak dalam jebakan dan tidak bisa keluar." << endl;
            cout << "Bad Ending: Petualangan Anda berakhir tragis." << endl;
        } else if (pilihan == 2) {
            cout << "\nAnda keluar dari gua dengan selamat, tetapi tanpa menemukan apapun." << endl;
            cout << "Neutral Ending: Anda selamat, tetapi petualangan Anda sia-sia." << endl;
        } else {
            cout << "Pilihan tidak valid. Gua runtuh, dan Anda tidak bisa keluar." << endl;
            cout << "Bad Ending: Petualangan Anda berakhir tragis." << endl;
        }
    } else {
        cout << "Pilihan tidak valid. Anda tersesat di hutan." << endl;
        cout << "Bad Ending: Anda tidak pernah ditemukan." << endl;
    }
}

void gua() {
    cout << "\nAnda memasuki gua yang suram dan menemukan lorong bercabang." << endl;
    cout << "Apa yang akan Anda lakukan?" << endl;
    cout << "1. Pergi ke lorong kanan." << endl;
    cout << "2. Pergi ke lorong kiri." << endl;

    cout << "Pilih tindakan Anda (1/2): ";
    int pilihan;
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "\nAnda menemukan ruangan besar dengan harta karun di dalamnya!" << endl;
        cout << "Namun, harta tersebut terkutuk." << endl;
        cout << "Secret Ending: Anda menjadi penjaga harta karun selamanya." << endl;
    } else if (pilihan == 2) {
        cout << "\nAnda menemukan jalan keluar dari gua." << endl;
        cout << "Namun, Anda tidak menemukan apapun yang berharga." << endl;
        cout << "Neutral Ending: Anda keluar dengan selamat, tetapi tanpa hasil." << endl;
    } else {
        cout << "Pilihan tidak valid. Anda tersesat di gua." << endl;
        cout << "Bad Ending: Anda tidak pernah keluar." << endl;
    }
}

void desa() {
    cout << "\nAnda pergi ke desa terdekat dan bertemu dengan seorang tetua desa." << endl;
    cout << "Tetua desa memberi tahu Anda tentang legenda rahasia dunia kuno." << endl;

    cout << "Apa yang akan Anda lakukan?" << endl;
    cout << "1. Mencari petunjuk lebih lanjut di desa." << endl;
    cout << "2. Pergi ke tempat rahasia yang disebutkan oleh tetua desa." << endl;

    cout << "Pilih tindakan Anda (1/2): ";
    int pilihan;
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "\nAnda tinggal di desa dan menjadi bagian dari masyarakat di sana." << endl;
        cout << "Good Ending: Anda hidup bahagia di desa dengan orang-orang ramah." << endl;
    } else if (pilihan == 2) {
        rahasia();
    } else {
        cout << "Pilihan tidak valid. Anda tersesat di desa." << endl;
        cout << "Bad Ending: Anda tidak pernah menemukan rahasia dunia kuno." << endl;
    }
}

void rahasia() {
    cout << "\nAnda pergi ke tempat rahasia dan menemukan pintu besar dengan teka-teki di depannya." << endl;
    cout << "Apa yang akan Anda lakukan?" << endl;
    cout << "1. Memecahkan teka-teki." << endl;
    cout << "2. Meninggalkan tempat tersebut." << endl;

    cout << "Pilih tindakan Anda (1/2): ";
    int pilihan;
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "\nAnda berhasil memecahkan teka-teki dan pintu terbuka." << endl;
        cout << "Di dalamnya, Anda menemukan rahasia dunia kuno dan menjadi legenda!" << endl;
        cout << "True Ending: Anda menjadi pahlawan terkenal di seluruh dunia." << endl;
    } else if (pilihan == 2) {
        cout << "\nAnda meninggalkan tempat tersebut dan kembali ke desa." << endl;
        cout << "Neutral Ending: Anda selamat, tetapi rahasia dunia kuno tetap tersembunyi." << endl;
    } else {
        cout << "Pilihan tidak valid. Anda terjebak di tempat tersebut." << endl;
        cout << "Bad Ending: Anda tidak pernah keluar." << endl;
    }
}

void badEndingUltimate() {
    cout << "\nAnda memilih untuk melawan kekuatan kuno yang Anda temui di dalam gua." << endl;
    cout << "Namun, Anda tidak siap untuk menghadapi kekuatan tersebut." << endl;
    cout << "Kekuatan itu menguasai pikiran Anda, dan dunia Anda hancur dalam sekejap." << endl;
    cout << "Bad Ending Ultimate: Dunia Anda hancur, dan Anda terjebak dalam dimensi yang tak terhingga." << endl;
}