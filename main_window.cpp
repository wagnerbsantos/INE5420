#include "main_window.h"
#include "button_box.h"
#include <iostream>

MainWindow::MainWindow()
  : b_menu(Gtk::ORIENTATION_VERTICAL),
    b_view(Gtk::ORIENTATION_VERTICAL),
    f_objects("Objects"),
    f_window_menu("Window"),
    f_view("Viewport"),
    f_log("Log"),
    bt_box(Gtk::ORIENTATION_VERTICAL)
{
  // Main Window Configurations
    set_title("Main Window");
    set_border_width(10);

  // Divide Main Window in two areas
    add(main_pane);

  // Left area contains application menu
  // Right area contains viewport and log
    main_pane.add1(b_menu);
    main_pane.add2(b_view);

  // Include Move buttons
    f_window_menu.add(bt_box);
    bt_box.pack_start(*Gtk::manage(
              new ButtonBox(false, "Directionals", 10,
                  Gtk::BUTTONBOX_SPREAD)),
          Gtk::PACK_EXPAND_WIDGET);

  // Include child widgets in left area
    b_menu.pack_start(f_objects, Gtk::PACK_EXPAND_WIDGET, 10);
    b_menu.pack_start(f_window_menu, Gtk::PACK_EXPAND_WIDGET, 10);

  // Include child widgets in right area
    b_view.pack_start(f_view, Gtk::PACK_EXPAND_WIDGET, 10);
    b_view.pack_start(f_log, Gtk::PACK_EXPAND_WIDGET, 10);

  // The final step is to display this newly created widget
  show_all_children();

}

MainWindow::~MainWindow() {}
