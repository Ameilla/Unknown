

public class stack {
	int capacity=2;
	int[] s=new int[capacity];
	int top=0;
	
	public static void main(String[] a)
	{
		stack nums=new stack();
		
		nums.push(11);
		nums.push(12);
		nums.push(13);
		nums.push(14);
		nums.push(15);
		nums.push(16);
		nums.show();
		System.out.print(nums.size());
	}

	private void push(int i) {
		if(size()==capacity)
		{
			expand();
		}
		s[top]=i;
		top++;
	}
	private void expand() {
		int len=size();
		int[] newstack=new int[capacity*2];
		System.arraycopy(s,0, newstack, 0, len);
		s=newstack;
		capacity=capacity*2;
		
	}

	private void pop() {
		if(isempty())
		{
			System.out.println("Stack is empty");
		}
		else
		{
		top--;
		int data=s[top];
		s[top]=0;
		System.out.println(data+"\n");
		}
	}
	public int size()
	{
		return top;
	}
	public boolean isempty()
	{
		if(top<=0)
			return true;
		return false;
	}
	private void show() {
		for(int n:s)
		{
			System.out.println(n);
		}
		
	}
}
