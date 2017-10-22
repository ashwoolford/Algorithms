
package dijkstra.s.algorithm;


public class DijkstraSAlgorithm {
    
    public static final int V = 5;
    public static void main(String[] args) {
       
       int adj[][] = {{0,5,0,0,2},
                      {5,0,7,3,4},
                      {0,7,0,9,0},
                      {0,3,9,0,10},
                      {2,4,0,10,0}
                     };
       
       dijkstra(adj);
       
       
    }
    
    public static void printSol(int dist[]){
        for(int i = 0 ; i < V ;++i)
            println(dist[i]);
    }
    
    public static int findMin(int dis[] , boolean visited[]){
        int max = Integer.MAX_VALUE;
        int p = 0;
        
        for(int i = 0 ; i < V ;++i){
            if(!visited[i] && dis[i] < max){
                max = dis[i];
                p = i;
                
            }
        }
        
        return p;
    }
    
    
    public static void dijkstra(int adj[][]){
        
        boolean isVisited[] = new boolean[V];
        int dist[] = new int[V];
        
        for(int i = 0 ; i < V ;++i){
            isVisited[i] = false;
            dist[i] = Integer.MAX_VALUE;
        }
        
        dist[0] = 0;
        
        
        for(int i = 0 ; i < V ;++i){
             int u = findMin(dist , isVisited);
             isVisited[u] = true;
             
          for(int j = 0 ; j < V ;++j){
              if(adj[u][j] !=0 && adj[u][j]+dist[u] < dist[j]){
                  dist[j] = adj[u][j] + dist[u];
                  
              }
              
          }  
        }
        
       
       printSol(dist); 
        
        
    }
    
    
    public static void print(Object ob){
        System.out.print(ob);
    }
    
    public static void println(Object ob){
        System.out.println(ob);
    }
    
    
}
