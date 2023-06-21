#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void selecLan(string nome,string ext){
    string exts, arqnn;
    if(ext == "java"){
        exts = ".java";
        arqnn = "D:\\Codigos\\Java\\" + nome + exts;
        ofstream file(arqnn);
        file << "\npublic class " + nome + "{\n" + "    public static void main(String args[]){ \n"+ "\n" + "    }" + "\n}";
        system("start D:\\Codigos\\Java\\");
    }
    if(ext == "cpp"){
        exts = ".cpp";
        arqnn = "D:\\Codigos\\C++\\" + nome + exts;
        ofstream file(arqnn);
        file << "\nint main(){\n\n    }";
        system("start D:\\Codigos\\C++\\");
    }
    if(ext == "python"){
        exts = ".py";
        arqnn = "D:\\Codigos\\Python\\" + nome + exts;
        ofstream file(arqnn);
        system("start D:\\Codigos\\Python\\");
    }
}

int main(int argc, char *argv[]){
    selecLan(argv[1],argv[2]);
}