// this is the class that implements Prim's algorithm

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.PriorityQueue;


public class Prim {

	private ArrayList<Node> msTree;   // list of nodes that form min-span-tree
	private int mstCost;              // total weight of MST

	public Prim(){
		this.msTree = new ArrayList<>();
		mstCost = 0;
	}

	public ArrayList<Node> getmsTree() { return this.msTree; }
	public int getmstCost() { return this.mstCost; }

	public void solveMST(Graph g, String root) {
		int inf = 1000000000;
		Node r = new Node();
		for (Node t : g.getVertices()) {
			if (t.getLabel().equals(root)) {
				r = t;
				break;
			}
		}
		for (Node u : g.getVertices()) {
			u.setKey(inf);
			u.setParent(null);
		}
		r.setKey(0);
		LinkedList<Node> Q = new LinkedList<Node>();
		for (Node i : g.getVertices())
			Q.add(i);
		while (Q.size() != 0) {
			int minIndex = 0;
			for (int i = 0; i < Q.size(); i++) {
				if (Q.get(i).getKey() < Q.get(minIndex).getKey())
					minIndex = i;
			}
			Node u = Q.get(minIndex);
			for (Edge e : u.getEdges()) {
				Node v;
				if (e.getSource() == u)
					v = e.getDestination();
				else
					v = e.getSource();
				if (Q.contains(v) && e.getWeight() < v.getKey()) {
					v.setKey(e.getWeight());
					v.setParent(u);
				}
			}
			Q.remove(u);
		}
		for (Node gn : g.getVertices())
			msTree.add(gn);
		for (Node n : msTree)
			mstCost += n.getKey();
        // Insert the code that implements Prim's algorithm here.
        // You must find min-span-tree of graph g and store it in property 'msTree'
        // of this class. Also find the total weight of MST and
        // store it in property 'mstCost' of this class
    }

    public void printMST() {               //print min-span-tree and the total cost
    	for (Node v: this.msTree) {
    		if (v.getParent() == null)
            	System.out.println("Root " + v.getLabel());
            else
            	System.out.println("Edge " + v.getParent().getLabel() + " -- " + v.getLabel() +
            			           " Weight= " + v.getKey());
        }
    	System.out.println("Total MST cost: " + this.mstCost);
    }
 }
