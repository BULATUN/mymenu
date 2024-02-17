if (input1 == "openfile") { 
        std::fstream openedfile;  // аб'яўляем файл у кодзе
        if (input2 == "in") openedfile.open(input2, std::ios::in); openedfilemode = 'i'; //калі мы велі in то файл будзе толькі атрымоўваць інфармацыю
        if (input2 == "add")  openedfile.open(input2, std::ios::app); openedfilemode = 'a'; //калі add файл так сама бузде атрымоуваць інфармацію але дадаваць яе у канец файла 
        if (input2 == "out") openedfile.open(input2, std::ios::out); openedfilemode = 'o'; // out да вываду усей інфармаціі з файла
        if (openedfile) std::cout << "now this file is open" << std::endl;
        else std::cout << "err (str 106 file not open)";
         goto toMain; 
    }
    if (input1 == "openedfile") 
    {
        std::fstream openedfile;
        if (input2 == "out_all") {
            if (openedfilemode == 'o') openedfile >> buffer; std::cout << buffer; // выводзіць усе з файла
        }
        if (input2 == "add") {
            if (openedfilemode == 'a') openedfile << input3; //дадае ў канец файла input3
        }
        if (input2 == "in") {
            if (openedfilemode == 'i') openedfile << input3; //стіра усе у файле і дадае input3
        }
        else std::cout << "err: input2 != (out_all || add || in) (str 120)";
        goto toMain;
    }
    if (input1 == "openedfileclose") {
        std::fstream openedfile;
        openedfile.close();
