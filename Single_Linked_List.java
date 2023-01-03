
import java.util.Scanner;
public class sam
{
	static class node
	{
		int data;
		node next;
		node(int num)
		{
			data=num;
			next=null;
		}
	}
	public static void main(String[] args)
	{
		Scanner input=new Scanner(System.in);
		int n=input.nextInt();
		node head=null,temp=null;
		while(n>0)
		{
			int y=input.nextInt();
			node newnode=new node(y);
			if(head==null)
			{
				head=newnode;
				temp=newnode;
			}
			else
			{
				temp.next=newnode;
				temp=temp.next;
			}
			n--;
		}
		while(head!=null)
		{
			System.out.println(head.data);
			head=head.next;
		}
		
	}
}
