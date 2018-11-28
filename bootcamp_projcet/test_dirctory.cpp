#include <iostream>
#include <fstream>
#include  <vector>
#include <dirent.h>

#include <string>


//#include "protobuf/proto_vector.pb.h"
#include "proto_vector.pb.h"
using namespace std;





int main(int argc, char *argv[])
//int main(0)
{
	if(argc < 2)
	{
	perror("a.out directory \n");
	return 0;
	}
	myvector ver;

	cout << ver.str_size() << endl;

	//ver.add_str("Chirag");
//	cout << ver.str_size() << endl;
//	string *p = ver.mutable_str(0);
//	cout << *p << endl;
	
	//ver.add_str("Patel");
//	cout << ver.str_size() << endl;
//	string *p1 = ver.mutable_str(0);
//	cout << *p1 << endl;



	DIR *dpdf;
	struct dirent *epdf;
	int count = 0;
	dpdf = opendir(argv[1]);
	if(dpdf != NULL){
		while (epdf = readdir(dpdf)){
			count ++;	
			cout << "Filename = " << epdf->d_name  << endl;
			ver.add_str((epdf->d_name));
				
		}
	closedir(dpdf);

	}

	for(int i = 0; i<count ; i++ ){
		string *p = ver.mutable_str(i);
		cout << "Get data : " << *p << endl;
	}

}
