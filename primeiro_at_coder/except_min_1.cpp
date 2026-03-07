#include<bits/stdc++.h>
using namespace std;
int n,q;

int i,j,k;

int b[10],c[2000005];
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    // Lê N_balls e Q_Queries
	cin>>n>>q;

    // Lê o valor de cada bola (tem N_balls bolas)
	for(i=1;i<=n;i++){
        cin>>c[i];
    }

    // Cria um set de pares (valor, índice) para armazenar as bolas
	set<pair<int,int>>s;

    // Insere as bolas no set
	for(i=1;i<=n;i++)s.insert({c[i],i});

    // Como resultado, s fica ordenado pelo valor da bola, e em caso de empate, pelo índice da bola

    // Processa cada query
	while(q--){

        // Lê o número de bolas a serem removidas
		cin>>k;
        
        // Lê os índices das bolas a serem removidas e as remove do set
        for(j=0;j<k;j++) {
            cin>>b[j];
            s.erase({c[b[j]],b[j]});
        }

        // Imprime o valor da bola com o menor valor (que é a primeira do set)
        cout<<s.begin()->first<<'\n';
		
        // Reinsere as bolas removidas de volta no set
        for(j=0;j<k;j++) {
            s.insert({c[b[j]],b[j]});
        }
	}
	return 0;
}