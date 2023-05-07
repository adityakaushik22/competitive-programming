#include<bits/stdc++.h>
using namespace std;

// intution/approach and problem statement:
/*Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire. However, Mirko is only allowed to cut a single row of trees.

Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade to that height and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact). Mirko then takes the parts that were cut off. For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).

Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. That‟s why he wants to set his sawblade as high as possible. Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.


so use aise height pe lagana haiki use m amount of height mil jaye
and jo upar ke cutting trees hai vo greater than m ho

so we can see jaise jaise height badhaenge hum utna wood kam milega
so hume max height btani hai taaki m amount of wood mil jaaye

so we'll use PREDICATE FUNCTION AND BINARY SEARCH HERE
PREDICATE FUNCTION: ESA FUNCTION JO SIRF TRUE/FLASE RETURN KARE
SO MONOTONIC PREDICATE FUNCTION HONA CHHAIYE LIKE ORDER MAINTAINED HONA CHHAIYE
FOR EX:: FFFTTTT , TTTTFFFF .......

 hum pehla true/false bhi find kar sakte hai isme jaise hum lower/upper bound se karte the
 and is predicate ka hi logic use krke hum find karenge


 so lets say and make a function
 function(h)-> if wood>=M -> true
 			   else false.
 			   so agar hume h height pe wood >m mil rahi to ye function true return karega nhi to flase.

so taking h values and giving true/false.
in the question h will always exceed the m so hum agar height 0 se bhi le to bhi vo m se bada aayega actq

	H -> 0 x x+1 x+2 ....     (SO YE 0 X h ki values he jise hum 0 se start karte karte katte jayenge so 0 pe bhi kate to bhi value trees ki >=m aayegi isliye true kara uske neeche lekin ek time esa aayega jab height jyada badh jayegi and cutted length >=m nhi hogi so wahan se false milna start ho jayega)
	     T T  T   T F F F F (SO EK TIME PE JAB JYADA HEIGHT CUTTING KI HO JAYEGI TO HUME KAM LENGTH KI TREES CUT MILEGA UPAR KA JO LESS THAN M HOGA SO FALSE DEGA)
		
		SO AGAR HUM LAST TRUE NIKAL LE TO WOHI MAX HEIGHT HOGI AND HMARA ANSWER.

SO HUM BINARY SEARCH H OF TREE PE KAR RHE SO 
LOW =0 HO JAYEGGA AND HIGH = H PHIR HUM WAHI MIDDLE ELEMNT SE BINARY SEARCH KARKE NIKAL LENE

*/		

const int N=1e6+10; // n bhi globally kar diya 
int n;
long long m; // required amount of wood
long long trees[N];

// making the predicate function
bool isWoodSufficient(int h){
	long long wood=0;
	for (int i = 0; i < n; ++i)
	{
		if(trees[i]>=h){ // agar humare array me tree ki height badi hai h se to hum usko kaat denge and baaki upar ka hum + karenge hamre wood collection me
			wood+=(trees[i]-h);
		}
	}
	return wood>=m; // so wood collection agar m se bada hai to true karega humara predicate function nhi to false karega.
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>trees[i];
	}
	long long low=0,high=1e9,mid; // high jitna total heigh le sakte hai to question me 10^9 tak le sakte isliye use itna liya
	
	// T T T T F F F F F....
	// PREDICATE HUME KUCH EESA DEGA HUME APNA LAST TRUE FIND KARNA HAI



	while(high-low>1){
		mid=(high+low)/2;
		if(isWoodSufficient(mid)){ // so mid check karwaenge ki true aarha mid me ya nhi phir agar aa rha to T T T T range me hi check karenge
			low=mid;
		}else{
			high=mid-1;
		}
	}
	if(isWoodSufficient(high)){
		cout<<high<<endl;
	}else{
		cout<<low<<endl; 
	}
}

// time complexity: so binary seacrh me while loop 0(logn) chalta hai and uske andar issufficent me 0(n) chal rha loop so,,
// TIME COMPLEXITY:::: 0(NLog(n)). 