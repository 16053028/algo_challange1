# Prajurit&Commander
 AlgoChallange1.

Ada seorang prajurit dengan Rank X. Dimana dia harus melapor kepada commander yang memiliki Rank X+1. Dan prajurit tersebut hanya boleh melapor kepada 1 orang commander.

buatlah sebuah fungsi 

function solution(ranks)

yang mengembalikan hasil dari berapa banyak prajurit yang bisa melapor kepada commander.

contoh :
ranks = array(3,3,4,4,5,2,0) maka hasilnya adalah 5. Karena rank 2 melapor kepada rank 3, Rank 3 melapor kepada rank 4, rank 4 ke rank 5. sedangkan rank 0 dan rank 5 tidak memiliki commander.

ranks = array(5,2,0) maka hasilnya adalah 0. Karena rank 5, 2, 0 tidak memiliki commander.


Answer :
Solusi saya

Pseudo-Code
```
Declaration :
result, c : integer;
haveReport : boolean;

Description
function solution(ranks){
	result = 0;
	for(i=0 to ranks.size){ // looping semua prajurit.
		for(j=i to ranks.size){ // Looping untuk mencari commander dari prajurit tersebut
			if(prajurit->ranks[x] have commander->ranks[x]+1 && !haveReport){
				result +=1; // variabel result ditambah 1;
				haveReport = true; // Tandai sudah melapor;
			} // akhir dari pencarian commander.
		}//akhir dari looping
	haveReport = false; // ganti prajurit rank[x] lain. dan tandai belum melapor
	}
	return result;
}
```

saya kira Time Complexitynya adalah O(n^2) dan Space Complexitynya adalah O(0) karena tidak memakai space tambahan. Koreksi saya jika salah.

Ada banyak solusi. Tapi saya menggunakan solusi ini. karena menurut saya ini cukup bagus.

anda punya solusi lain yang lebih baik dan efisien? Submit it and let me know about your solution. hehehehe

Terima kasih.