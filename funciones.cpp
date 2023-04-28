#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<float> notas;
    int Num_Materias;
    
    cout << "Ingrese la cantidad de materias cursadas en el semestre: ";
    cin >> Num_Materias;
    
    for (int i = 0; i < Num_Materias; i++) {
        float nota;
        cout << "Ingrese la nota de la materia " << i+1 << ": ";
        cin >> nota;
    }
    
    cout << "Todas las notas almacenadas: ";
    for (float nota : notas) {
        cout << nota << " ";
    }
    float sum ;
    for (float nota : notas) {
        sum += nota;
    }
    float promedio = sum / Num_Materias;
    cout << "\nPromedio de notas del semestre: " << promedio << endl;
    
    float nota_maxima = *max_element(notas.begin(), notas.end());
    float nota_minima = *min_element(notas.begin(), notas.end());
    cout << "Nota más alta obtenida: " << nota_maxima << endl;
    cout << "Nota más baja obtenida: " << nota_minima << endl;

    /*con mucho esfuerzo se logro, creo JAJAA, necesito ayuda por que para serle sincero vi un video para el promedio por que me costo*/
    
    return 0;
}





