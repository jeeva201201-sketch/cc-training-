package minipro1;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.HashMap;

public class Smartparking {
    private static final int TOTAL_SLOTS = 20; // 🔹 Change this to increase slots
    private static HashMap<Integer, String> parkingSlots = new HashMap<>();
    private static JTextArea logArea;

    public static void main(String[] args) {
        JFrame frame = new JFrame("🚘 Smart Parking System (Swing)");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(800, 600);

        JPanel gridPanel = new JPanel(new GridLayout(4, 5, 10, 10)); // 4x5 grid
        JButton[] slotButtons = new JButton[TOTAL_SLOTS];

        // Create slots
        for (int i = 0; i < TOTAL_SLOTS; i++) {
            int slotNumber = i + 1;
            slotButtons[i] = new JButton("Slot " + slotNumber);
            slotButtons[i].setBackground(Color.GREEN);
            slotButtons[i].setOpaque(true);
            slotButtons[i].setFont(new Font("Arial", Font.BOLD, 14));
            
            slotButtons[i].addActionListener(e -> handleSlotClick(slotNumber, slotButtons[slotNumber-1]));
            
            gridPanel.add(slotButtons[i]);
        }

        // Log Area
        logArea = new JTextArea(8, 40);
        logArea.setEditable(false);
        JScrollPane scrollPane = new JScrollPane(logArea);

        frame.setLayout(new BorderLayout(10, 10));
        frame.add(gridPanel, BorderLayout.CENTER);
        frame.add(scrollPane, BorderLayout.SOUTH);

        frame.setVisible(true);
    }

    private static void handleSlotClick(int slot, JButton button) {
        if (!parkingSlots.containsKey(slot)) {
            // Free slot → book it
            String vehicle = JOptionPane.showInputDialog("Enter Vehicle Number for Slot " + slot + ":");
            if (vehicle != null && !vehicle.trim().isEmpty()) {
                parkingSlots.put(slot, vehicle);
                button.setBackground(Color.RED);
                log("✅ Vehicle " + vehicle + " parked at Slot " + slot);
            }
        } else {
            // Occupied slot → remove vehicle
            String vehicle = parkingSlots.get(slot);
            JOptionPane.showMessageDialog(null, "Slot " + slot + " released.\nVehicle: " + vehicle);
            parkingSlots.remove(slot);
            button.setBackground(Color.GREEN);
            log("🚗 Vehicle " + vehicle + " removed from Slot " + slot);
        }
    }

    private static void log(String message) {
        logArea.append(message + "\n");
    }
}