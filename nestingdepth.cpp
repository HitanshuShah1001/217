#Prac 2

#include<bits/stdc++.h>

using namespace std;

int main()

{

int a;

	cin>>a;

	int temp = a;

	while(a--){

		cout<<"Case #"<<temp-a<<": ";

		string s;

		string ans="";

		cin>>s;

		int check;

		for(int i=0;i<s.length();i++){

			if(i==0){

				for(int j=0;j<s[i]-'0';j++){

					ans+="(";

				}

				ans+=s[i];

				//check = s[i]-'0';

			}

			else{

				int p = s[i]-s[i-1];

				if(p<0){

					for(int i=0;i<abs(p);i++){

						ans+=")";

					}

					ans+=s[i];

				}

				else{

					for(int i=0;i<p;i++){

						ans+="(";

					}

					ans+=s[i];

				}

				

			}

		}

		for(int i=0;i<s[s.length()-1]-'0';i++){

			ans+=")";

		}

		cout<<ans<<endl;

	}

}

