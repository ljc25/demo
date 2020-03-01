import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		String input = sc.nextLine();
		char[] str = input.toCharArray();
		int length = input.length();

		int end, begin, maxLength = 1, size;
		for (int i = 0; i < length; i++) 
		{
			for (int j = length - 1; j >= i + 1 && j - i + 1 > maxLength; j--,size = 0) 
																		/* 我觉得每一次都要更新
																		size记录不同堆成子串的长度*/
			{
				if (str[i] == str[j]) 
				{

					begin = i + 1;
					end = j - 1;
					size = 2;
					// 左边的人是否遇到右边的人
					while (begin < end) 
					{
						if (str[begin] != str[end]) 
						{
							break;
						}
						size += 2;
						begin++;
						end--;
					}
					// 如果遇到，那么右边的人只有两个可能，既在左边的人后面，或者和左边的人在同一个位置
					if (end <= begin) 
					{
						if (begin == end) 
						{
							size++;
						}
						if (size > maxLength) 
						{
							maxLength = size;
						}
					}
				}
			}
		}
		System.out.println(maxLength);
		sc.close();
	}
}
