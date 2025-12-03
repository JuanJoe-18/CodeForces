import java.io.*;
import java.util.*;

class Pillar {
    int index;
    double x, y;
    boolean visited;
    
    Pillar(int index, double x, double y) {
        this.index = index;
        this.x = x;
        this.y = y;
        this.visited = false;
    }
}

public class Internwind {
    private static final double EPS = 1e-9;
    
    public static void main(String[] args) {
        BufferedReader br = null;
        PrintWriter pw = null;
        
        try {
            br = new BufferedReader(new InputStreamReader(System.in));
            pw = new PrintWriter(System.out);
            
            String line = br.readLine();
            if (line == null || line.trim().isEmpty()) {
                return;
            }
            
            StringTokenizer st = new StringTokenizer(line);
            if (st.countTokens() < 2) {
                return;
            }
            
            int n = Integer.parseInt(st.nextToken());
            double d = Double.parseDouble(st.nextToken());
            
            if (n <= 0 || d <= 0) {
                pw.println("-1");
                return;
            }
            
            List<Pillar> pillars = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                line = br.readLine();
                if (line == null || line.trim().isEmpty()) {
                    return;
                }
                st = new StringTokenizer(line);
                if (st.countTokens() < 2) {
                    return;
                }
                double x = Double.parseDouble(st.nextToken());
                double y = Double.parseDouble(st.nextToken());
                pillars.add(new Pillar(i + 1, x, y));
            }
            
            double cx = 0, cy = 0;
            double rope = d;
            
            while (true) {
                Pillar next = null;
                double bestAngle = Double.MAX_VALUE;
                double bestDist = Double.MAX_VALUE;
                
                for (Pillar p : pillars) {
                    if (p.visited) continue;
                    
                    double dx = p.x - cx;
                    double dy = p.y - cy;
                    double dist = Math.sqrt(dx * dx + dy * dy);
                    if (dist >= rope - EPS) continue;
                    
                    double angle = Math.atan2(dy, dx);
                    if (angle < 0) angle += 2 * Math.PI;
                    
                    if (angle < bestAngle - EPS || 
                        (Math.abs(angle - bestAngle) < EPS && dist < bestDist - EPS)) {
                        bestAngle = angle;
                        bestDist = dist;
                        next = p;
                    }
                }
                
                if (next == null) {
                    pw.println("-1");
                    break;
                }
                
                double dx = next.x - cx;
                double dy = next.y - cy;
                double dist = Math.sqrt(dx * dx + dy * dy);
                
                rope -= dist;
                cx = next.x;
                cy = next.y;
                next.visited = true;
                
                boolean canContinue = false;
                for (Pillar p : pillars) {
                    if (p.visited) continue;
                    double dx2 = p.x - cx;
                    double dy2 = p.y - cy;
                    double dist2 = Math.sqrt(dx2 * dx2 + dy2 * dy2);
                    if (dist2 < rope - EPS) {
                        canContinue = true;
                        break;
                    }
                }
                
                if (!canContinue) {
                    pw.println(next.index);
                    break;
                }
            }
            
        } catch (IOException e) {
            System.err.println("Error de E/O: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.err.println("Error de formato numérico: " + e.getMessage());
        } catch (Exception e) {
            System.err.println("Error inesperado: " + e.getMessage());
        } finally {
            try {
                if (pw != null) {
                    pw.flush();
                    pw.close();
                }
                if (br != null) {
                    br.close();
                }
            } catch (IOException e) {
                System.err.println("Error cerrando recursos: " + e.getMessage());
            }
        }
    }
}