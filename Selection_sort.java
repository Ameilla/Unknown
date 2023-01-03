
public class sam
{
	public static void main(String[] args)
	{
		int a[]=new int[] {5,4,3,2,5};
		int len=a.length;
		int m=0;
		for(int i=0;i<len;i++)
		{
			m=i;
			for(int j=i+1;j<len;j++)
			{
				if(a[j]<a[m])
					m=j;
			}
			int temp=a[i];
			a[i]=a[m];
			a[m]=temp;
		}
		
		for(int i=0;i<len;i++)
		{
			System.out.print(a[i]);
		}
			
	}
}
