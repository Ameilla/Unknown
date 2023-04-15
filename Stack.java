public class stack {
	int[] s=new int[5];
	int top=0;
	
	public static void main(String[] a)
	{
		stack nums=new stack();
		nums.push(5);
		nums.push(15);
		nums.push(20);
		nums.pop();
		nums.show();
	}


	private void pop() {
		int data=s[top-1];
		s[top-1]=0;
		System.out.println(data+"\n");
	}


	private void show() {
		for(int n:s)
		{
			System.out.println(n);
		}
		
	}


	private void push(int i) {
		s[top]=i;
		top++;
		
	}
}
