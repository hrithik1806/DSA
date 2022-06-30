#include <iostream>
#include <vector>
#define it int
using namespace std;

it n;

vector<it> insSort(vector<it>);
void ajee_dikhao(it,vector<vector<it> > ,vector<vector<it> > ,vector<it> *);
// Insertion Sort
bool insertionSort(vector<pair<pair<int, int>, int>> &v) {
    bool sorted = true;
    for(int j=1; j>0; j--) {
        if(v[j].second > v[j-1].second)
            break;
        
        // swap(&v[j].second, &v[j-1].second);
        int temp = v[j].second;
        v[j].second = v[j-1].second;
        v[j-1].second = temp;
        sorted = false;
    }
    
    return sorted;
    
    // for(int i=0; i<v.size()-1; i++) {
    //     for(int j=i+1; j>0; j--) {
    //         if(v[j].second > v[j-1].second)
    //         break;
        
    //     // swap(&v[j].second, &v[j-1].second);
    //     int temp = v[j].second;
    //     v[j].second = v[j-1].second;
    //     v[j-1].second = temp;
    //     }
    // }
}

void printVector(vector<pair<pair<int, int>, int>> &v) {
    for(int i=0; i<v.size(); i++) 
        cout << v[i].second << " ";
    
    cout << endl;
}

void update(vector<pair<pair<int, int>, int>> &v, int *arr, int N) {
    // for(int i=0; i<v.size(); i++) 
    //     cout << "(" << v[i].first.first << ", " <<  v[i].first.second << ") -> " << v[i].second << "\n";
    int count = 0;
    for(int i=0; i<v.size(); i++) {
        *(arr + (v[i].first.first) * N + v[i].first.second) = v[i].second;
    }
    
    // cout << endl;
}

void printArray(int *arr, int N) {
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout << *(arr + i * N + j) << " ";
        }
        cout << endl;
    }
            // cout << arr[i][j] << " ";
    cout << endl;
}
it main() {
    it meri_value;
	it pehla_position;
	scanf("%d", &n);
	it dusara_position;
	it s_for_saurabh;
	it jhanda=0;
	
    it size[n];
    vector<vector<it> > mat(n,vector<it>(n)),hamara_pyara_list(n,vector<it>(n)),pos(n,vector<it>(n));
    vector<it> vosadi_ke[n];
    for(it i=0; i<n; i++) size[i]=0;
    for(it i=0; i<n; i++) {
        for(it j=0; j<n; j++) cin>>mat[i][j];      //input
    }
    for(it i=0; i<n/2; i++) {
        for(it j=i; j<n-i; j++) {
            vosadi_ke[i].push_back(mat[j][i]);
            hamara_pyara_list[j][i]=i;
            pos[j][i]=size[i];
            size[i]++;
        }
        for(it j=i+1; j<n-i-1; j++) {
            vosadi_ke[i].push_back(mat[n-i-1][j]);
            hamara_pyara_list[n-i-1][j]=i;
            pos[n-i-1][j]=size[i];
            size[i]++;
        }
    }
    for(it i=n/2; i<n; i++) {
        for(it j=i; j>=n-i-1; j--) {
            vosadi_ke[i].push_back(mat[j][i]);
            hamara_pyara_list[j][i]=i;
            pos[j][i]=size[i];
            size[i]++;
        }
        for(it j=i-1; j>n-i-1; j--) {
            vosadi_ke[i].push_back(mat[n-i-1][j]);
            hamara_pyara_list[n-i-1][j]=i;
            pos[n-i-1][j]=size[i];
            size[i]++;
        }
    }
    for(it i=1; i<vosadi_ke[0].size(); i++) 
    {
        for(it j=0; j<n; j++)
        {
            if(vosadi_ke[j].size()<=i) continue;
            meri_value=vosadi_ke[j][i];
            it k;
            for(k=i-1; k>=0; k--)
            {
                if(vosadi_ke[j][k]>meri_value)
                {
                    vosadi_ke[j][k+1]=vosadi_ke[j][k];
                }
                else break;
            }
            vosadi_ke[j][k+1]=meri_value;
        }
        ajee_dikhao(n,hamara_pyara_list,pos,vosadi_ke);
    }
    s_for_saurabh=vosadi_ke[0].size();
    for(it i=0; i<s_for_saurabh; i++)
    {
        for(it j=0; j<n/2; j++)
        {
            jhanda=0;
            if(vosadi_ke[n-j-1].size()<=i) 
            {
                continue;
            }
            vosadi_ke[j].push_back(vosadi_ke[n-j-1][i]);
            for(it q=0; q<n; q++) {
                for(it w=0; w<n; w++) {
                    if((hamara_pyara_list[q][w]==(n-j-1)) and (pos[q][w]==i)) {
                        pehla_position=q;
                        dusara_position=w;
                        jhanda=1;
                        break;
                    }
                }
                if(jhanda==1) break;
            }
            hamara_pyara_list[pehla_position][dusara_position]=j;
            pos[pehla_position][dusara_position]=size[j];
            size[j]++;
            vosadi_ke[j]=insSort(vosadi_ke[j]);
        }
        ajee_dikhao(n,hamara_pyara_list,pos,vosadi_ke);
    }
    return 0;
}


void ajee_dikhao(it n,vector<vector<it> > hamara_pyara_list,vector<vector<it> > pos,vector<it> vosadi_ke[]) {

    for(it i=0; i<n; i++) 
        for(it j=0; j<n; j++) 
            cout<<vosadi_ke[hamara_pyara_list[i][j]][pos[i][j]]<<" ";
        
    
    cout << endl;
}


vector<it> insSort(vector<it> vectoria_huh) {
    it tmp;
	it j;
    for(it i=1; i<vectoria_huh.size(); i++) {
       tmp=vectoria_huh[i];
        
		for(j=i-1; j>=0; j--) {
            if(vectoria_huh[j]>tmp) 
				vectoria_huh[j+1]=vectoria_huh[j];
            else break;
        }
		
        vectoria_huh[j+1]=tmp;
    }
	
    return vectoria_huh;
}