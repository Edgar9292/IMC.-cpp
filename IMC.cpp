using namespace std;
int main() 
{
float imc, peso, altura;
  cout<< "\n Digite seu Peso!\n";
  cin>> peso;
  cout<< "Digite sua Altura!\n";
  cin>>altura;
  imc=peso/(altura*altura);
  cout << fixed << setprecision(1);
  cout<< " \n Índice de Massa Corporal= "<<imc<<endl;

  if(imc<18.5)
    {
      cout<< "Você está abaixo do peso!\n";
     }
  if(imc>=18.5 && imc<24)
    {
      cout<< "Você está com peso normal!\n";
     }
  if(imc>=24 && imc<29)
    {
      cout<< "Você está acima do peso! \n";
     }
  if(imc>29)
    {
      cout<< ;'Você está obeso!\n";
     }
}