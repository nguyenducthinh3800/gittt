#include <iostream>
#include <iomanip>
 using namespace std;
 class SinhVien{
 	private:
 		string hoten;
 		string masv;
 		float diemtoan;
 		float diemly;
 		float diemhoa;
 	public:
 		SinhVien();
 		SinhVien(string ht, string msv, float dtoan, float dhoa, float dly);
 		float getDiemtoan();
 		float getDiemly();
 		float getDiemhoa();
 		string getHoten();
 		string getMasv();
 		void nhapsinhvien(SinhVien *, int);
 		void xuatsinhvien(SinhVien *, int);
 		string diemtb(SinhVien);
 		float dtb(SinhVien);
 };
 SinhVien::SinhVien(){
 	hoten = "";
 	masv = "",
 	diemtoan = 0;
 	diemly = 0;
 	diemhoa = 0;
 }
 SinhVien::SinhVien(string ht,string msv , float dtoan, float dhoa, float dly){
 	hoten = ht;
 	masv = msv;
 	diemtoan = dtoan;
 	diemly = dly;
 	diemhoa = dhoa;
 }
 void SinhVien::nhapsinhvien(SinhVien *sv, int n){
 	for(int i =0;i<n;i++){
 		cout<<"\nNhap thong tin sinh vien thu"<<i+1<<" :";
 		cout<<"\nNhap hoten: ";fflush(stdin);
		 getline(cin,sv[i].hoten);
 		cout<<"\nNhap diemtoan: ";cin>>sv[i].diemtoan;
 		 		cout<<"\nNhap diemly: ";cin>>sv[i].diemly;
 		cout<<"\nNhap diemhoa: ";cin>>sv[i].diemhoa;

 		cout<<"\nNhap masv: ";fflush(stdin);getline(cin,sv[i].masv);
 		
	 }
 	
 }
 void SinhVien::xuatsinhvien(SinhVien *sv,int n){
 	for(int i=0;i<n;i++){
 		cout<<"\nThong tin Sinh Vien thu "<<i+1<<": "<<endl;
 		cout<<"Hoten"<<setw(10)<<"MASV"<<setw(10)<<"Diemtoan"<<setw(10)<<"DiemLy"<<setw(10)<<"DiemHoa"<<setw(10)<<"DiemTB"<<endl;
 			cout<<sv[i].hoten<<setw(10)<<sv[i].masv<<setw(10)<<sv[i].diemtoan<<setw(10)<<sv[i].diemly<<setw(10)<<sv[i].diemhoa<<setw(10)<<diemtb(sv[i])<<"/"<<dtb(sv[i])<<setprecision(2)<<endl;
	 }
 }
 string SinhVien::diemtb(SinhVien sv){
 	float dtb = (sv.diemhoa+sv.diemly+sv.diemtoan)/3;
 	if(dtb>=8.5){
 		return "A";
	 }
	else if(dtb>=7&&dtb<8.5){
		return "B";
	}
	else return "C";
 }
 float SinhVien::dtb(SinhVien sv){
 	float DTB = (sv.diemhoa+sv.diemly+sv.diemtoan)/3;
 	return DTB;
 }	
 int main(){
 	SinhVien *sv;
 	int n;
 	cout<<"Nhap So Sinh Vien :";cin>>n;
 	sv = new SinhVien[n+1];
 	SinhVien a;
 	a.nhapsinhvien(sv,n);
 	a.xuatsinhvien(sv,n);
 	delete []sv;
 	return 0;
 }
