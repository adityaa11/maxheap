#include<iostream>
#define clr for(int s=0; s<25; s++) cout<<"\n";
using namespace std;

int arr[16];


void main(){
	int menu,data;
	int n=0;
	int p,temp,k,q,Lchild,Rchild,a;


	do{
		clr
		
		cout<<"Min-Heap\n";  //menu
		cout<<"============================\n";
		cout<<"1. Insert \n2. Lihat Heap\n3. Delete\n4. Exit\n";
		do{
		cout<<"Choose : "; cin>>menu; cin.sync(); cin.clear();
		}while(menu<1 || menu>4);  //validasi agar user menginput 1-4

//////////////////////////////////////////////////////////////////////////////////////
		if(menu==1){
			n++; //counter increment
			
			cout<<"Masukkan data : ";				//meminta inputan data dari user
			cin>>data; cin.sync(); cin.clear();
			

			arr[n]=data;  //data dari user masuk ke array indeks ke n 
			p=n/2;    //penentuan parent

			if(n==15){							//validasi jika data masih kosong
				cout<<"Heap sudah penuh !";
				
			}else if(n==1){							//masuk data pertama
												
				cout<<"Data berhasil di input !";
				cin.get();

			}else{
				
				
				k=n;					//mengganti n dengan k
				do{
					temp=arr[k];		//swap data
					arr[k]=arr[p];
					arr[p]=temp;

					k=p;     //penentu data baru untuk dicek
					p=k/2;	//penentu parent baru

				}while(arr[k]<arr[p]); //pengecekan jika data terakhir lebih kecil dari parentnya
			
				cout<<"Data berhasil di input !"; //validasi data berhasil di input
				cin.get();
				
			}
			
/////////////////////////////////////////////////////////////////////////////////////////////////////////////	

		}else if(menu==2){
			clr
			if(n==NULL){			//validasi data masih kosong
				cout<<"Belum ada data yang di input !";
				
			}else{

				cout<<"Data Min-Heap\n";				//header
				cout<<"========================\n\n";
				cout<<"No.  Data\n";

			for(int i=1; i<=n; i++){				//pengulangan untuk mencetak semua data
				cout<<i<<"      "<<arr[i]<<endl;

			}

		}
			cin.get();
////////////////////////////////////////////////////////////////////////////////////////////////////////////

		}else if(menu==3){
			if(n==0){
				cout<<"Data Kosong";		//validasi jika data masih kosong
			}else{
			q=n;     //mengganti n dengan q
			a=1;    //penentu data yang akan dicek
			Lchild=a*2;   //penentu anak kiri
			Rchild=a*2+1; //penentu anak kanan


			arr[a]=arr[q]; //mengganti data di indeks pertama menjadi data yang di indeks terakhir
			
			do{
			if(arr[Lchild]<arr[Rchild]){  //pengecekan jika anak kiri lebih kecil dari anak kanan
				
					temp=arr[a];          //swap data
					arr[a]=arr[Lchild];
					arr[Lchild]=temp;

					a=Lchild;      //penentu data yang akan dicek lagi
					Lchild=a*2;    //penentu anak kiri
					Rchild=a*2+1;  //penentu anak kanan


				
			}else if(arr[Lchild]>arr[Rchild]){ //pengecekan jika anak kanan lebih kecil dari anak kiri
					temp=arr[a];            //swap data
					arr[a]=arr[Rchild];
					arr[Rchild]=temp;

					a=Rchild;        //penentu data yang akan dicek lagi
					Lchild=a*2;		//penentu anak kiri
					Rchild=a*2+1;   //penentu anak kanan

			}

		}while(arr[Lchild]>arr[a] || arr[Rchild]>arr[a]); //pengecekan sampai anak kiri atau anak kanan lebih besar dari array yang ingin dicek

				cout<<"Hapus berhasil ! ";  //validasi data berhasil dihapus
				n--;  //counter decrement
				cin.get();

			}

			cin.get();


////////////////////////////////////////////////////////////////////////////////////////////


			}else if(menu==4){
				clr
				cout<<"Thank you ^^b ";

		}

	

	}while(menu!=4);


	


	

	cin.get();
}