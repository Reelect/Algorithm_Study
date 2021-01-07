# 2021-01-07(목) 알고리즘스터디 (카테고리 : 수학)<br>
##<br>
## 1. Done
	1. BJ_11653 / 알고리즘 분류 수학
	[백준_11653_소인수분해]<https://www.acmicpc.net/problem/11653>
		1. while문을 사용한 방식
			- N%i == 0일 때, i를 출력 & N/=i
			while문의 조건 혹은 while문 안에 (**i>=N**)이라는 조건문을 추가함으로써, break
			이재선<https://github.com/Reelect/Algorithm_Study/blob/master/BJ_11653/1.7_jaesun.cpp>
			이주찬<https://github.com/Reelect/Algorithm_Study/tree/master/BJ_11653/BJ_11653_LJC>
		2. for문 사용
			위의 알고리즘과 거의 동일
			n /= i & i--를 이욯해서 같은 수의 소수로 계속 소인수분해 되도록 함.
			for문에서 i < sqrt(n)을 조건으로 다는 것이 아니라, **i*i < n**으로 달았을 때 시간 단축 // root의 정확한 값을 계산할 필요가 없어서 그런 것 같음
			김여원<https://github.com/Reelect/Algorithm_Study/blob/master/BJ_11653/1.7_yeowon.cpp>
			이주찬<https://github.com/Reelect/Algorithm_Study/tree/master/BJ_11653/BJ_11653_LJC>
		3. for문 + while문 사용
			for문 안에 while문을 넣음으로써 위에서 i--를 해주고 i++을 다시 해주는 과정을 생략할 수 있었음.
			예를 들어 위의 두 알고리즘의 경우 72 -> (2), 36 -> (2,2), 18 -> (2,2,2),9 -> (2,2,2,3),3 -> (2,2,2,3,3)이런식으로 나오지만<br>
			for + while문을 함께 쓰면
			72 -> (2,2,2),9 -> (2,2,2,3,3)으로 단축할 수 있음
			김철희<https://github.com/Reelect/Algorithm_Study/blob/master/BJ_11653/11653_fe.cpp>
		요약 
		- sqrt(n)보다 i*i<n을 쓸 경우 시간을 절약할 수 있다. sqrt의 정확한 값을 필요로하는지 판단해야한다.
		- for문 안에 while문을 넣음으로써 조금 더 효율적으로 코드를 짤 수 있다.

	2. BJ_1929 / 알고리즘 분류 수학
	[백준_1929_소수구하기]<https://www.acmicpc.net/problem/1929>
		1. prime인지 판단하는 함수를 만들어서 M~N까지 for문을 돌린다.
		2. prime인지 판단하는 함수를 만드는데, 그 안에서 또 prime인지 판단하는 함수를 만듦으로써 test case를 줄일 수 있지만, 한 번 더 내려가는 재귀함수를 이용한다.
		3. prime판단 함수를 만들지 않고, 비슷한 내용을 main안에서 처리한다.
		4. 메모리를 조금 더 사용해서 배열을 만들고 에라토스테네스의 체를 활용하여, 시간을 단축한다.
		이주찬<https://github.com/Reelect/Algorithm_Study/tree/master/BJ_1929/BJ_1929_LJC>
			- 1 -> 2 : test case를 줄이는 것 보다 재귀함수를 쓰는게 이 경우에는 더 손해였음
			- 3 : 결과적으로 시간이 가장 절약됐음 -> 재귀함수 이용하는 것이 시간을 꽤 잡아먹음 but 메모리는 더 적게 잡아먹은듯.
			- 4 : 에라토스테네스의 채를 활용하다가 웬만한 case에 대해서는 정답으로 나왔지만 백준 사이트에서는 틀리게 나옴.

## 2. To Do
### 1. 지난 시간 틀렸거나, 더 좋은 알고리즘이 있으면 찾아오기<br>
### 2. 문제 풀어오기

	//난이도 실버4
	1. 백준 1978 <https://www.acmicpc.net/problem/1978>
	2. 백준 2851 <https://www.acmicpc.net/problem/2851>
	
	//난이도 실버2
	3. 백준 4948 <https://www.acmicpc.net/problem/4948>
	//난이도 실버1
	4. 백준 9020 <https://www.acmicpc.net/problem/9020>

