// FACTORIAL

//int main(){
//	int a, i, product;
//	printf("Enter a Number: ");
//	scanf("%d", &a);
//	
//	for(i = 1; i <= &a; i++){
//		product *= i;
//	}
//	printf("The Factorial of %d = %d", a, product);
//}








// BIGGER NUMBER

int main(){
	int x, y, z;
	printf("Enter three Numbers: ");
	scanf ("%d", &x, &y, &z);
	
	
	if(x > y && x > z){
		return x;
	}
	else if(y > x && y > z){
		return y;
	}
	else if(z > x && z > y){
		return z;
	}
	printf("All three numbers are equal.", x, y, z);
}

