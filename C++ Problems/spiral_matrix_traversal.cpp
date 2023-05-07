#include<bits/stdc++.h>
using namespace std;

/*traversing a matrix in spiral form --------
									  |------|
									  |-----||
									  -------|


	so we will make the for variable in this 1. row start 2. row end 3. col start 4. col end
	so kyunki hume char direction se kuch +- rows/col karne padenge isliye char variable liye hai like row start pehla row ka pehla col me he so wahan se start karke hume col start tak jana hai so col start se row end like that.

			⇩             ⇩
		  LEFT          RIGHT

->TOP	 	[1   2   3    4]
		    [5   6   7    8]
		    [9   10  11  12]
->BOTTOM	[13  14  15  16]


	SO APPROACH YE HAI KI HUM PEHLE LEFT->RIGHT JAYENGE YAANI ROW START SE ROW END PHIR HUME US ROW END SE NEECHE AANA HE TO HUM TOP++ KAREGE TO HUM TOP++ SE AAKHRI ROW PE HONGE PHIR WAHAN SE NEECHE JANA HE 
	YAANI TOP->BOTTOM SO LEKIN YE KARNE KE BAAD HUME RIGHT->LEFT BHI JANA HAI ISLIYE  RIGHT-- KARENGE ISSE HUM NEECHE HONGE SO PHIR RIGHT->LEFT HO JAAYEGA

	NOW AB BOTTOM->TOP JAANA HAI SO JAAYENGE LEKIN PHIR HUME ANDAR JAANA HAI SO USKO VALUE TAK LAAYENGE OS LEFT++; 


	SO BASICALLY HUM JAYENGE LEKIN AGLE SPIRAL ME JAANE KE LIYE USKI STARTING VALUE JAHAN SE SPIRAL SHURU KARNA US TAK HUME EK VARIABLE LENA HOGA YA ++/-- KARNA HOGA TAAKI HUM US JAGAH SE AGAL ITERATION KARE


	SO BASICALLY JAB HUM PEHLI BAAR LEFT TO RIGHT JAAYENGE PHIR HUME NEECHE AANA HAI LEKIN HUM US STARTING POINT PE AANA HOGA JISSE HUM EECHE JAAYE SO HUM TOP++ KARDENGE SO VO LOOP KHATAM HONE TAK WAHAN AA JYEGA ISLIYE LOOP KHATAM HONE PAR HUME HAR BAAR ESA VALUE UPDATE KARNI HOGI HAR SPIRAL KE AATE.
	

*/ 
int main(){
	
	int row,col;
	cin>>row>>col;

	int a[row][col];

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>a[row][col];
		}
	}

	// making the 4 variables

	int top=0,bottom=row-1,left=0,right=col-1;

	// jabtak hamara row start hamre row se chota hai and jabtak col start colend se chota hai
	while(top<=bottom && left<=right){

		// left->right
		for(int i=left;i<=right;i++){
			cout<<a[top][i]<<" "; 
		}
		top++; 
	
		// top->bottom
		for(int i=top;i<=bottom;i++){
			cout<<a[i][right]<<" ";
		}
		right--;

		// right->left

		if(top<=bottom){
		for(int i=right;i>=left;i--){
			cout<<a[bottom][i]<<" ";
		}
		bottom--;
	}
		// bottom->top

		if(left<=right){
		for(int i=bottom;i>=top;i--){
			cout<<a[i][left]<<" ";
		}
		left++;
	}

	}


}