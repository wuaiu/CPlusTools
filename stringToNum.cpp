template<class Type>
Type stringToNum(const std::string &str) {
    std::istringstream iss(str);
    Type num;
    iss >> num;
    return num;
}

int main(){
    string str = -0.133679510809;
    double d = stringToNum<double>(str);
    std::cout << std::setprecision(13) << d << std::endl;
}
