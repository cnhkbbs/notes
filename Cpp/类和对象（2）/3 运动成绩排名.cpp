// 某大学开田径运动会，现有12名选手参加100米比赛，对应的运动员号及成绩如表所示，请按照成绩排名并输出，要求每一行输出名次、运动员号及成绩。

// 运动员号    成绩（秒）    运动员号    成绩（秒）
// 001     13．6           031    14．9
// 002    14．8           036    12．6
// 010    12．0           037    13．4
// 011    12．7           102    12．5
// 023    15．6           325    15．3
// 025    13．4           438    12．7
// ####使用给定的类，完成数据的对象的定义，并按照成绩排序后输出（格式见输出样例）

// 类声明如下：
// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std; 
// class Sport    
// {
//   public: 
//        Sport() { }
//     Sport(string n,double g)
//     {
//         num=n;
//         grade=g;
//     } 
//     string num;    
//     double grade;    
// };    
// 输入样例：
// 无
// 输出样例：
// 在这里给出相应的输出。例如：

//      1   010    12
//      2   102  12.5
//      3   036  12.6
//      4   011  12.7
//      5   438  12.7
//      6   025  13.4
//      7   037  13.4
//      8   001  13.6
//      9   002  14.8
//     10   031  14.9
//     11   325  15.3
//     12   023  15.6
// ####注意：使用setw（）进行宽度设置，每个输出项占6列。
////////////////////////////////////////////////////////
int main()
{
	Sport stud[12]={
	 Sport("001", 13.6), Sport("002", 14.8), Sport("010", 12.0),
	 Sport("011", 12.7), Sport("023", 15.6), Sport("025", 13.4),
	 Sport("031", 14.9), Sport("036", 12.6), Sport("037", 13.4),
	 Sport("102", 12.5), Sport("325", 15.3), Sport("438", 12.7)};
	int i,j;
	Sport temp;
	for(i=0;i<12;i++){
		for(j=0;j<11-i;j++){
			if(stud[j].grade>stud[j+1].grade){
				temp=stud[j];
				stud[j]=stud[j+1];                //冒泡
				stud[j+1]=temp;
			}
		}
	}
	j=1;
	for(i=0;i<12;i++){
		cout<<setw(6)<<j<<setw(6)<<stud[i].num<<setw(6)<<stud[i].grade<<endl;
		j++;
	}
}
